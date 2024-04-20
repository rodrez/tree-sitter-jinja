#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_text_token1 = 2,
  aux_sym_not_token1 = 3,
  aux_sym_not_token2 = 4,
  aux_sym_not_token3 = 5,
  aux_sym_not_token4 = 6,
  anon_sym_LBRACE_PERCENT = 7,
  anon_sym_PERCENT_RBRACE = 8,
  anon_sym_LBRACE_LBRACE = 9,
  anon_sym_RBRACE_RBRACE = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_LBRACE_POUND = 14,
  aux_sym_jinja_comment_token1 = 15,
  anon_sym_POUND_RBRACE = 16,
  anon_sym_for = 17,
  anon_sym_in = 18,
  anon_sym_endfor = 19,
  anon_sym_if = 20,
  anon_sym_and = 21,
  anon_sym_or = 22,
  anon_sym_endif = 23,
  anon_sym_else = 24,
  anon_sym_elif = 25,
  anon_sym_raw = 26,
  anon_sym_endraw = 27,
  anon_sym_macro = 28,
  anon_sym_endmacro = 29,
  anon_sym_extends = 30,
  anon_sym_block = 31,
  anon_sym_endblock = 32,
  anon_sym_call = 33,
  anon_sym_endcall = 34,
  anon_sym_filter = 35,
  anon_sym_endfilter = 36,
  anon_sym_set = 37,
  anon_sym_endset = 38,
  anon_sym_include = 39,
  anon_sym_import = 40,
  anon_sym_from = 41,
  anon_sym_autoescape = 42,
  anon_sym_endautoescape = 43,
  anon_sym_trans = 44,
  anon_sym_endtrans = 45,
  anon_sym_pluralize = 46,
  anon_sym_with = 47,
  anon_sym_endwith = 48,
  anon_sym_debug = 49,
  anon_sym_do = 50,
  sym_white_space_control = 51,
  sym__white_space = 52,
  sym_integer = 53,
  sym_float = 54,
  anon_sym_True = 55,
  anon_sym_False = 56,
  sym_operator = 57,
  sym_string = 58,
  sym_source_file = 59,
  sym_text = 60,
  sym_not = 61,
  sym__node = 62,
  sym_statement = 63,
  sym_statement_begin = 64,
  sym_statement_end = 65,
  sym_expression = 66,
  sym_expression_begin = 67,
  sym_expression_end = 68,
  sym_jinja_comment = 69,
  sym_keyword = 70,
  aux_sym__inner_text = 71,
  aux_sym__inner_text2 = 72,
  sym_boolean = 73,
  aux_sym_source_file_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_not_token1] = "not_token1",
  [aux_sym_not_token2] = "not_token2",
  [aux_sym_not_token3] = "not_token3",
  [aux_sym_not_token4] = "not_token4",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_jinja_comment_token1] = "jinja_comment_token1",
  [anon_sym_POUND_RBRACE] = "#}",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_endfor] = "endfor",
  [anon_sym_if] = "if",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_endif] = "endif",
  [anon_sym_else] = "else",
  [anon_sym_elif] = "elif",
  [anon_sym_raw] = "raw",
  [anon_sym_endraw] = "endraw",
  [anon_sym_macro] = "macro",
  [anon_sym_endmacro] = "endmacro",
  [anon_sym_extends] = "extends",
  [anon_sym_block] = "block",
  [anon_sym_endblock] = "endblock",
  [anon_sym_call] = "call",
  [anon_sym_endcall] = "endcall",
  [anon_sym_filter] = "filter",
  [anon_sym_endfilter] = "endfilter",
  [anon_sym_set] = "set",
  [anon_sym_endset] = "endset",
  [anon_sym_include] = "include",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_autoescape] = "autoescape",
  [anon_sym_endautoescape] = "endautoescape",
  [anon_sym_trans] = "trans",
  [anon_sym_endtrans] = "endtrans",
  [anon_sym_pluralize] = "pluralize",
  [anon_sym_with] = "with",
  [anon_sym_endwith] = "endwith",
  [anon_sym_debug] = "debug",
  [anon_sym_do] = "do",
  [sym_white_space_control] = "white_space_control",
  [sym__white_space] = "_white_space",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [sym_operator] = "operator",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_text] = "text",
  [sym_not] = "not",
  [sym__node] = "_node",
  [sym_statement] = "statement",
  [sym_statement_begin] = "statement_begin",
  [sym_statement_end] = "statement_end",
  [sym_expression] = "expression",
  [sym_expression_begin] = "expression_begin",
  [sym_expression_end] = "expression_end",
  [sym_jinja_comment] = "jinja_comment",
  [sym_keyword] = "keyword",
  [aux_sym__inner_text] = "_inner_text",
  [aux_sym__inner_text2] = "_inner_text2",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_not_token1] = aux_sym_not_token1,
  [aux_sym_not_token2] = aux_sym_not_token2,
  [aux_sym_not_token3] = aux_sym_not_token3,
  [aux_sym_not_token4] = aux_sym_not_token4,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_jinja_comment_token1] = aux_sym_jinja_comment_token1,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_raw] = anon_sym_raw,
  [anon_sym_endraw] = anon_sym_endraw,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_endmacro] = anon_sym_endmacro,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_endblock] = anon_sym_endblock,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_endcall] = anon_sym_endcall,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_endfilter] = anon_sym_endfilter,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_endset] = anon_sym_endset,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_autoescape] = anon_sym_autoescape,
  [anon_sym_endautoescape] = anon_sym_endautoescape,
  [anon_sym_trans] = anon_sym_trans,
  [anon_sym_endtrans] = anon_sym_endtrans,
  [anon_sym_pluralize] = anon_sym_pluralize,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_endwith] = anon_sym_endwith,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_do] = anon_sym_do,
  [sym_white_space_control] = sym_white_space_control,
  [sym__white_space] = sym__white_space,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [sym_operator] = sym_operator,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_text] = sym_text,
  [sym_not] = sym_not,
  [sym__node] = sym__node,
  [sym_statement] = sym_statement,
  [sym_statement_begin] = sym_statement_begin,
  [sym_statement_end] = sym_statement_end,
  [sym_expression] = sym_expression,
  [sym_expression_begin] = sym_expression_begin,
  [sym_expression_end] = sym_expression_end,
  [sym_jinja_comment] = sym_jinja_comment,
  [sym_keyword] = sym_keyword,
  [aux_sym__inner_text] = aux_sym__inner_text,
  [aux_sym__inner_text2] = aux_sym__inner_text2,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_not_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_not_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_not_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_not_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_jinja_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endraw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endautoescape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtrans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pluralize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [sym_white_space_control] = {
    .visible = true,
    .named = true,
  },
  [sym__white_space] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_end] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_end] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__inner_text] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inner_text2] = {
    .visible = false,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_identifier = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_identifier] = "identifier",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 0},
  [1] =
    {field_identifier, 1, .inherited = true},
  [2] =
    {field_identifier, 0, .inherited = true},
    {field_identifier, 1, .inherited = true},
  [4] =
    {field_identifier, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 5,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
};

static inline bool sym_operator_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '%'
      ? (c < '"'
        ? c == 0
        : c <= '#')
      : (c <= '%' || c == '\''))
    : (c <= '9' || (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '}') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '}') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(56);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_not_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_not_token1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(18);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_not_token1);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_not_token2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_not_token2);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '%') ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_not_token3);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_not_token4);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_not_token4);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '%') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_not_token4);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_jinja_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_jinja_comment_token1);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_white_space_control);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_white_space_control);
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_white_space_control);
      if (lookahead == '#') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_white_space_control);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_white_space_control);
      if (!sym_operator_character_set_1(lookahead)) ADVANCE(55);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__white_space);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_operator);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '\'' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_' &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_operator);
      if (!sym_operator_character_set_1(lookahead)) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'w') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'w') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 100:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_trans);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_endset);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_endcall);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_endwith);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 138:
      if (lookahead == 'z') ADVANCE(145);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_endblock);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_endtrans);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 147:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_endfilter);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_pluralize);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_autoescape);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_endautoescape);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_not_token1] = ACTIONS(1),
    [aux_sym_not_token3] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_endraw] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_endmacro] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_endblock] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_endcall] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_endfilter] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_endset] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_autoescape] = ACTIONS(1),
    [anon_sym_endautoescape] = ACTIONS(1),
    [anon_sym_trans] = ACTIONS(1),
    [anon_sym_endtrans] = ACTIONS(1),
    [anon_sym_pluralize] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_endwith] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [sym_white_space_control] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym_text] = STATE(11),
    [sym_not] = STATE(22),
    [sym__node] = STATE(11),
    [sym_statement] = STATE(11),
    [sym_statement_begin] = STATE(8),
    [sym_expression] = STATE(11),
    [sym_expression_begin] = STATE(15),
    [sym_jinja_comment] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [aux_sym_not_token1] = ACTIONS(7),
    [aux_sym_not_token2] = ACTIONS(7),
    [aux_sym_not_token3] = ACTIONS(7),
    [aux_sym_not_token4] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [anon_sym_LBRACE_POUND] = ACTIONS(13),
  },
  [2] = {
    [sym_statement_end] = STATE(16),
    [sym_keyword] = STATE(4),
    [aux_sym__inner_text] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_endfor] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_endif] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_elif] = ACTIONS(19),
    [anon_sym_raw] = ACTIONS(19),
    [anon_sym_endraw] = ACTIONS(19),
    [anon_sym_macro] = ACTIONS(19),
    [anon_sym_endmacro] = ACTIONS(19),
    [anon_sym_extends] = ACTIONS(19),
    [anon_sym_block] = ACTIONS(19),
    [anon_sym_endblock] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(19),
    [anon_sym_endcall] = ACTIONS(19),
    [anon_sym_filter] = ACTIONS(19),
    [anon_sym_endfilter] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(19),
    [anon_sym_endset] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(19),
    [anon_sym_autoescape] = ACTIONS(19),
    [anon_sym_endautoescape] = ACTIONS(19),
    [anon_sym_trans] = ACTIONS(19),
    [anon_sym_endtrans] = ACTIONS(19),
    [anon_sym_pluralize] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(19),
    [anon_sym_endwith] = ACTIONS(19),
    [anon_sym_debug] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [sym_white_space_control] = ACTIONS(21),
    [sym__white_space] = ACTIONS(23),
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
    [sym_operator] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
  },
  [3] = {
    [sym_statement_end] = STATE(23),
    [sym_keyword] = STATE(2),
    [aux_sym__inner_text] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_endfor] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(19),
    [anon_sym_endif] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_elif] = ACTIONS(19),
    [anon_sym_raw] = ACTIONS(19),
    [anon_sym_endraw] = ACTIONS(19),
    [anon_sym_macro] = ACTIONS(19),
    [anon_sym_endmacro] = ACTIONS(19),
    [anon_sym_extends] = ACTIONS(19),
    [anon_sym_block] = ACTIONS(19),
    [anon_sym_endblock] = ACTIONS(19),
    [anon_sym_call] = ACTIONS(19),
    [anon_sym_endcall] = ACTIONS(19),
    [anon_sym_filter] = ACTIONS(19),
    [anon_sym_endfilter] = ACTIONS(19),
    [anon_sym_set] = ACTIONS(19),
    [anon_sym_endset] = ACTIONS(19),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(19),
    [anon_sym_autoescape] = ACTIONS(19),
    [anon_sym_endautoescape] = ACTIONS(19),
    [anon_sym_trans] = ACTIONS(19),
    [anon_sym_endtrans] = ACTIONS(19),
    [anon_sym_pluralize] = ACTIONS(19),
    [anon_sym_with] = ACTIONS(19),
    [anon_sym_endwith] = ACTIONS(19),
    [anon_sym_debug] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [sym_white_space_control] = ACTIONS(21),
    [sym__white_space] = ACTIONS(27),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(25),
    [anon_sym_False] = ACTIONS(25),
    [sym_operator] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
  },
  [4] = {
    [sym_keyword] = STATE(4),
    [aux_sym__inner_text] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(32),
    [anon_sym_for] = ACTIONS(34),
    [anon_sym_in] = ACTIONS(34),
    [anon_sym_endfor] = ACTIONS(34),
    [anon_sym_if] = ACTIONS(34),
    [anon_sym_and] = ACTIONS(34),
    [anon_sym_or] = ACTIONS(34),
    [anon_sym_endif] = ACTIONS(34),
    [anon_sym_else] = ACTIONS(34),
    [anon_sym_elif] = ACTIONS(34),
    [anon_sym_raw] = ACTIONS(34),
    [anon_sym_endraw] = ACTIONS(34),
    [anon_sym_macro] = ACTIONS(34),
    [anon_sym_endmacro] = ACTIONS(34),
    [anon_sym_extends] = ACTIONS(34),
    [anon_sym_block] = ACTIONS(34),
    [anon_sym_endblock] = ACTIONS(34),
    [anon_sym_call] = ACTIONS(34),
    [anon_sym_endcall] = ACTIONS(34),
    [anon_sym_filter] = ACTIONS(34),
    [anon_sym_endfilter] = ACTIONS(34),
    [anon_sym_set] = ACTIONS(34),
    [anon_sym_endset] = ACTIONS(34),
    [anon_sym_include] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(34),
    [anon_sym_from] = ACTIONS(34),
    [anon_sym_autoescape] = ACTIONS(34),
    [anon_sym_endautoescape] = ACTIONS(34),
    [anon_sym_trans] = ACTIONS(34),
    [anon_sym_endtrans] = ACTIONS(34),
    [anon_sym_pluralize] = ACTIONS(34),
    [anon_sym_with] = ACTIONS(34),
    [anon_sym_endwith] = ACTIONS(34),
    [anon_sym_debug] = ACTIONS(34),
    [anon_sym_do] = ACTIONS(34),
    [sym_white_space_control] = ACTIONS(32),
    [sym__white_space] = ACTIONS(37),
    [sym_integer] = ACTIONS(37),
    [sym_float] = ACTIONS(37),
    [anon_sym_True] = ACTIONS(40),
    [anon_sym_False] = ACTIONS(40),
    [sym_operator] = ACTIONS(37),
    [sym_string] = ACTIONS(37),
  },
  [5] = {
    [sym_identifier] = ACTIONS(43),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(43),
    [anon_sym_for] = ACTIONS(43),
    [anon_sym_in] = ACTIONS(43),
    [anon_sym_endfor] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(43),
    [anon_sym_or] = ACTIONS(43),
    [anon_sym_endif] = ACTIONS(43),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_elif] = ACTIONS(43),
    [anon_sym_raw] = ACTIONS(43),
    [anon_sym_endraw] = ACTIONS(43),
    [anon_sym_macro] = ACTIONS(43),
    [anon_sym_endmacro] = ACTIONS(43),
    [anon_sym_extends] = ACTIONS(43),
    [anon_sym_block] = ACTIONS(43),
    [anon_sym_endblock] = ACTIONS(43),
    [anon_sym_call] = ACTIONS(43),
    [anon_sym_endcall] = ACTIONS(43),
    [anon_sym_filter] = ACTIONS(43),
    [anon_sym_endfilter] = ACTIONS(43),
    [anon_sym_set] = ACTIONS(43),
    [anon_sym_endset] = ACTIONS(43),
    [anon_sym_include] = ACTIONS(43),
    [anon_sym_import] = ACTIONS(43),
    [anon_sym_from] = ACTIONS(43),
    [anon_sym_autoescape] = ACTIONS(43),
    [anon_sym_endautoescape] = ACTIONS(43),
    [anon_sym_trans] = ACTIONS(43),
    [anon_sym_endtrans] = ACTIONS(43),
    [anon_sym_pluralize] = ACTIONS(43),
    [anon_sym_with] = ACTIONS(43),
    [anon_sym_endwith] = ACTIONS(43),
    [anon_sym_debug] = ACTIONS(43),
    [anon_sym_do] = ACTIONS(43),
    [sym_white_space_control] = ACTIONS(43),
    [sym__white_space] = ACTIONS(43),
    [sym_integer] = ACTIONS(43),
    [sym_float] = ACTIONS(43),
    [anon_sym_True] = ACTIONS(43),
    [anon_sym_False] = ACTIONS(43),
    [sym_operator] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
  },
  [6] = {
    [sym_identifier] = ACTIONS(45),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(45),
    [anon_sym_for] = ACTIONS(45),
    [anon_sym_in] = ACTIONS(45),
    [anon_sym_endfor] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_or] = ACTIONS(45),
    [anon_sym_endif] = ACTIONS(45),
    [anon_sym_else] = ACTIONS(45),
    [anon_sym_elif] = ACTIONS(45),
    [anon_sym_raw] = ACTIONS(45),
    [anon_sym_endraw] = ACTIONS(45),
    [anon_sym_macro] = ACTIONS(45),
    [anon_sym_endmacro] = ACTIONS(45),
    [anon_sym_extends] = ACTIONS(45),
    [anon_sym_block] = ACTIONS(45),
    [anon_sym_endblock] = ACTIONS(45),
    [anon_sym_call] = ACTIONS(45),
    [anon_sym_endcall] = ACTIONS(45),
    [anon_sym_filter] = ACTIONS(45),
    [anon_sym_endfilter] = ACTIONS(45),
    [anon_sym_set] = ACTIONS(45),
    [anon_sym_endset] = ACTIONS(45),
    [anon_sym_include] = ACTIONS(45),
    [anon_sym_import] = ACTIONS(45),
    [anon_sym_from] = ACTIONS(45),
    [anon_sym_autoescape] = ACTIONS(45),
    [anon_sym_endautoescape] = ACTIONS(45),
    [anon_sym_trans] = ACTIONS(45),
    [anon_sym_endtrans] = ACTIONS(45),
    [anon_sym_pluralize] = ACTIONS(45),
    [anon_sym_with] = ACTIONS(45),
    [anon_sym_endwith] = ACTIONS(45),
    [anon_sym_debug] = ACTIONS(45),
    [anon_sym_do] = ACTIONS(45),
    [sym_white_space_control] = ACTIONS(45),
    [sym__white_space] = ACTIONS(45),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(45),
    [anon_sym_True] = ACTIONS(45),
    [anon_sym_False] = ACTIONS(45),
    [sym_operator] = ACTIONS(45),
    [sym_string] = ACTIONS(45),
  },
  [7] = {
    [sym_identifier] = ACTIONS(47),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(47),
    [anon_sym_for] = ACTIONS(47),
    [anon_sym_in] = ACTIONS(47),
    [anon_sym_endfor] = ACTIONS(47),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_and] = ACTIONS(47),
    [anon_sym_or] = ACTIONS(47),
    [anon_sym_endif] = ACTIONS(47),
    [anon_sym_else] = ACTIONS(47),
    [anon_sym_elif] = ACTIONS(47),
    [anon_sym_raw] = ACTIONS(47),
    [anon_sym_endraw] = ACTIONS(47),
    [anon_sym_macro] = ACTIONS(47),
    [anon_sym_endmacro] = ACTIONS(47),
    [anon_sym_extends] = ACTIONS(47),
    [anon_sym_block] = ACTIONS(47),
    [anon_sym_endblock] = ACTIONS(47),
    [anon_sym_call] = ACTIONS(47),
    [anon_sym_endcall] = ACTIONS(47),
    [anon_sym_filter] = ACTIONS(47),
    [anon_sym_endfilter] = ACTIONS(47),
    [anon_sym_set] = ACTIONS(47),
    [anon_sym_endset] = ACTIONS(47),
    [anon_sym_include] = ACTIONS(47),
    [anon_sym_import] = ACTIONS(47),
    [anon_sym_from] = ACTIONS(47),
    [anon_sym_autoescape] = ACTIONS(47),
    [anon_sym_endautoescape] = ACTIONS(47),
    [anon_sym_trans] = ACTIONS(47),
    [anon_sym_endtrans] = ACTIONS(47),
    [anon_sym_pluralize] = ACTIONS(47),
    [anon_sym_with] = ACTIONS(47),
    [anon_sym_endwith] = ACTIONS(47),
    [anon_sym_debug] = ACTIONS(47),
    [anon_sym_do] = ACTIONS(47),
    [sym_white_space_control] = ACTIONS(47),
    [sym__white_space] = ACTIONS(47),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(47),
    [anon_sym_True] = ACTIONS(47),
    [anon_sym_False] = ACTIONS(47),
    [sym_operator] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(19), 1,
      anon_sym_in,
    STATE(3), 1,
      sym_keyword,
    ACTIONS(49), 33,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_endif,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_raw,
      anon_sym_endraw,
      anon_sym_macro,
      anon_sym_endmacro,
      anon_sym_extends,
      anon_sym_block,
      anon_sym_endblock,
      anon_sym_call,
      anon_sym_endcall,
      anon_sym_filter,
      anon_sym_endfilter,
      anon_sym_set,
      anon_sym_endset,
      anon_sym_include,
      anon_sym_import,
      anon_sym_from,
      anon_sym_autoescape,
      anon_sym_endautoescape,
      anon_sym_trans,
      anon_sym_endtrans,
      anon_sym_pluralize,
      anon_sym_with,
      anon_sym_endwith,
      anon_sym_debug,
      anon_sym_do,
  [42] = 3,
    ACTIONS(53), 1,
      anon_sym_in,
    ACTIONS(55), 1,
      sym_white_space_control,
    ACTIONS(51), 33,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_endif,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_raw,
      anon_sym_endraw,
      anon_sym_macro,
      anon_sym_endmacro,
      anon_sym_extends,
      anon_sym_block,
      anon_sym_endblock,
      anon_sym_call,
      anon_sym_endcall,
      anon_sym_filter,
      anon_sym_endfilter,
      anon_sym_set,
      anon_sym_endset,
      anon_sym_include,
      anon_sym_import,
      anon_sym_from,
      anon_sym_autoescape,
      anon_sym_endautoescape,
      anon_sym_trans,
      anon_sym_endtrans,
      anon_sym_pluralize,
      anon_sym_with,
      anon_sym_endwith,
      anon_sym_debug,
      anon_sym_do,
  [84] = 2,
    ACTIONS(59), 1,
      anon_sym_in,
    ACTIONS(57), 33,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_if,
      anon_sym_and,
      anon_sym_or,
      anon_sym_endif,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_raw,
      anon_sym_endraw,
      anon_sym_macro,
      anon_sym_endmacro,
      anon_sym_extends,
      anon_sym_block,
      anon_sym_endblock,
      anon_sym_call,
      anon_sym_endcall,
      anon_sym_filter,
      anon_sym_endfilter,
      anon_sym_set,
      anon_sym_endset,
      anon_sym_include,
      anon_sym_import,
      anon_sym_from,
      anon_sym_autoescape,
      anon_sym_endautoescape,
      anon_sym_trans,
      anon_sym_endtrans,
      anon_sym_pluralize,
      anon_sym_with,
      anon_sym_endwith,
      anon_sym_debug,
      anon_sym_do,
  [123] = 10,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_statement_begin,
    STATE(15), 1,
      sym_expression_begin,
    STATE(22), 1,
      sym_not,
    ACTIONS(7), 4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
    STATE(12), 6,
      sym_text,
      sym__node,
      sym_statement,
      sym_expression,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
  [162] = 10,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      aux_sym_text_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(74), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(77), 1,
      anon_sym_LBRACE_POUND,
    STATE(8), 1,
      sym_statement_begin,
    STATE(15), 1,
      sym_expression_begin,
    STATE(22), 1,
      sym_not,
    ACTIONS(68), 4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
    STATE(12), 6,
      sym_text,
      sym__node,
      sym_statement,
      sym_expression,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
  [201] = 6,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(25), 1,
      sym_expression_end,
    ACTIONS(86), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(14), 2,
      aux_sym__inner_text2,
      sym_boolean,
    ACTIONS(84), 5,
      sym__white_space,
      sym_integer,
      sym_float,
      sym_operator,
      sym_string,
  [226] = 5,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(96), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(14), 2,
      aux_sym__inner_text2,
      sym_boolean,
    ACTIONS(93), 5,
      sym__white_space,
      sym_integer,
      sym_float,
      sym_operator,
      sym_string,
  [248] = 4,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(13), 2,
      aux_sym__inner_text2,
      sym_boolean,
    ACTIONS(99), 5,
      sym__white_space,
      sym_integer,
      sym_float,
      sym_operator,
      sym_string,
  [267] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [281] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [295] = 1,
    ACTIONS(43), 9,
      anon_sym_RBRACE_RBRACE,
      sym__white_space,
      sym_integer,
      sym_float,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym_operator,
      sym_string,
  [307] = 1,
    ACTIONS(109), 9,
      anon_sym_RBRACE_RBRACE,
      sym__white_space,
      sym_integer,
      sym_float,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym_operator,
      sym_string,
  [319] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [333] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [347] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [361] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [375] = 2,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [389] = 2,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [403] = 2,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [417] = 1,
    ACTIONS(139), 8,
      sym__white_space,
      sym_integer,
      sym_float,
      anon_sym_True,
      anon_sym_False,
      sym_identifier,
      sym_operator,
      sym_string,
  [428] = 1,
    ACTIONS(141), 1,
      aux_sym_jinja_comment_token1,
  [432] = 1,
    ACTIONS(143), 1,
      anon_sym_PERCENT_RBRACE,
  [436] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
  [440] = 1,
    ACTIONS(147), 1,
      anon_sym_POUND_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 42,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 248,
  [SMALL_STATE(16)] = 267,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 307,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 347,
  [SMALL_STATE(23)] = 361,
  [SMALL_STATE(24)] = 375,
  [SMALL_STATE(25)] = 389,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 417,
  [SMALL_STATE(28)] = 428,
  [SMALL_STATE(29)] = 432,
  [SMALL_STATE(30)] = 436,
  [SMALL_STATE(31)] = 440,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, .production_id = 3), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, .production_id = 3),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, .production_id = 3), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, .production_id = 3), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, .production_id = 3), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text, 1, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_begin, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_begin, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_begin, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_begin, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, .production_id = 3), SHIFT_REPEAT(19),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, .production_id = 3),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, .production_id = 3), SHIFT_REPEAT(14),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, .production_id = 3), SHIFT_REPEAT(18),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text2, 1, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_comment, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_comment, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_end, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_end, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_end, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_end, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_end, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_end, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_begin, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jinja() {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
