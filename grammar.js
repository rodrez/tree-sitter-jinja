//{% ... %} for Statements

//{{ ... }} for Expressions to print to the template output

//{# ... #} for Comments not included in the template output

//valid:

//{%- if foo -%}...{% endif %}

//invalid:

//{% - if foo - %}...{% endif %}

module.exports = grammar({
  name: "jinja",

  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._node),
    text: ($) => choice(/[^{#%}]+/, $.not),
    not: ($) =>
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

    expression: ($) =>
      seq($.expression_begin, $._inner_text2, $.expression_end),
    expression_begin: ($) => seq("{{"),
    expression_end: ($) => seq("}}"),

    jinja_comment: ($) => seq("{#", /[^#]*/, "#}"),

    keyword: ($) =>
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
    white_space_control: ($) => /[-+]/,
    _white_space: ($) => /\s+/,

    _inner_text: ($) =>
      repeat1(
        choice(
          $.keyword,
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
          $.operator,
          $.string,
        ),
      ),

    identifier: ($) => /[\w_]+/,
    operator: ($) => /[^\w_{#%}'"]+/,
    string: ($) => /['"][^'"]*['"]/,
  },
});
