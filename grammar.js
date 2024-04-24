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
    statement_begin: ($) => seq("{%", optional($.white_space_control)),
    statement_end: ($) => seq(optional($.white_space_control), "%}"),
    statement: ($) =>
      seq(
        $.statement_begin,
        $.keyword,
        optional($._inner_text),
        $.statement_end,
      ),

    expression_begin: ($) => seq("{{", optional($.white_space_control)),
    expression_end: ($) => seq(optional($.white_space_control), "}}"),
    expression: ($) =>
      seq(
        "{{",
        optional($.white_space_control),
        optional(
          repeat(
            choice(
              prec(1, $.fn_call),
              $.identifier,
              $.list,
              $.dict,
              $.string,
              $.integer,
              $.float,
              $.boolean,
              $.operator,
            ),
          ),
        ),
        optional($.white_space_control),
        "}}",
      ),

    kwarg: ($) =>
      seq(field("key", $.identifier), "=", field("value", $._inner_text)),
    argument_list: ($) =>
      seq(
        "(",
        optional(commaSep1(choice($._inner_text, $.kwarg))),
        optional(","),
        ")",
      ),

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
          $.fn_call,
          $.identifier,
          $.keyword,
          $.float,
          $.integer,
          $.boolean,
          $.list,
          $.dict,
          $._white_space,
          $.operator,
          $.string,
        ),
      ),
    integer: () => /-?\d+/,
    float: () => /-?\d+\.\d+/,
    boolean: () => choice("True", "False"),
    operator: () => /[^\w_{#%}'"]+/,
    string: () => /['"][^'"]*['"]/,

    list: ($) =>
      seq("[", optional(commaSep1($._inner_text)), optional(","), "]"),
    dict: ($) =>
      seq("{", optional(commaSep1($._inner_text)), optional(","), "}"),
    pair: ($) =>
      seq(field("key", $.string), ":", field("value", $._inner_text)),

    identifier: () => /[\w_]+/,

    fn_call: ($) =>
      seq(field("fn", $.identifier), field("args", $.argument_list)),
  },
});
