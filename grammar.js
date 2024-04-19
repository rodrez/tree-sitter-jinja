/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return sep1(rule, ",");
}
/**
 * Creates a rule to match one or more occurrences of `rule` separated by `sep`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @return {SeqRule}
 *
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

module.exports = grammar({
  name: "jinja",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._node),
    text: ($) => choice(/[^{#%}]+/, $.not),
    not: () =>
      choice(
        /[{]([^{#%]|)/,
        /([^}#%]|)[}]/,
        /([^{]|)#([^}]|)/,
        /([^{]|)%([^}]|)/,
      ),

    _node: ($) => choice($.statement, $.expression, $.jinja_comment, $.text),

    // Content should be a sequence of nodes, anything _not and _text
    content: ($) => repeat(choice($._node, $.not, $.text)),
    statement: ($) =>
      seq(
        $.statement_begin,
        $.keyword,
        optional($._inner_text),
        $.statement_end,
      ),
    statement_begin: ($) => seq("{%", optional($.white_space_control)),
    statement_end: ($) => seq(optional($.white_space_control), "%}"),
    params_begin: ($) => seq("(", optional($.white_space_control)),
    params_end: ($) => seq(optional($.white_space_control), ")"),

    expression: ($) =>
      seq($.expression_begin, $._inner_text2, $.expression_end),
    expression_begin: () => seq("{{"),
    expression_end: () => seq("}}"),

    jinja_comment: () => seq("{#", /[^#]*/, "#}"),

    keyword: () =>
      choice(
        "for",
        "in",
        "endfor",
        "if",
        "and",
        "or",
        "endif",
        "else",
        "elif",
        "raw",
        "endraw",
        "macro",
        "endmacro",
        "extends",
        "block",
        "endblock",
        "call",
        "endcall",
        "filter",
        "endfilter",
        "set",
        "endset",
        "include",
        "import",
        "from",
        "autoescape",
        "endautoescape",
        "trans",
        "endtrans",
        "pluralize",
        "with",
        "endwith",
        "debug",
        "do",
      ),
    white_space_control: () => /[-+]/,
    _white_space: () => /\s+/,

    _inner_text: ($) =>
      repeat1(
        choice(
          $.keyword,
          $.float,
          $.integer,
          $.boolean,
          field("identifier", $.identifier),
          $._white_space,
          $.operator,
          $.string,
        ),
      ),
    _inner_text2: ($) =>
      repeat1(
        choice(
          field("identifier", $.identifier),
          $._white_space,
          $.float,
          $.boolean,
          $.integer,
          $.operator,
          $.string,
        ),
      ),
    parameters: ($) => seq("(", optional($._parameters), ")"),
    _parameters: ($) => seq(commaSep1($.parameter), optional(",")),
    parameter: ($) => choice($.identifier),
    integer: () => /-?\d+/,
    float: () => /-?\d+\.\d+/,
    boolean: () => choice("True", "False"),
    identifier: () => /[\w_]+/,
    operator: () => /[^\w_{#%}'"]+/,
    string: () => /['"][^'"]*['"]/,

    // TODO: Extend the syntax to better match macro(param1, param2, ...)
  },
});
