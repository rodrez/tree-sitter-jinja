#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  anon_sym_LBRACE_POUND = 11,
  aux_sym_jinja_comment_token1 = 12,
  anon_sym_POUND_RBRACE = 13,
  anon_sym_for = 14,
  anon_sym_in = 15,
  anon_sym_endfor = 16,
  anon_sym_if = 17,
  anon_sym_and = 18,
  anon_sym_or = 19,
  anon_sym_endif = 20,
  anon_sym_else = 21,
  anon_sym_elif = 22,
  anon_sym_raw = 23,
  anon_sym_endraw = 24,
  anon_sym_macro = 25,
  anon_sym_endmacro = 26,
  anon_sym_extends = 27,
  anon_sym_block = 28,
  anon_sym_endblock = 29,
  anon_sym_call = 30,
  anon_sym_endcall = 31,
  anon_sym_filter = 32,
  anon_sym_endfilter = 33,
  anon_sym_set = 34,
  anon_sym_endset = 35,
  anon_sym_include = 36,
  anon_sym_import = 37,
  anon_sym_from = 38,
  anon_sym_autoescape = 39,
  anon_sym_endautoescape = 40,
  anon_sym_trans = 41,
  anon_sym_endtrans = 42,
  anon_sym_pluralize = 43,
  anon_sym_with = 44,
  anon_sym_endwith = 45,
  anon_sym_debug = 46,
  anon_sym_do = 47,
  sym_white_space_control = 48,
  sym__white_space = 49,
  sym_operator = 50,
  sym_string = 51,
  sym_source_file = 52,
  sym_text = 53,
  sym_not = 54,
  sym__node = 55,
  sym_statement = 56,
  sym_statement_begin = 57,
  sym_statement_end = 58,
  sym_expression = 59,
  sym_expression_begin = 60,
  sym_expression_end = 61,
  sym_jinja_comment = 62,
  sym_keyword = 63,
  aux_sym__inner_text = 64,
  aux_sym__inner_text2 = 65,
  aux_sym_source_file_repeat1 = 66,
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
  [18] = 18,
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
      if (eof) ADVANCE(13);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '}') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(45);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '}') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_not_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_not_token1);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_not_token1);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '%') ADVANCE(30);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_not_token2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_not_token2);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_not_token3);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_not_token3);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_not_token4);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_not_token4);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_not_token4);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_jinja_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_jinja_comment_token1);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_white_space_control);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_white_space_control);
      if (lookahead == '#') ADVANCE(25);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_white_space_control);
      if (!sym_operator_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__white_space);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_operator);
      if (!sym_operator_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 45:
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'w') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == 'w') ADVANCE(72);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == 'w') ADVANCE(110);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_trans);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_endset);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_endcall);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_endwith);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 129:
      if (lookahead == 'z') ADVANCE(136);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_endblock);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_endtrans);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_endfilter);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_pluralize);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_autoescape);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_endautoescape);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_text] = STATE(11),
    [sym_not] = STATE(14),
    [sym__node] = STATE(11),
    [sym_statement] = STATE(11),
    [sym_statement_begin] = STATE(8),
    [sym_expression] = STATE(11),
    [sym_expression_begin] = STATE(23),
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
    [sym_statement_end] = STATE(15),
    [sym_keyword] = STATE(3),
    [aux_sym__inner_text] = STATE(3),
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
    [sym_operator] = ACTIONS(23),
    [sym_string] = ACTIONS(23),
  },
  [3] = {
    [sym_statement_end] = STATE(19),
    [sym_keyword] = STATE(4),
    [aux_sym__inner_text] = STATE(4),
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
    [sym__white_space] = ACTIONS(25),
    [sym_operator] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
  },
  [4] = {
    [sym_keyword] = STATE(4),
    [aux_sym__inner_text] = STATE(4),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(30),
    [anon_sym_for] = ACTIONS(32),
    [anon_sym_in] = ACTIONS(32),
    [anon_sym_endfor] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(32),
    [anon_sym_and] = ACTIONS(32),
    [anon_sym_or] = ACTIONS(32),
    [anon_sym_endif] = ACTIONS(32),
    [anon_sym_else] = ACTIONS(32),
    [anon_sym_elif] = ACTIONS(32),
    [anon_sym_raw] = ACTIONS(32),
    [anon_sym_endraw] = ACTIONS(32),
    [anon_sym_macro] = ACTIONS(32),
    [anon_sym_endmacro] = ACTIONS(32),
    [anon_sym_extends] = ACTIONS(32),
    [anon_sym_block] = ACTIONS(32),
    [anon_sym_endblock] = ACTIONS(32),
    [anon_sym_call] = ACTIONS(32),
    [anon_sym_endcall] = ACTIONS(32),
    [anon_sym_filter] = ACTIONS(32),
    [anon_sym_endfilter] = ACTIONS(32),
    [anon_sym_set] = ACTIONS(32),
    [anon_sym_endset] = ACTIONS(32),
    [anon_sym_include] = ACTIONS(32),
    [anon_sym_import] = ACTIONS(32),
    [anon_sym_from] = ACTIONS(32),
    [anon_sym_autoescape] = ACTIONS(32),
    [anon_sym_endautoescape] = ACTIONS(32),
    [anon_sym_trans] = ACTIONS(32),
    [anon_sym_endtrans] = ACTIONS(32),
    [anon_sym_pluralize] = ACTIONS(32),
    [anon_sym_with] = ACTIONS(32),
    [anon_sym_endwith] = ACTIONS(32),
    [anon_sym_debug] = ACTIONS(32),
    [anon_sym_do] = ACTIONS(32),
    [sym_white_space_control] = ACTIONS(30),
    [sym__white_space] = ACTIONS(35),
    [sym_operator] = ACTIONS(35),
    [sym_string] = ACTIONS(35),
  },
  [5] = {
    [sym_identifier] = ACTIONS(38),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(38),
    [anon_sym_for] = ACTIONS(38),
    [anon_sym_in] = ACTIONS(38),
    [anon_sym_endfor] = ACTIONS(38),
    [anon_sym_if] = ACTIONS(38),
    [anon_sym_and] = ACTIONS(38),
    [anon_sym_or] = ACTIONS(38),
    [anon_sym_endif] = ACTIONS(38),
    [anon_sym_else] = ACTIONS(38),
    [anon_sym_elif] = ACTIONS(38),
    [anon_sym_raw] = ACTIONS(38),
    [anon_sym_endraw] = ACTIONS(38),
    [anon_sym_macro] = ACTIONS(38),
    [anon_sym_endmacro] = ACTIONS(38),
    [anon_sym_extends] = ACTIONS(38),
    [anon_sym_block] = ACTIONS(38),
    [anon_sym_endblock] = ACTIONS(38),
    [anon_sym_call] = ACTIONS(38),
    [anon_sym_endcall] = ACTIONS(38),
    [anon_sym_filter] = ACTIONS(38),
    [anon_sym_endfilter] = ACTIONS(38),
    [anon_sym_set] = ACTIONS(38),
    [anon_sym_endset] = ACTIONS(38),
    [anon_sym_include] = ACTIONS(38),
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_from] = ACTIONS(38),
    [anon_sym_autoescape] = ACTIONS(38),
    [anon_sym_endautoescape] = ACTIONS(38),
    [anon_sym_trans] = ACTIONS(38),
    [anon_sym_endtrans] = ACTIONS(38),
    [anon_sym_pluralize] = ACTIONS(38),
    [anon_sym_with] = ACTIONS(38),
    [anon_sym_endwith] = ACTIONS(38),
    [anon_sym_debug] = ACTIONS(38),
    [anon_sym_do] = ACTIONS(38),
    [sym_white_space_control] = ACTIONS(38),
    [sym__white_space] = ACTIONS(38),
    [sym_operator] = ACTIONS(38),
    [sym_string] = ACTIONS(38),
  },
  [6] = {
    [sym_identifier] = ACTIONS(40),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(40),
    [anon_sym_for] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_endfor] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [anon_sym_and] = ACTIONS(40),
    [anon_sym_or] = ACTIONS(40),
    [anon_sym_endif] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_elif] = ACTIONS(40),
    [anon_sym_raw] = ACTIONS(40),
    [anon_sym_endraw] = ACTIONS(40),
    [anon_sym_macro] = ACTIONS(40),
    [anon_sym_endmacro] = ACTIONS(40),
    [anon_sym_extends] = ACTIONS(40),
    [anon_sym_block] = ACTIONS(40),
    [anon_sym_endblock] = ACTIONS(40),
    [anon_sym_call] = ACTIONS(40),
    [anon_sym_endcall] = ACTIONS(40),
    [anon_sym_filter] = ACTIONS(40),
    [anon_sym_endfilter] = ACTIONS(40),
    [anon_sym_set] = ACTIONS(40),
    [anon_sym_endset] = ACTIONS(40),
    [anon_sym_include] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_from] = ACTIONS(40),
    [anon_sym_autoescape] = ACTIONS(40),
    [anon_sym_endautoescape] = ACTIONS(40),
    [anon_sym_trans] = ACTIONS(40),
    [anon_sym_endtrans] = ACTIONS(40),
    [anon_sym_pluralize] = ACTIONS(40),
    [anon_sym_with] = ACTIONS(40),
    [anon_sym_endwith] = ACTIONS(40),
    [anon_sym_debug] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [sym_white_space_control] = ACTIONS(40),
    [sym__white_space] = ACTIONS(40),
    [sym_operator] = ACTIONS(40),
    [sym_string] = ACTIONS(40),
  },
  [7] = {
    [anon_sym_for] = ACTIONS(42),
    [anon_sym_in] = ACTIONS(44),
    [anon_sym_endfor] = ACTIONS(42),
    [anon_sym_if] = ACTIONS(42),
    [anon_sym_and] = ACTIONS(42),
    [anon_sym_or] = ACTIONS(42),
    [anon_sym_endif] = ACTIONS(42),
    [anon_sym_else] = ACTIONS(42),
    [anon_sym_elif] = ACTIONS(42),
    [anon_sym_raw] = ACTIONS(42),
    [anon_sym_endraw] = ACTIONS(42),
    [anon_sym_macro] = ACTIONS(42),
    [anon_sym_endmacro] = ACTIONS(42),
    [anon_sym_extends] = ACTIONS(42),
    [anon_sym_block] = ACTIONS(42),
    [anon_sym_endblock] = ACTIONS(42),
    [anon_sym_call] = ACTIONS(42),
    [anon_sym_endcall] = ACTIONS(42),
    [anon_sym_filter] = ACTIONS(42),
    [anon_sym_endfilter] = ACTIONS(42),
    [anon_sym_set] = ACTIONS(42),
    [anon_sym_endset] = ACTIONS(42),
    [anon_sym_include] = ACTIONS(42),
    [anon_sym_import] = ACTIONS(42),
    [anon_sym_from] = ACTIONS(42),
    [anon_sym_autoescape] = ACTIONS(42),
    [anon_sym_endautoescape] = ACTIONS(42),
    [anon_sym_trans] = ACTIONS(42),
    [anon_sym_endtrans] = ACTIONS(42),
    [anon_sym_pluralize] = ACTIONS(42),
    [anon_sym_with] = ACTIONS(42),
    [anon_sym_endwith] = ACTIONS(42),
    [anon_sym_debug] = ACTIONS(42),
    [anon_sym_do] = ACTIONS(42),
    [sym_white_space_control] = ACTIONS(46),
  },
  [8] = {
    [sym_keyword] = STATE(2),
    [anon_sym_for] = ACTIONS(48),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_endfor] = ACTIONS(48),
    [anon_sym_if] = ACTIONS(48),
    [anon_sym_and] = ACTIONS(48),
    [anon_sym_or] = ACTIONS(48),
    [anon_sym_endif] = ACTIONS(48),
    [anon_sym_else] = ACTIONS(48),
    [anon_sym_elif] = ACTIONS(48),
    [anon_sym_raw] = ACTIONS(48),
    [anon_sym_endraw] = ACTIONS(48),
    [anon_sym_macro] = ACTIONS(48),
    [anon_sym_endmacro] = ACTIONS(48),
    [anon_sym_extends] = ACTIONS(48),
    [anon_sym_block] = ACTIONS(48),
    [anon_sym_endblock] = ACTIONS(48),
    [anon_sym_call] = ACTIONS(48),
    [anon_sym_endcall] = ACTIONS(48),
    [anon_sym_filter] = ACTIONS(48),
    [anon_sym_endfilter] = ACTIONS(48),
    [anon_sym_set] = ACTIONS(48),
    [anon_sym_endset] = ACTIONS(48),
    [anon_sym_include] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(48),
    [anon_sym_from] = ACTIONS(48),
    [anon_sym_autoescape] = ACTIONS(48),
    [anon_sym_endautoescape] = ACTIONS(48),
    [anon_sym_trans] = ACTIONS(48),
    [anon_sym_endtrans] = ACTIONS(48),
    [anon_sym_pluralize] = ACTIONS(48),
    [anon_sym_with] = ACTIONS(48),
    [anon_sym_endwith] = ACTIONS(48),
    [anon_sym_debug] = ACTIONS(48),
    [anon_sym_do] = ACTIONS(48),
  },
  [9] = {
    [anon_sym_for] = ACTIONS(50),
    [anon_sym_in] = ACTIONS(52),
    [anon_sym_endfor] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_and] = ACTIONS(50),
    [anon_sym_or] = ACTIONS(50),
    [anon_sym_endif] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_elif] = ACTIONS(50),
    [anon_sym_raw] = ACTIONS(50),
    [anon_sym_endraw] = ACTIONS(50),
    [anon_sym_macro] = ACTIONS(50),
    [anon_sym_endmacro] = ACTIONS(50),
    [anon_sym_extends] = ACTIONS(50),
    [anon_sym_block] = ACTIONS(50),
    [anon_sym_endblock] = ACTIONS(50),
    [anon_sym_call] = ACTIONS(50),
    [anon_sym_endcall] = ACTIONS(50),
    [anon_sym_filter] = ACTIONS(50),
    [anon_sym_endfilter] = ACTIONS(50),
    [anon_sym_set] = ACTIONS(50),
    [anon_sym_endset] = ACTIONS(50),
    [anon_sym_include] = ACTIONS(50),
    [anon_sym_import] = ACTIONS(50),
    [anon_sym_from] = ACTIONS(50),
    [anon_sym_autoescape] = ACTIONS(50),
    [anon_sym_endautoescape] = ACTIONS(50),
    [anon_sym_trans] = ACTIONS(50),
    [anon_sym_endtrans] = ACTIONS(50),
    [anon_sym_pluralize] = ACTIONS(50),
    [anon_sym_with] = ACTIONS(50),
    [anon_sym_endwith] = ACTIONS(50),
    [anon_sym_debug] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_text_token1,
    ACTIONS(62), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(65), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(68), 1,
      anon_sym_LBRACE_POUND,
    STATE(8), 1,
      sym_statement_begin,
    STATE(14), 1,
      sym_not,
    STATE(23), 1,
      sym_expression_begin,
    ACTIONS(59), 4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
    STATE(10), 6,
      sym_text,
      sym__node,
      sym_statement,
      sym_expression,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
  [39] = 10,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_statement_begin,
    STATE(14), 1,
      sym_not,
    STATE(23), 1,
      sym_expression_begin,
    ACTIONS(7), 4,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
    STATE(10), 6,
      sym_text,
      sym__node,
      sym_statement,
      sym_expression,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
  [78] = 2,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [92] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [106] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [120] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [134] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [148] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [162] = 2,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 8,
      aux_sym_text_token1,
      aux_sym_not_token1,
      aux_sym_not_token2,
      aux_sym_not_token3,
      aux_sym_not_token4,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_POUND,
  [176] = 2,
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
  [190] = 2,
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
  [204] = 5,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(17), 1,
      sym_expression_end,
    STATE(22), 1,
      aux_sym__inner_text2,
    ACTIONS(113), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [222] = 4,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(22), 1,
      aux_sym__inner_text2,
    ACTIONS(120), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [237] = 3,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(21), 1,
      aux_sym__inner_text2,
    ACTIONS(123), 3,
      sym__white_space,
      sym_operator,
      sym_string,
  [249] = 1,
    ACTIONS(125), 5,
      anon_sym_RBRACE_RBRACE,
      sym__white_space,
      sym_identifier,
      sym_operator,
      sym_string,
  [257] = 1,
    ACTIONS(127), 4,
      sym__white_space,
      sym_identifier,
      sym_operator,
      sym_string,
  [264] = 1,
    ACTIONS(129), 1,
      anon_sym_POUND_RBRACE,
  [268] = 1,
    ACTIONS(131), 1,
      aux_sym_jinja_comment_token1,
  [272] = 1,
    ACTIONS(133), 1,
      anon_sym_PERCENT_RBRACE,
  [276] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 39,
  [SMALL_STATE(12)] = 78,
  [SMALL_STATE(13)] = 92,
  [SMALL_STATE(14)] = 106,
  [SMALL_STATE(15)] = 120,
  [SMALL_STATE(16)] = 134,
  [SMALL_STATE(17)] = 148,
  [SMALL_STATE(18)] = 162,
  [SMALL_STATE(19)] = 176,
  [SMALL_STATE(20)] = 190,
  [SMALL_STATE(21)] = 204,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 237,
  [SMALL_STATE(24)] = 249,
  [SMALL_STATE(25)] = 257,
  [SMALL_STATE(26)] = 264,
  [SMALL_STATE(27)] = 268,
  [SMALL_STATE(28)] = 272,
  [SMALL_STATE(29)] = 276,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, .production_id = 3), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, .production_id = 3),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, .production_id = 3), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text, 2, .production_id = 3), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text, 1, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_begin, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_begin, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_begin, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_begin, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_comment, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_comment, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_end, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_end, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_end, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_end, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_end, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_end, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4, .production_id = 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, .production_id = 3), SHIFT_REPEAT(24),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, .production_id = 3),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_text2, 2, .production_id = 3), SHIFT_REPEAT(22),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_text2, 1, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_begin, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
