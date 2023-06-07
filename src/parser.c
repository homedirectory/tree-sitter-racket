#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 71
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__skip_token1 = 1,
  sym_dot = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_POUND_PIPE = 4,
  aux_sym_block_comment_token1 = 5,
  anon_sym_PIPE_POUND = 6,
  anon_sym_POUND_SEMI = 7,
  sym__line_comment = 8,
  sym_boolean = 9,
  anon_sym_POUND = 10,
  anon_sym_POUND_LT_LT = 11,
  aux_sym_regex_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym__real_string_token1 = 14,
  sym_escape_sequence = 15,
  aux_sym_number_token1 = 16,
  sym_decimal = 17,
  sym_character = 18,
  aux_sym_symbol_token1 = 19,
  sym_keyword = 20,
  anon_sym_POUND_AMP = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_POUNDfl = 28,
  anon_sym_POUNDfx = 29,
  anon_sym_POUNDs = 30,
  anon_sym_POUNDhash = 31,
  anon_sym_POUNDhasheq = 32,
  anon_sym_POUNDhasheqv = 33,
  anon_sym_EQ = 34,
  sym_quote = 35,
  sym_quasiquote = 36,
  sym_syntax = 37,
  sym_quasisyntax = 38,
  sym_unquote = 39,
  sym_unquote_splicing = 40,
  sym_unsyntax = 41,
  sym_unsyntax_splicing = 42,
  anon_sym_POUNDreader = 43,
  anon_sym_POUNDlang = 44,
  anon_sym_POUND_BANG = 45,
  sym_lang_name = 46,
  sym__here_string_body = 47,
  sym_program = 48,
  sym__token = 49,
  sym__skip = 50,
  sym_comment = 51,
  sym_block_comment = 52,
  sym_sexp_comment = 53,
  sym__datum = 54,
  sym_string = 55,
  sym_byte_string = 56,
  sym_here_string = 57,
  sym_regex = 58,
  sym__real_string = 59,
  sym_number = 60,
  sym_symbol = 61,
  sym_box = 62,
  sym_list = 63,
  sym_vector = 64,
  sym_structure = 65,
  sym_hash = 66,
  sym_graph = 67,
  sym_extension = 68,
  aux_sym_program_repeat1 = 69,
  aux_sym_block_comment_repeat1 = 70,
  aux_sym_sexp_comment_repeat1 = 71,
  aux_sym__real_string_repeat1 = 72,
  aux_sym_list_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__skip_token1] = "_skip_token1",
  [sym_dot] = "dot",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [anon_sym_POUND_SEMI] = "#;",
  [sym__line_comment] = "_line_comment",
  [sym_boolean] = "boolean",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_LT_LT] = "#<<",
  [aux_sym_regex_token1] = "regex_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__real_string_token1] = "_real_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_number_token1] = "number_token1",
  [sym_decimal] = "decimal",
  [sym_character] = "character",
  [aux_sym_symbol_token1] = "symbol_token1",
  [sym_keyword] = "keyword",
  [anon_sym_POUND_AMP] = "#&",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_POUNDfl] = "#fl",
  [anon_sym_POUNDfx] = "#fx",
  [anon_sym_POUNDs] = "#s",
  [anon_sym_POUNDhash] = "#hash",
  [anon_sym_POUNDhasheq] = "#hasheq",
  [anon_sym_POUNDhasheqv] = "#hasheqv",
  [anon_sym_EQ] = "=",
  [sym_quote] = "quote",
  [sym_quasiquote] = "quasiquote",
  [sym_syntax] = "syntax",
  [sym_quasisyntax] = "quasisyntax",
  [sym_unquote] = "unquote",
  [sym_unquote_splicing] = "unquote_splicing",
  [sym_unsyntax] = "unsyntax",
  [sym_unsyntax_splicing] = "unsyntax_splicing",
  [anon_sym_POUNDreader] = "#reader",
  [anon_sym_POUNDlang] = "#lang ",
  [anon_sym_POUND_BANG] = "#!",
  [sym_lang_name] = "lang_name",
  [sym__here_string_body] = "_here_string_body",
  [sym_program] = "program",
  [sym__token] = "_token",
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_sexp_comment] = "sexp_comment",
  [sym__datum] = "_datum",
  [sym_string] = "string",
  [sym_byte_string] = "byte_string",
  [sym_here_string] = "here_string",
  [sym_regex] = "regex",
  [sym__real_string] = "_real_string",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_box] = "box",
  [sym_list] = "list",
  [sym_vector] = "vector",
  [sym_structure] = "structure",
  [sym_hash] = "hash",
  [sym_graph] = "graph",
  [sym_extension] = "extension",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_sexp_comment_repeat1] = "sexp_comment_repeat1",
  [aux_sym__real_string_repeat1] = "_real_string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__skip_token1] = aux_sym__skip_token1,
  [sym_dot] = sym_dot,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [sym__line_comment] = sym__line_comment,
  [sym_boolean] = sym_boolean,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_LT_LT] = anon_sym_POUND_LT_LT,
  [aux_sym_regex_token1] = aux_sym_regex_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__real_string_token1] = aux_sym__real_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [sym_decimal] = sym_decimal,
  [sym_character] = sym_character,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [sym_keyword] = sym_keyword,
  [anon_sym_POUND_AMP] = anon_sym_POUND_AMP,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_POUNDfl] = anon_sym_POUNDfl,
  [anon_sym_POUNDfx] = anon_sym_POUNDfx,
  [anon_sym_POUNDs] = anon_sym_POUNDs,
  [anon_sym_POUNDhash] = anon_sym_POUNDhash,
  [anon_sym_POUNDhasheq] = anon_sym_POUNDhasheq,
  [anon_sym_POUNDhasheqv] = anon_sym_POUNDhasheqv,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_quote] = sym_quote,
  [sym_quasiquote] = sym_quasiquote,
  [sym_syntax] = sym_syntax,
  [sym_quasisyntax] = sym_quasisyntax,
  [sym_unquote] = sym_unquote,
  [sym_unquote_splicing] = sym_unquote_splicing,
  [sym_unsyntax] = sym_unsyntax,
  [sym_unsyntax_splicing] = sym_unsyntax_splicing,
  [anon_sym_POUNDreader] = anon_sym_POUNDreader,
  [anon_sym_POUNDlang] = anon_sym_POUNDlang,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [sym_lang_name] = sym_lang_name,
  [sym__here_string_body] = sym__here_string_body,
  [sym_program] = sym_program,
  [sym__token] = sym__token,
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_sexp_comment] = sym_sexp_comment,
  [sym__datum] = sym__datum,
  [sym_string] = sym_string,
  [sym_byte_string] = sym_byte_string,
  [sym_here_string] = sym_here_string,
  [sym_regex] = sym_regex,
  [sym__real_string] = sym__real_string,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_box] = sym_box,
  [sym_list] = sym_list,
  [sym_vector] = sym_vector,
  [sym_structure] = sym_structure,
  [sym_hash] = sym_hash,
  [sym_graph] = sym_graph,
  [sym_extension] = sym_extension,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_sexp_comment_repeat1] = aux_sym_sexp_comment_repeat1,
  [aux_sym__real_string_repeat1] = aux_sym__real_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__skip_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__real_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_AMP] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDfl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDfx] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhasheq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDhasheqv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_quasisyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splicing] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax] = {
    .visible = true,
    .named = true,
  },
  [sym_unsyntax_splicing] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDreader] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDlang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_lang_name] = {
    .visible = true,
    .named = true,
  },
  [sym__here_string_body] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__skip] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_sexp_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_byte_string] = {
    .visible = true,
    .named = true,
  },
  [sym_here_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym__real_string] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_box] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_graph] = {
    .visible = true,
    .named = true,
  },
  [sym_extension] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sexp_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__real_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 4,
  [11] = 9,
  [12] = 8,
  [13] = 7,
  [14] = 4,
  [15] = 6,
  [16] = 7,
  [17] = 6,
  [18] = 8,
  [19] = 9,
  [20] = 3,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 23,
  [30] = 24,
  [31] = 25,
  [32] = 32,
  [33] = 26,
  [34] = 27,
  [35] = 27,
  [36] = 36,
  [37] = 36,
  [38] = 32,
  [39] = 36,
  [40] = 40,
  [41] = 25,
  [42] = 23,
  [43] = 24,
  [44] = 40,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 55,
  [73] = 68,
  [74] = 47,
  [75] = 49,
  [76] = 50,
  [77] = 51,
  [78] = 52,
  [79] = 53,
  [80] = 45,
  [81] = 54,
  [82] = 65,
  [83] = 57,
  [84] = 63,
  [85] = 56,
  [86] = 48,
  [87] = 58,
  [88] = 70,
  [89] = 67,
  [90] = 46,
  [91] = 59,
  [92] = 60,
  [93] = 64,
  [94] = 69,
  [95] = 61,
  [96] = 66,
  [97] = 62,
  [98] = 64,
  [99] = 47,
  [100] = 45,
  [101] = 70,
  [102] = 69,
  [103] = 57,
  [104] = 66,
  [105] = 65,
  [106] = 68,
  [107] = 63,
  [108] = 62,
  [109] = 58,
  [110] = 61,
  [111] = 60,
  [112] = 59,
  [113] = 67,
  [114] = 48,
  [115] = 56,
  [116] = 49,
  [117] = 55,
  [118] = 54,
  [119] = 53,
  [120] = 52,
  [121] = 50,
  [122] = 122,
  [123] = 122,
  [124] = 122,
  [125] = 125,
  [126] = 125,
  [127] = 125,
  [128] = 128,
  [129] = 129,
  [130] = 129,
  [131] = 129,
  [132] = 132,
  [133] = 133,
  [134] = 132,
  [135] = 129,
  [136] = 132,
  [137] = 133,
  [138] = 132,
  [139] = 133,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 141,
  [144] = 141,
  [145] = 145,
  [146] = 142,
  [147] = 140,
  [148] = 145,
  [149] = 149,
  [150] = 145,
  [151] = 149,
  [152] = 152,
  [153] = 140,
  [154] = 142,
  [155] = 149,
  [156] = 67,
  [157] = 45,
  [158] = 158,
  [159] = 158,
  [160] = 158,
  [161] = 161,
  [162] = 161,
  [163] = 161,
  [164] = 164,
  [165] = 164,
  [166] = 166,
};

static inline bool aux_sym__skip_token1_character_set_1(int32_t c) {
  return (c < 8192
    ? (c < 133
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 133 || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8202 || (c < 8287
      ? (c < 8239
        ? (c >= 8232 && c <= 8233)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'e'
    ? (c < '\''
      ? (c < '"'
        ? c == '\n'
        : c <= '"')
      : (c <= '\'' || (c < 'a'
        ? c == '\\'
        : c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static inline bool sym_keyword_character_set_1(int32_t c) {
  return (c < '{'
    ? (c < '\''
      ? (c < ' '
        ? (c < '\t'
          ? c == 0
          : c <= '\r')
        : (c <= ' ' || c == '"'))
      : (c <= ')' || (c < '['
        ? (c < ';'
          ? c == ','
          : c <= ';')
        : (c <= ']' || c == '`'))))
    : (c <= '}' || (c < 8232
      ? (c < 5760
        ? (c < 160
          ? c == 133
          : c <= 160)
        : (c <= 5760 || (c >= 8192 && c <= 8202)))
      : (c <= 8233 || (c < 12288
        ? (c < 8287
          ? c == 8239
          : c <= 8287)
        : (c <= 12288 || c == 65279))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(358);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(359);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '#') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(918);
      if (lookahead == '(') ADVANCE(905);
      if (lookahead == ')') ADVANCE(906);
      if (lookahead == ',') ADVANCE(922);
      if (lookahead == '.') ADVANCE(360);
      if (lookahead == ';') ADVANCE(362);
      if (lookahead == '=') ADVANCE(917);
      if (lookahead == '[') ADVANCE(907);
      if (lookahead == ']') ADVANCE(908);
      if (lookahead == '`') ADVANCE(919);
      if (lookahead == '{') ADVANCE(909);
      if (lookahead == '|') ADVANCE(365);
      if (lookahead == '}') ADVANCE(910);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(928);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '\'') ADVANCE(918);
      if (lookahead == '(') ADVANCE(905);
      if (lookahead == ')') ADVANCE(906);
      if (lookahead == ',') ADVANCE(923);
      if (lookahead == '.') ADVANCE(361);
      if (lookahead == ';') ADVANCE(362);
      if (lookahead == '[') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == ']') ADVANCE(908);
      if (lookahead == '`') ADVANCE(919);
      if (lookahead == '{') ADVANCE(909);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(910);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(775);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(395);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(553);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(902);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '#') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(918);
      if (lookahead == '(') ADVANCE(905);
      if (lookahead == ',') ADVANCE(923);
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == ';') ADVANCE(362);
      if (lookahead == '[') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '`') ADVANCE(919);
      if (lookahead == '{') ADVANCE(909);
      if (lookahead == '|') ADVANCE(162);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(775);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(395);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(553);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(902);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '#') ADVANCE(374);
      if (lookahead == '(') ADVANCE(905);
      if (lookahead == '=') ADVANCE(917);
      if (lookahead == '[') ADVANCE(907);
      if (lookahead == '{') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(712);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\\') ADVANCE(339);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(425);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(212);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(429);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(561);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(609);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(8);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(15);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(18);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(35);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(190);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(25);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(28);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(28);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(25);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(28);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(28);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(30);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(190);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 32:
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(331);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(331);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(197);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(191);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(197);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(40);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(191);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(607);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(200);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(318);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(200);
      END_STATE();
    case 44:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(35);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(192);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 46:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(200);
      END_STATE();
    case 47:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(200);
      END_STATE();
    case 48:
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(29);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(192);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 50:
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '.') ADVANCE(340);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      END_STATE();
    case 51:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(51);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(33);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(55);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 52:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 53:
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(38);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(57);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(256);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(304);
      END_STATE();
    case 61:
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(464);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(342);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(255);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(468);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(480);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(573);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(621);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(300);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(500);
      END_STATE();
    case 67:
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 68:
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(617);
      END_STATE();
    case 69:
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 70:
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(529);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(585);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 71:
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(529);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(585);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 72:
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 73:
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(75);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(633);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(298);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(269);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(504);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(269);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(504);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(330);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(625);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(347);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 84:
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(18);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(35);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 85:
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 86:
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 87:
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(8);
      END_STATE();
    case 88:
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(629);
      END_STATE();
    case 90:
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(629);
      END_STATE();
    case 91:
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(516);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(518);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 92:
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 93:
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 94:
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 95:
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(649);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(581);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(653);
      END_STATE();
    case 96:
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(649);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(581);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(653);
      END_STATE();
    case 97:
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(653);
      END_STATE();
    case 98:
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(245);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(204);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(653);
      END_STATE();
    case 99:
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 100:
      if (lookahead == '.') ADVANCE(283);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(51);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(33);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 101:
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(241);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(203);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == '.') ADVANCE(275);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(533);
      END_STATE();
    case 103:
      if (lookahead == '.') ADVANCE(335);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(247);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      END_STATE();
    case 104:
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 105:
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(637);
      END_STATE();
    case 106:
      if (lookahead == '.') ADVANCE(257);
      END_STATE();
    case 107:
      if (lookahead == '.') ADVANCE(299);
      END_STATE();
    case 108:
      if (lookahead == '.') ADVANCE(258);
      END_STATE();
    case 109:
      if (lookahead == '.') ADVANCE(301);
      END_STATE();
    case 110:
      if (lookahead == '.') ADVANCE(259);
      END_STATE();
    case 111:
      if (lookahead == '.') ADVANCE(302);
      END_STATE();
    case 112:
      if (lookahead == '.') ADVANCE(303);
      END_STATE();
    case 113:
      if (lookahead == '<') ADVANCE(378);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(731);
      if (lookahead == 'b') ADVANCE(714);
      if (lookahead == 'l') ADVANCE(719);
      if (lookahead == 'n') ADVANCE(717);
      if (lookahead == 'p') ADVANCE(715);
      if (lookahead == 'r') ADVANCE(718);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(716);
      if (lookahead == 'u') ADVANCE(727);
      if (lookahead == 'v') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(713);
      END_STATE();
    case 115:
      if (lookahead == '\\') ADVANCE(356);
      if (lookahead == '|') ADVANCE(163);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(903);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(713);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(713);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(380);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(1);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(128);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(914);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'k') ADVANCE(154);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(713);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 148:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 149:
      if (lookahead == 'q') ADVANCE(915);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(927);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(713);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 160:
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 161:
      if (lookahead == 'x') ADVANCE(380);
      END_STATE();
    case 162:
      if (lookahead == '|') ADVANCE(902);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == '|') ADVANCE(903);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 164:
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(370);
      END_STATE();
    case 165:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(272);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(680);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(688);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(682);
      END_STATE();
    case 166:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(286);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(682);
      END_STATE();
    case 167:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(277);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(679);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(687);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(681);
      END_STATE();
    case 168:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(289);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(681);
      END_STATE();
    case 169:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(280);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(705);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(709);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(706);
      END_STATE();
    case 170:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(285);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(706);
      END_STATE();
    case 171:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(281);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(231);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 172:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(295);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 173:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(266);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(668);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(670);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 174:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 175:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(288);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 176:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(263);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(703);
      END_STATE();
    case 177:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      END_STATE();
    case 178:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 179:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(271);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(667);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(669);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 180:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 181:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(292);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 182:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(264);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(685);
      END_STATE();
    case 183:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 184:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(708);
      END_STATE();
    case 185:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 186:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(278);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(704);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(710);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 187:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 188:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(296);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 189:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(691);
      END_STATE();
    case 190:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(279);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(232);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 191:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 192:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(297);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 193:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(268);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(684);
      END_STATE();
    case 194:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      END_STATE();
    case 195:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 196:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(225);
      END_STATE();
    case 197:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 198:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(690);
      END_STATE();
    case 199:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 200:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(230);
      END_STATE();
    case 201:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 202:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 203:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 204:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 205:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 206:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      END_STATE();
    case 207:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 208:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 209:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 210:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 211:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 212:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(81);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(69);
      END_STATE();
    case 213:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 214:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 215:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 216:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 217:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 218:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(109);
      END_STATE();
    case 219:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 220:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 221:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 222:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 223:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 224:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 225:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(225);
      END_STATE();
    case 226:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(232);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 227:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(231);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 229:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 230:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(230);
      END_STATE();
    case 231:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 238:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 241:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 242:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 246:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 248:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 251:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 252:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 253:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 254:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 255:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(683);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(686);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(689);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(692);
      END_STATE();
    case 260:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(462);
      END_STATE();
    case 261:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(470);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(571);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 262:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(502);
      END_STATE();
    case 263:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(703);
      END_STATE();
    case 264:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(685);
      END_STATE();
    case 265:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(519);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(583);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 266:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(668);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(670);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 267:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(531);
      END_STATE();
    case 268:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(684);
      END_STATE();
    case 269:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(535);
      END_STATE();
    case 270:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      END_STATE();
    case 271:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(667);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(669);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 272:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(680);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(688);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(682);
      END_STATE();
    case 273:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(545);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(593);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 274:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(30);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(39);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 275:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(549);
      END_STATE();
    case 276:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(225);
      END_STATE();
    case 277:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(679);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(687);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(681);
      END_STATE();
    case 278:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(704);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(710);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 279:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(226);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(232);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 280:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(705);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(709);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(706);
      END_STATE();
    case 281:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(231);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 282:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(651);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(592);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(655);
      END_STATE();
    case 283:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(38);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(57);
      END_STATE();
    case 284:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 285:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(706);
      END_STATE();
    case 286:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(682);
      END_STATE();
    case 287:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 288:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 289:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(681);
      END_STATE();
    case 290:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(655);
      END_STATE();
    case 291:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      END_STATE();
    case 292:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 293:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 294:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 295:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      END_STATE();
    case 296:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 297:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 298:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(394);
      END_STATE();
    case 299:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(683);
      END_STATE();
    case 300:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(224);
      END_STATE();
    case 301:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(686);
      END_STATE();
    case 302:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(689);
      END_STATE();
    case 303:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(692);
      END_STATE();
    case 304:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(666);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 306:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 307:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 309:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(732);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(713);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(615);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(627);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(708);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(691);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(635);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(690);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(639);
      END_STATE();
    case 318:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(46);
      END_STATE();
    case 319:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(645);
      END_STATE();
    case 320:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(230);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 323:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 324:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      END_STATE();
    case 325:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 326:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 327:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 328:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 329:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      END_STATE();
    case 330:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      END_STATE();
    case 331:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 332:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 333:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 334:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 335:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 336:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 337:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 338:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 339:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(383);
      if (lookahead == '\r') ADVANCE(384);
      if (lookahead == 'U') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(352);
      if (lookahead == 'x') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(386);
      END_STATE();
    case 340:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(467);
      END_STATE();
    case 341:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 342:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(507);
      END_STATE();
    case 343:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 344:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 345:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 346:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 347:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 348:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 349:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 350:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 351:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 352:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 353:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(930);
      END_STATE();
    case 354:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(364);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '|') ADVANCE(365);
      END_STATE();
    case 355:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(902);
      END_STATE();
    case 356:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(903);
      END_STATE();
    case 357:
      if (eof) ADVANCE(358);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '#') ADVANCE(375);
      if (lookahead == '\'') ADVANCE(918);
      if (lookahead == '(') ADVANCE(905);
      if (lookahead == ',') ADVANCE(923);
      if (lookahead == '.') ADVANCE(850);
      if (lookahead == ';') ADVANCE(362);
      if (lookahead == '[') ADVANCE(907);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '`') ADVANCE(919);
      if (lookahead == '{') ADVANCE(909);
      if (lookahead == '|') ADVANCE(162);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(775);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(395);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(553);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(902);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__skip_token1);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(405);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(555);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(367);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(363);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\n') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(369);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(370);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(911);
      if (lookahead == 'x') ADVANCE(912);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(929);
      if (lookahead == '%') ADVANCE(902);
      if (lookahead == '&') ADVANCE(904);
      if (lookahead == '\'') ADVANCE(920);
      if (lookahead == ',') ADVANCE(925);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == ';') ADVANCE(368);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '`') ADVANCE(921);
      if (lookahead == 'f') ADVANCE(372);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 's') ADVANCE(913);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == '|') ADVANCE(363);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '%') ADVANCE(902);
      if (lookahead == '&') ADVANCE(904);
      if (lookahead == '\'') ADVANCE(920);
      if (lookahead == ',') ADVANCE(925);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == ';') ADVANCE(368);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(371);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '`') ADVANCE(921);
      if (lookahead == 'f') ADVANCE(372);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(913);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == '|') ADVANCE(363);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(363);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(379);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(383);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(385);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(395);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(553);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(817);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(400);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(601);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '.') ADVANCE(406);
      if (lookahead == '/') ADVANCE(850);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(817);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(801);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(397);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(398);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(398);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(791);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(790);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(789);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(398);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(788);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(397);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(398);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(404);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '/') ADVANCE(894);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(791);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(406);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(405);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(555);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(817);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(410);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(603);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(406);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(817);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(801);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(407);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(408);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(408);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(791);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(791);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(790);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(789);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(408);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(411);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(788);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(407);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(408);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(820);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(409);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '.') ADVANCE(439);
      if (lookahead == '/') ADVANCE(851);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(415);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(557);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(420);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(605);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '/') ADVANCE(851);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(821);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(804);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(417);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(418);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(418);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(791);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(790);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(789);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(418);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(788);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(417);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(418);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '.') ADVANCE(445);
      if (lookahead == '/') ADVANCE(895);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(791);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '.') ADVANCE(462);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(425);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '.') ADVANCE(463);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(428);
      if (lookahead == '.') ADVANCE(467);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(428);
      if (lookahead == '.') ADVANCE(466);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(430);
      if (lookahead == '.') ADVANCE(470);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(429);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(561);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(434);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(609);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(430);
      if (lookahead == '.') ADVANCE(471);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(173);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(476);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(431);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(432);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(476);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(476);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(432);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(476);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(476);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(476);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(432);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(476);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(431);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(432);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(433);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '.') ADVANCE(475);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(439);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(563);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(444);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(611);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(440);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(821);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(804);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(441);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(442);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(442);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(791);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(791);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(790);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(789);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(442);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(788);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(441);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(442);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(824);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '.') ADVANCE(490);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(449);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(813);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(457);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(613);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(450);
      if (lookahead == '.') ADVANCE(491);
      if (lookahead == '/') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(813);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(807);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(860);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(454);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(456);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(890);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(874);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(456);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(454);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(456);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(456);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(458);
      if (lookahead == '.') ADVANCE(499);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '@') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(798);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(459);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(460);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '@') ADVANCE(794);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(799);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '@') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(800);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(460);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(462);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(463);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '.') ADVANCE(502);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(464);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(465);
      if (lookahead == '.') ADVANCE(503);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(466);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(469);
      if (lookahead == '.') ADVANCE(507);
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(469);
      if (lookahead == '.') ADVANCE(506);
      if (lookahead == '/') ADVANCE(342);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(470);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(571);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(476);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(619);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(471);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(173);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(472);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(473);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(473);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(473);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(475);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(472);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(473);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(185);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(481);
      if (lookahead == '.') ADVANCE(519);
      if (lookahead == '/') ADVANCE(265);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(480);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(573);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(485);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(621);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(481);
      if (lookahead == '.') ADVANCE(520);
      if (lookahead == '/') ADVANCE(265);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(179);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(482);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(483);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(483);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(483);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '.') ADVANCE(525);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(482);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(483);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '.') ADVANCE(524);
      if (lookahead == '/') ADVANCE(345);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(490);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(813);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(498);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(492);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(623);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(491);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(813);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(807);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(860);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(495);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(497);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(890);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(874);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(497);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(495);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(497);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(497);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(499);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(816);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '.') ADVANCE(531);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(500);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(501);
      if (lookahead == '.') ADVANCE(532);
      if (lookahead == '/') ADVANCE(267);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(502);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(503);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(176);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(505);
      if (lookahead == '.') ADVANCE(535);
      if (lookahead == '/') ADVANCE(269);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(504);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(505);
      if (lookahead == '.') ADVANCE(536);
      if (lookahead == '/') ADVANCE(269);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(506);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(506);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '.') ADVANCE(544);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(280);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(513);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '.') ADVANCE(544);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(285);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(513);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '.') ADVANCE(544);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(324);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '.') ADVANCE(544);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(513);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '.') ADVANCE(544);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(513);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '.') ADVANCE(544);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '.') ADVANCE(544);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(515);
      if (lookahead == '.') ADVANCE(542);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(516);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(518);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(518);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(520);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(519);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(583);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(525);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(631);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(520);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(179);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(521);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(522);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(522);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(522);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(524);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(521);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(522);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(195);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(530);
      if (lookahead == '.') ADVANCE(545);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(529);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(585);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(514);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(508);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(633);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(530);
      if (lookahead == '.') ADVANCE(546);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(532);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(531);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(532);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(182);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(534);
      if (lookahead == '.') ADVANCE(549);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(533);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(534);
      if (lookahead == '.') ADVANCE(550);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(536);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(535);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(536);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(280);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(540);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(543);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(285);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(543);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(324);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(540);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(543);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(543);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(542);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(546);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(545);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(593);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(544);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(641);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(546);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(186);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '.') ADVANCE(551);
      if (lookahead == '/') ADVANCE(862);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(547);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(595);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(643);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(807);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(548);
      if (lookahead == '.') ADVANCE(552);
      if (lookahead == '/') ADVANCE(862);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(807);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(549);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(550);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(551);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(599);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(647);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(807);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(552);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(807);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == '.') ADVANCE(555);
      if (lookahead == '/') ADVANCE(880);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(818);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(400);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(554);
      if (lookahead == '.') ADVANCE(556);
      if (lookahead == '/') ADVANCE(880);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(818);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(802);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(818);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(410);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(556);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(818);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(802);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '.') ADVANCE(563);
      if (lookahead == '/') ADVANCE(881);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(822);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(420);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(558);
      if (lookahead == '.') ADVANCE(564);
      if (lookahead == '/') ADVANCE(881);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(822);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(568);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(560);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == '.') ADVANCE(571);
      if (lookahead == '/') ADVANCE(322);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(434);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(562);
      if (lookahead == '.') ADVANCE(572);
      if (lookahead == '/') ADVANCE(322);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(174);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(822);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(444);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(564);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(822);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(566);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == '/') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(814);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(457);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(566);
      if (lookahead == '.') ADVANCE(576);
      if (lookahead == '/') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(814);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(808);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(567);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(570);
      if (lookahead == '.') ADVANCE(580);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(570);
      if (lookahead == '.') ADVANCE(579);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(476);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(572);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(174);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(574);
      if (lookahead == '.') ADVANCE(583);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(485);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(574);
      if (lookahead == '.') ADVANCE(584);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(180);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(814);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(498);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(576);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(814);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(808);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(578);
      if (lookahead == '.') ADVANCE(588);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(578);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(579);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(579);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(582);
      if (lookahead == '.') ADVANCE(592);
      if (lookahead == '/') ADVANCE(330);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(582);
      if (lookahead == '.') ADVANCE(591);
      if (lookahead == '/') ADVANCE(330);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(525);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(584);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(180);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(586);
      if (lookahead == '.') ADVANCE(593);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(514);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(586);
      if (lookahead == '.') ADVANCE(594);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(187);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(587);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(183);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(587);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(590);
      if (lookahead == '.') ADVANCE(598);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(590);
      if (lookahead == '.') ADVANCE(597);
      if (lookahead == '/') ADVANCE(335);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(591);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(177);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(591);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(544);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(594);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(187);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(596);
      if (lookahead == '.') ADVANCE(599);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(596);
      if (lookahead == '.') ADVANCE(600);
      if (lookahead == '/') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(808);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(597);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(194);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(597);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(600);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(808);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(602);
      if (lookahead == '.') ADVANCE(603);
      if (lookahead == '/') ADVANCE(864);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(553);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(400);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(601);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(602);
      if (lookahead == '.') ADVANCE(604);
      if (lookahead == '/') ADVANCE(864);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(819);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(803);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(604);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(555);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(410);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(603);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(604);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(819);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(803);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '.') ADVANCE(611);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(557);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(823);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(420);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(605);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '.') ADVANCE(612);
      if (lookahead == '/') ADVANCE(865);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(823);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(608);
      if (lookahead == '.') ADVANCE(615);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(607);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(608);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(610);
      if (lookahead == '.') ADVANCE(619);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(561);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(434);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(610);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(612);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(563);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(823);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(444);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(611);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(612);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(823);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(614);
      if (lookahead == '.') ADVANCE(623);
      if (lookahead == '/') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(457);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(613);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(614);
      if (lookahead == '.') ADVANCE(624);
      if (lookahead == '/') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(815);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(809);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(616);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(615);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(616);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(618);
      if (lookahead == '.') ADVANCE(627);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(617);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(618);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(620);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(571);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(476);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(619);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(620);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(175);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '.') ADVANCE(631);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(573);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(485);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(622);
      if (lookahead == '.') ADVANCE(632);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(181);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(624);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(498);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(623);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(624);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(815);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(809);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '.') ADVANCE(635);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(625);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(626);
      if (lookahead == '.') ADVANCE(636);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(627);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(628);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '.') ADVANCE(639);
      if (lookahead == '/') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(629);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(630);
      if (lookahead == '.') ADVANCE(640);
      if (lookahead == '/') ADVANCE(317);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(583);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(525);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(181);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(634);
      if (lookahead == '.') ADVANCE(641);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(585);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(514);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(634);
      if (lookahead == '.') ADVANCE(642);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(188);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(635);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '.') ADVANCE(645);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(637);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(638);
      if (lookahead == '.') ADVANCE(646);
      if (lookahead == '/') ADVANCE(319);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(639);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(640);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(593);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(544);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(642);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(188);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(644);
      if (lookahead == '.') ADVANCE(647);
      if (lookahead == '/') ADVANCE(876);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(643);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(809);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(644);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '/') ADVANCE(876);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(809);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(646);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(645);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(646);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(648);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(647);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(809);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(648);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(809);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(650);
      if (lookahead == '.') ADVANCE(651);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(649);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(581);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(653);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(650);
      if (lookahead == '.') ADVANCE(652);
      if (lookahead == '/') ADVANCE(282);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(652);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(651);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(592);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(655);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(652);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(654);
      if (lookahead == '.') ADVANCE(655);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(653);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(654);
      if (lookahead == '.') ADVANCE(656);
      if (lookahead == '/') ADVANCE(290);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(656);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(655);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(656);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(657);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(660);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(777);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(785);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(659);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(779);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(781);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(787);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(791);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(783);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(667);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(669);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(70);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(668);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(670);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(671);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(86);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(798);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(673);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(675);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(677);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(792);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(798);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(674);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(676);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(678);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(794);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(799);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(794);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(800);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(677);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(796);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(800);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(678);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(679);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(687);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(681);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(680);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(688);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(682);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(681);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(682);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(691);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(695);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(699);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(696);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(698);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(698);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(699);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(704);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(710);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(705);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(709);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(706);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(706);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(707);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(709);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(710);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(711);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(713);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(310);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(713);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(724);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(725);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(726);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(727);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(728);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(729);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(730);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(734);
      if (lookahead == '.') ADVANCE(743);
      if (lookahead == '/') ADVANCE(857);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(733);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(757);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(825);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(741);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(735);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(765);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(734);
      if (lookahead == '.') ADVANCE(744);
      if (lookahead == '/') ADVANCE(857);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(825);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(810);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(861);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(738);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(740);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(891);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(875);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(740);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(738);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(740);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(740);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(742);
      if (lookahead == '.') ADVANCE(752);
      if (lookahead == '/') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(744);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(743);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(759);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(825);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(751);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(745);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(767);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(744);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(825);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(810);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(861);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(748);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(750);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(891);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(875);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(750);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(748);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(750);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(750);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(752);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(828);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '.') ADVANCE(755);
      if (lookahead == '/') ADVANCE(863);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(753);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(761);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(769);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(810);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(754);
      if (lookahead == '.') ADVANCE(756);
      if (lookahead == '/') ADVANCE(863);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(810);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(755);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(763);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(771);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(810);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(756);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(810);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '.') ADVANCE(759);
      if (lookahead == '/') ADVANCE(887);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(826);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(741);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(757);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(758);
      if (lookahead == '.') ADVANCE(760);
      if (lookahead == '/') ADVANCE(887);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(826);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(811);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(760);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(826);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(751);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(759);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(760);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(826);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(811);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '.') ADVANCE(763);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(761);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(762);
      if (lookahead == '.') ADVANCE(764);
      if (lookahead == '/') ADVANCE(893);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(811);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(764);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(763);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(764);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(811);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(766);
      if (lookahead == '.') ADVANCE(767);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(757);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(827);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(741);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(765);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(766);
      if (lookahead == '.') ADVANCE(768);
      if (lookahead == '/') ADVANCE(871);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(827);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(812);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(768);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(759);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(827);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(751);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(767);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(768);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(827);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(812);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(770);
      if (lookahead == '.') ADVANCE(771);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(769);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(812);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(770);
      if (lookahead == '.') ADVANCE(772);
      if (lookahead == '/') ADVANCE(877);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(812);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(772);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(771);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(812);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(772);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(812);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(849);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(879);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(851);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(843);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(829);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(415);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(557);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(605);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(878);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(778);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(449);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(856);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(449);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(886);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(782);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(870);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(899);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(857);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(733);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(757);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(887);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(757);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(871);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(459);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(460);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(900);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(741);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(862);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(793);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(547);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(595);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(643);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(862);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(547);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(595);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(643);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(892);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(876);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(797);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(643);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(876);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(848);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(643);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(863);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(753);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(761);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(769);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(893);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(761);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(877);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(847);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(769);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(855);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(674);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(676);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(678);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(869);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(678);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(858);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(673);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(675);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(677);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(872);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(677);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(860);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(696);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(698);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(874);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(698);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(861);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(836);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(840);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(838);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(875);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(838);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(852);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(695);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(699);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(699);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(866);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(853);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(659);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(867);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(854);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(657);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(660);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(868);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(859);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(835);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(839);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(837);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(839);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(873);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(837);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(845);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(846);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(773);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(774);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(776);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(835);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(839);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(837);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(836);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(840);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(838);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(837);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(838);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(839);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(702);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(832);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(773);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(774);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(776);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(833);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(702);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(658);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(405);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(555);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(439);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(563);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(695);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(699);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(659);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(657);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(660);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(674);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(676);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(678);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(490);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(575);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(743);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(759);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(673);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(675);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(677);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(835);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(839);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(837);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(696);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(700);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(698);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(836);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(840);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(838);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(551);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(599);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(647);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(755);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(763);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(771);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(603);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(611);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(697);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(678);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(623);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(677);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(837);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(698);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(838);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(647);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(771);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(702);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(842);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(699);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(661);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(660);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(759);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(839);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(700);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(840);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(763);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '|') ADVANCE(162);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(902);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(356);
      if (lookahead == '|') ADVANCE(163);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(903);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(916);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_quote);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_quasiquote);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_syntax);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_quasisyntax);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_unquote);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_unquote);
      if (lookahead == '@') ADVANCE(924);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_unquote_splicing);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_unsyntax);
      if (lookahead == '@') ADVANCE(926);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_unsyntax_splicing);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(370);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_lang_name);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(930);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 357},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 357},
  [22] = {.lex_state = 357},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 357},
  [73] = {.lex_state = 357},
  [74] = {.lex_state = 357},
  [75] = {.lex_state = 357},
  [76] = {.lex_state = 357},
  [77] = {.lex_state = 357},
  [78] = {.lex_state = 357},
  [79] = {.lex_state = 357},
  [80] = {.lex_state = 357},
  [81] = {.lex_state = 357},
  [82] = {.lex_state = 357},
  [83] = {.lex_state = 357},
  [84] = {.lex_state = 357},
  [85] = {.lex_state = 357},
  [86] = {.lex_state = 357},
  [87] = {.lex_state = 357},
  [88] = {.lex_state = 357},
  [89] = {.lex_state = 357},
  [90] = {.lex_state = 357},
  [91] = {.lex_state = 357},
  [92] = {.lex_state = 357},
  [93] = {.lex_state = 357},
  [94] = {.lex_state = 357},
  [95] = {.lex_state = 357},
  [96] = {.lex_state = 357},
  [97] = {.lex_state = 357},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 354},
  [129] = {.lex_state = 354},
  [130] = {.lex_state = 354},
  [131] = {.lex_state = 354},
  [132] = {.lex_state = 354},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 354},
  [135] = {.lex_state = 354},
  [136] = {.lex_state = 354},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 354},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 357},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 357},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 357},
  [146] = {.lex_state = 357},
  [147] = {.lex_state = 357},
  [148] = {.lex_state = 357},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 357},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 357},
  [154] = {.lex_state = 357},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 354},
  [157] = {.lex_state = 354},
  [158] = {.lex_state = 357},
  [159] = {.lex_state = 357},
  [160] = {.lex_state = 357},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 1},
  [164] = {.lex_state = 353},
  [165] = {.lex_state = 353},
  [166] = {.lex_state = 0},
};

enum {
  ts_external_token__here_string_body = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__here_string_body] = sym__here_string_body,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__here_string_body] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__skip_token1] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_quote] = ACTIONS(1),
    [sym_quasiquote] = ACTIONS(1),
    [sym_unquote] = ACTIONS(1),
    [sym__here_string_body] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(166),
    [sym__token] = STATE(22),
    [sym__skip] = STATE(22),
    [sym_comment] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_sexp_comment] = STATE(22),
    [sym__datum] = STATE(22),
    [sym_string] = STATE(22),
    [sym_byte_string] = STATE(22),
    [sym_here_string] = STATE(22),
    [sym_regex] = STATE(22),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(22),
    [sym_symbol] = STATE(22),
    [sym_box] = STATE(22),
    [sym_list] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_structure] = STATE(22),
    [sym_hash] = STATE(22),
    [sym_graph] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__skip_token1] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(13),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(5),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(5),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [sym_quote] = ACTIONS(5),
    [sym_quasiquote] = ACTIONS(5),
    [sym_syntax] = ACTIONS(5),
    [sym_quasisyntax] = ACTIONS(5),
    [sym_unquote] = ACTIONS(13),
    [sym_unquote_splicing] = ACTIONS(5),
    [sym_unsyntax] = ACTIONS(13),
    [sym_unsyntax_splicing] = ACTIONS(5),
    [anon_sym_POUNDreader] = ACTIONS(43),
    [anon_sym_POUNDlang] = ACTIONS(45),
    [anon_sym_POUND_BANG] = ACTIONS(47),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(49),
    [sym_dot] = ACTIONS(52),
    [aux_sym_comment_token1] = ACTIONS(55),
    [anon_sym_POUND_PIPE] = ACTIONS(58),
    [anon_sym_POUND_SEMI] = ACTIONS(61),
    [sym__line_comment] = ACTIONS(55),
    [sym_boolean] = ACTIONS(52),
    [anon_sym_POUND] = ACTIONS(64),
    [anon_sym_POUND_LT_LT] = ACTIONS(67),
    [aux_sym_regex_token1] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [aux_sym_number_token1] = ACTIONS(76),
    [sym_character] = ACTIONS(49),
    [aux_sym_symbol_token1] = ACTIONS(79),
    [sym_keyword] = ACTIONS(49),
    [anon_sym_POUND_AMP] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_POUNDfl] = ACTIONS(96),
    [anon_sym_POUNDfx] = ACTIONS(96),
    [anon_sym_POUNDs] = ACTIONS(99),
    [anon_sym_POUNDhash] = ACTIONS(102),
    [anon_sym_POUNDhasheq] = ACTIONS(102),
    [anon_sym_POUNDhasheqv] = ACTIONS(105),
    [sym_quote] = ACTIONS(49),
    [sym_quasiquote] = ACTIONS(49),
    [sym_syntax] = ACTIONS(49),
    [sym_quasisyntax] = ACTIONS(49),
    [sym_unquote] = ACTIONS(52),
    [sym_unquote_splicing] = ACTIONS(49),
    [sym_unsyntax] = ACTIONS(52),
    [sym_unsyntax_splicing] = ACTIONS(49),
    [anon_sym_POUNDreader] = ACTIONS(108),
    [anon_sym_POUNDlang] = ACTIONS(111),
    [anon_sym_POUND_BANG] = ACTIONS(114),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(117),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(117),
    [sym_quasiquote] = ACTIONS(117),
    [sym_syntax] = ACTIONS(117),
    [sym_quasisyntax] = ACTIONS(117),
    [sym_unquote] = ACTIONS(119),
    [sym_unquote_splicing] = ACTIONS(117),
    [sym_unsyntax] = ACTIONS(119),
    [sym_unsyntax_splicing] = ACTIONS(117),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [4] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(117),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(117),
    [sym_quasiquote] = ACTIONS(117),
    [sym_syntax] = ACTIONS(117),
    [sym_quasisyntax] = ACTIONS(117),
    [sym_unquote] = ACTIONS(119),
    [sym_unquote_splicing] = ACTIONS(117),
    [sym_unsyntax] = ACTIONS(119),
    [sym_unsyntax_splicing] = ACTIONS(117),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [5] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(117),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(117),
    [sym_quasiquote] = ACTIONS(117),
    [sym_syntax] = ACTIONS(117),
    [sym_quasisyntax] = ACTIONS(117),
    [sym_unquote] = ACTIONS(119),
    [sym_unquote_splicing] = ACTIONS(117),
    [sym_unsyntax] = ACTIONS(119),
    [sym_unsyntax_splicing] = ACTIONS(117),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [6] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(117),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(117),
    [sym_quasiquote] = ACTIONS(117),
    [sym_syntax] = ACTIONS(117),
    [sym_quasisyntax] = ACTIONS(117),
    [sym_unquote] = ACTIONS(119),
    [sym_unquote_splicing] = ACTIONS(117),
    [sym_unsyntax] = ACTIONS(119),
    [sym_unsyntax_splicing] = ACTIONS(117),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [7] = {
    [sym__token] = STATE(20),
    [sym__skip] = STATE(20),
    [sym_comment] = STATE(20),
    [sym_block_comment] = STATE(20),
    [sym_sexp_comment] = STATE(20),
    [sym__datum] = STATE(20),
    [sym_string] = STATE(20),
    [sym_byte_string] = STATE(20),
    [sym_here_string] = STATE(20),
    [sym_regex] = STATE(20),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(20),
    [sym_symbol] = STATE(20),
    [sym_box] = STATE(20),
    [sym_list] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_structure] = STATE(20),
    [sym_hash] = STATE(20),
    [sym_graph] = STATE(20),
    [sym_extension] = STATE(20),
    [aux_sym_list_repeat1] = STATE(20),
    [aux_sym__skip_token1] = ACTIONS(167),
    [sym_dot] = ACTIONS(169),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(167),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(167),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [8] = {
    [sym__token] = STATE(4),
    [sym__skip] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym_sexp_comment] = STATE(4),
    [sym__datum] = STATE(4),
    [sym_string] = STATE(4),
    [sym_byte_string] = STATE(4),
    [sym_here_string] = STATE(4),
    [sym_regex] = STATE(4),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_box] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_structure] = STATE(4),
    [sym_hash] = STATE(4),
    [sym_graph] = STATE(4),
    [sym_extension] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym__skip_token1] = ACTIONS(173),
    [sym_dot] = ACTIONS(175),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(175),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(173),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(173),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(173),
    [sym_quasiquote] = ACTIONS(173),
    [sym_syntax] = ACTIONS(173),
    [sym_quasisyntax] = ACTIONS(173),
    [sym_unquote] = ACTIONS(175),
    [sym_unquote_splicing] = ACTIONS(173),
    [sym_unsyntax] = ACTIONS(175),
    [sym_unsyntax_splicing] = ACTIONS(173),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [9] = {
    [sym__token] = STATE(6),
    [sym__skip] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym_sexp_comment] = STATE(6),
    [sym__datum] = STATE(6),
    [sym_string] = STATE(6),
    [sym_byte_string] = STATE(6),
    [sym_here_string] = STATE(6),
    [sym_regex] = STATE(6),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(6),
    [sym_symbol] = STATE(6),
    [sym_box] = STATE(6),
    [sym_list] = STATE(6),
    [sym_vector] = STATE(6),
    [sym_structure] = STATE(6),
    [sym_hash] = STATE(6),
    [sym_graph] = STATE(6),
    [sym_extension] = STATE(6),
    [aux_sym_list_repeat1] = STATE(6),
    [aux_sym__skip_token1] = ACTIONS(177),
    [sym_dot] = ACTIONS(179),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(177),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(177),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(177),
    [sym_quasiquote] = ACTIONS(177),
    [sym_syntax] = ACTIONS(177),
    [sym_quasisyntax] = ACTIONS(177),
    [sym_unquote] = ACTIONS(179),
    [sym_unquote_splicing] = ACTIONS(177),
    [sym_unsyntax] = ACTIONS(179),
    [sym_unsyntax_splicing] = ACTIONS(177),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [10] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(117),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(117),
    [sym_quasiquote] = ACTIONS(117),
    [sym_syntax] = ACTIONS(117),
    [sym_quasisyntax] = ACTIONS(117),
    [sym_unquote] = ACTIONS(119),
    [sym_unquote_splicing] = ACTIONS(117),
    [sym_unsyntax] = ACTIONS(119),
    [sym_unsyntax_splicing] = ACTIONS(117),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [11] = {
    [sym__token] = STATE(17),
    [sym__skip] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_block_comment] = STATE(17),
    [sym_sexp_comment] = STATE(17),
    [sym__datum] = STATE(17),
    [sym_string] = STATE(17),
    [sym_byte_string] = STATE(17),
    [sym_here_string] = STATE(17),
    [sym_regex] = STATE(17),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(17),
    [sym_symbol] = STATE(17),
    [sym_box] = STATE(17),
    [sym_list] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_structure] = STATE(17),
    [sym_hash] = STATE(17),
    [sym_graph] = STATE(17),
    [sym_extension] = STATE(17),
    [aux_sym_list_repeat1] = STATE(17),
    [aux_sym__skip_token1] = ACTIONS(181),
    [sym_dot] = ACTIONS(183),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(181),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(181),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(181),
    [sym_quasiquote] = ACTIONS(181),
    [sym_syntax] = ACTIONS(181),
    [sym_quasisyntax] = ACTIONS(181),
    [sym_unquote] = ACTIONS(183),
    [sym_unquote_splicing] = ACTIONS(181),
    [sym_unsyntax] = ACTIONS(183),
    [sym_unsyntax_splicing] = ACTIONS(181),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [12] = {
    [sym__token] = STATE(10),
    [sym__skip] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym_sexp_comment] = STATE(10),
    [sym__datum] = STATE(10),
    [sym_string] = STATE(10),
    [sym_byte_string] = STATE(10),
    [sym_here_string] = STATE(10),
    [sym_regex] = STATE(10),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(10),
    [sym_symbol] = STATE(10),
    [sym_box] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_structure] = STATE(10),
    [sym_hash] = STATE(10),
    [sym_graph] = STATE(10),
    [sym_extension] = STATE(10),
    [aux_sym_list_repeat1] = STATE(10),
    [aux_sym__skip_token1] = ACTIONS(187),
    [sym_dot] = ACTIONS(189),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(187),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(187),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(187),
    [sym_quasiquote] = ACTIONS(187),
    [sym_syntax] = ACTIONS(187),
    [sym_quasisyntax] = ACTIONS(187),
    [sym_unquote] = ACTIONS(189),
    [sym_unquote_splicing] = ACTIONS(187),
    [sym_unsyntax] = ACTIONS(189),
    [sym_unsyntax_splicing] = ACTIONS(187),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [13] = {
    [sym__token] = STATE(5),
    [sym__skip] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym_sexp_comment] = STATE(5),
    [sym__datum] = STATE(5),
    [sym_string] = STATE(5),
    [sym_byte_string] = STATE(5),
    [sym_here_string] = STATE(5),
    [sym_regex] = STATE(5),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(5),
    [sym_symbol] = STATE(5),
    [sym_box] = STATE(5),
    [sym_list] = STATE(5),
    [sym_vector] = STATE(5),
    [sym_structure] = STATE(5),
    [sym_hash] = STATE(5),
    [sym_graph] = STATE(5),
    [sym_extension] = STATE(5),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym__skip_token1] = ACTIONS(191),
    [sym_dot] = ACTIONS(193),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(191),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(191),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(191),
    [sym_quasiquote] = ACTIONS(191),
    [sym_syntax] = ACTIONS(191),
    [sym_quasisyntax] = ACTIONS(191),
    [sym_unquote] = ACTIONS(193),
    [sym_unquote_splicing] = ACTIONS(191),
    [sym_unsyntax] = ACTIONS(193),
    [sym_unsyntax_splicing] = ACTIONS(191),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [14] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(117),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(117),
    [sym_quasiquote] = ACTIONS(117),
    [sym_syntax] = ACTIONS(117),
    [sym_quasisyntax] = ACTIONS(117),
    [sym_unquote] = ACTIONS(119),
    [sym_unquote_splicing] = ACTIONS(117),
    [sym_unsyntax] = ACTIONS(119),
    [sym_unsyntax_splicing] = ACTIONS(117),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [15] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(117),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(117),
    [sym_quasiquote] = ACTIONS(117),
    [sym_syntax] = ACTIONS(117),
    [sym_quasisyntax] = ACTIONS(117),
    [sym_unquote] = ACTIONS(119),
    [sym_unquote_splicing] = ACTIONS(117),
    [sym_unsyntax] = ACTIONS(119),
    [sym_unsyntax_splicing] = ACTIONS(117),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [16] = {
    [sym__token] = STATE(3),
    [sym__skip] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym_sexp_comment] = STATE(3),
    [sym__datum] = STATE(3),
    [sym_string] = STATE(3),
    [sym_byte_string] = STATE(3),
    [sym_here_string] = STATE(3),
    [sym_regex] = STATE(3),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_box] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_structure] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_graph] = STATE(3),
    [sym_extension] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [aux_sym__skip_token1] = ACTIONS(195),
    [sym_dot] = ACTIONS(197),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(195),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(195),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(195),
    [sym_quasiquote] = ACTIONS(195),
    [sym_syntax] = ACTIONS(195),
    [sym_quasisyntax] = ACTIONS(195),
    [sym_unquote] = ACTIONS(197),
    [sym_unquote_splicing] = ACTIONS(195),
    [sym_unsyntax] = ACTIONS(197),
    [sym_unsyntax_splicing] = ACTIONS(195),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [17] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(117),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(117),
    [sym_quasiquote] = ACTIONS(117),
    [sym_syntax] = ACTIONS(117),
    [sym_quasisyntax] = ACTIONS(117),
    [sym_unquote] = ACTIONS(119),
    [sym_unquote_splicing] = ACTIONS(117),
    [sym_unsyntax] = ACTIONS(119),
    [sym_unsyntax_splicing] = ACTIONS(117),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [18] = {
    [sym__token] = STATE(14),
    [sym__skip] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_sexp_comment] = STATE(14),
    [sym__datum] = STATE(14),
    [sym_string] = STATE(14),
    [sym_byte_string] = STATE(14),
    [sym_here_string] = STATE(14),
    [sym_regex] = STATE(14),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym_box] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_structure] = STATE(14),
    [sym_hash] = STATE(14),
    [sym_graph] = STATE(14),
    [sym_extension] = STATE(14),
    [aux_sym_list_repeat1] = STATE(14),
    [aux_sym__skip_token1] = ACTIONS(201),
    [sym_dot] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(201),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(201),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(201),
    [sym_quasiquote] = ACTIONS(201),
    [sym_syntax] = ACTIONS(201),
    [sym_quasisyntax] = ACTIONS(201),
    [sym_unquote] = ACTIONS(203),
    [sym_unquote_splicing] = ACTIONS(201),
    [sym_unsyntax] = ACTIONS(203),
    [sym_unsyntax_splicing] = ACTIONS(201),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [19] = {
    [sym__token] = STATE(15),
    [sym__skip] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_block_comment] = STATE(15),
    [sym_sexp_comment] = STATE(15),
    [sym__datum] = STATE(15),
    [sym_string] = STATE(15),
    [sym_byte_string] = STATE(15),
    [sym_here_string] = STATE(15),
    [sym_regex] = STATE(15),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym_box] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_structure] = STATE(15),
    [sym_hash] = STATE(15),
    [sym_graph] = STATE(15),
    [sym_extension] = STATE(15),
    [aux_sym_list_repeat1] = STATE(15),
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(205),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(205),
    [sym_quasiquote] = ACTIONS(205),
    [sym_syntax] = ACTIONS(205),
    [sym_quasisyntax] = ACTIONS(205),
    [sym_unquote] = ACTIONS(207),
    [sym_unquote_splicing] = ACTIONS(205),
    [sym_unsyntax] = ACTIONS(207),
    [sym_unsyntax_splicing] = ACTIONS(205),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [20] = {
    [sym__token] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym_sexp_comment] = STATE(2),
    [sym__datum] = STATE(2),
    [sym_string] = STATE(2),
    [sym_byte_string] = STATE(2),
    [sym_here_string] = STATE(2),
    [sym_regex] = STATE(2),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(117),
    [sym_dot] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(121),
    [anon_sym_POUND_PIPE] = ACTIONS(123),
    [anon_sym_POUND_SEMI] = ACTIONS(125),
    [sym__line_comment] = ACTIONS(121),
    [sym_boolean] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(117),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(117),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(117),
    [sym_quasiquote] = ACTIONS(117),
    [sym_syntax] = ACTIONS(117),
    [sym_quasisyntax] = ACTIONS(117),
    [sym_unquote] = ACTIONS(119),
    [sym_unquote_splicing] = ACTIONS(117),
    [sym_unsyntax] = ACTIONS(119),
    [sym_unsyntax_splicing] = ACTIONS(117),
    [anon_sym_POUNDreader] = ACTIONS(157),
    [anon_sym_POUNDlang] = ACTIONS(159),
    [anon_sym_POUND_BANG] = ACTIONS(161),
  },
  [21] = {
    [sym__token] = STATE(21),
    [sym__skip] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_sexp_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_here_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(21),
    [sym_symbol] = STATE(21),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym_extension] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym__skip_token1] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(214),
    [anon_sym_POUND_PIPE] = ACTIONS(217),
    [anon_sym_POUND_SEMI] = ACTIONS(220),
    [sym__line_comment] = ACTIONS(214),
    [sym_boolean] = ACTIONS(223),
    [anon_sym_POUND] = ACTIONS(226),
    [anon_sym_POUND_LT_LT] = ACTIONS(229),
    [aux_sym_regex_token1] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [aux_sym_number_token1] = ACTIONS(238),
    [sym_character] = ACTIONS(211),
    [aux_sym_symbol_token1] = ACTIONS(241),
    [sym_keyword] = ACTIONS(211),
    [anon_sym_POUND_AMP] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_POUNDfl] = ACTIONS(256),
    [anon_sym_POUNDfx] = ACTIONS(256),
    [anon_sym_POUNDs] = ACTIONS(259),
    [anon_sym_POUNDhash] = ACTIONS(262),
    [anon_sym_POUNDhasheq] = ACTIONS(262),
    [anon_sym_POUNDhasheqv] = ACTIONS(265),
    [sym_quote] = ACTIONS(211),
    [sym_quasiquote] = ACTIONS(211),
    [sym_syntax] = ACTIONS(211),
    [sym_quasisyntax] = ACTIONS(211),
    [sym_unquote] = ACTIONS(223),
    [sym_unquote_splicing] = ACTIONS(211),
    [sym_unsyntax] = ACTIONS(223),
    [sym_unsyntax_splicing] = ACTIONS(211),
    [anon_sym_POUNDreader] = ACTIONS(268),
    [anon_sym_POUNDlang] = ACTIONS(271),
    [anon_sym_POUND_BANG] = ACTIONS(274),
  },
  [22] = {
    [sym__token] = STATE(21),
    [sym__skip] = STATE(21),
    [sym_comment] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_sexp_comment] = STATE(21),
    [sym__datum] = STATE(21),
    [sym_string] = STATE(21),
    [sym_byte_string] = STATE(21),
    [sym_here_string] = STATE(21),
    [sym_regex] = STATE(21),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(21),
    [sym_symbol] = STATE(21),
    [sym_box] = STATE(21),
    [sym_list] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_structure] = STATE(21),
    [sym_hash] = STATE(21),
    [sym_graph] = STATE(21),
    [sym_extension] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(277),
    [aux_sym__skip_token1] = ACTIONS(279),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(281),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(279),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(279),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [sym_quote] = ACTIONS(279),
    [sym_quasiquote] = ACTIONS(279),
    [sym_syntax] = ACTIONS(279),
    [sym_quasisyntax] = ACTIONS(279),
    [sym_unquote] = ACTIONS(281),
    [sym_unquote_splicing] = ACTIONS(279),
    [sym_unsyntax] = ACTIONS(281),
    [sym_unsyntax_splicing] = ACTIONS(279),
    [anon_sym_POUNDreader] = ACTIONS(43),
    [anon_sym_POUNDlang] = ACTIONS(45),
    [anon_sym_POUND_BANG] = ACTIONS(47),
  },
  [23] = {
    [sym__skip] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_block_comment] = STATE(35),
    [sym_sexp_comment] = STATE(35),
    [sym__datum] = STATE(97),
    [sym_string] = STATE(97),
    [sym_byte_string] = STATE(97),
    [sym_here_string] = STATE(97),
    [sym_regex] = STATE(97),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(97),
    [sym_symbol] = STATE(97),
    [sym_box] = STATE(97),
    [sym_list] = STATE(97),
    [sym_vector] = STATE(97),
    [sym_structure] = STATE(97),
    [sym_hash] = STATE(97),
    [sym_graph] = STATE(97),
    [aux_sym_sexp_comment_repeat1] = STATE(35),
    [aux_sym__skip_token1] = ACTIONS(283),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(293),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(293),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [sym_quote] = ACTIONS(293),
    [sym_quasiquote] = ACTIONS(293),
    [sym_syntax] = ACTIONS(293),
    [sym_quasisyntax] = ACTIONS(293),
    [sym_unquote] = ACTIONS(291),
    [sym_unquote_splicing] = ACTIONS(293),
    [sym_unsyntax] = ACTIONS(291),
    [sym_unsyntax_splicing] = ACTIONS(293),
  },
  [24] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(116),
    [sym_string] = STATE(116),
    [sym_byte_string] = STATE(116),
    [sym_here_string] = STATE(116),
    [sym_regex] = STATE(116),
    [sym__real_string] = STATE(101),
    [sym_number] = STATE(116),
    [sym_symbol] = STATE(116),
    [sym_box] = STATE(116),
    [sym_list] = STATE(116),
    [sym_vector] = STATE(116),
    [sym_structure] = STATE(116),
    [sym_hash] = STATE(116),
    [sym_graph] = STATE(116),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(297),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_POUND_LT_LT] = ACTIONS(301),
    [aux_sym_regex_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_number_token1] = ACTIONS(307),
    [sym_character] = ACTIONS(309),
    [aux_sym_symbol_token1] = ACTIONS(311),
    [sym_keyword] = ACTIONS(309),
    [anon_sym_POUND_AMP] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_POUNDfl] = ACTIONS(321),
    [anon_sym_POUNDfx] = ACTIONS(321),
    [anon_sym_POUNDs] = ACTIONS(323),
    [anon_sym_POUNDhash] = ACTIONS(325),
    [anon_sym_POUNDhasheq] = ACTIONS(325),
    [anon_sym_POUNDhasheqv] = ACTIONS(327),
    [sym_quote] = ACTIONS(309),
    [sym_quasiquote] = ACTIONS(309),
    [sym_syntax] = ACTIONS(309),
    [sym_quasisyntax] = ACTIONS(309),
    [sym_unquote] = ACTIONS(297),
    [sym_unquote_splicing] = ACTIONS(309),
    [sym_unsyntax] = ACTIONS(297),
    [sym_unsyntax_splicing] = ACTIONS(309),
  },
  [25] = {
    [sym__skip] = STATE(24),
    [sym_comment] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_sexp_comment] = STATE(24),
    [sym__datum] = STATE(121),
    [sym_string] = STATE(121),
    [sym_byte_string] = STATE(121),
    [sym_here_string] = STATE(121),
    [sym_regex] = STATE(121),
    [sym__real_string] = STATE(101),
    [sym_number] = STATE(121),
    [sym_symbol] = STATE(121),
    [sym_box] = STATE(121),
    [sym_list] = STATE(121),
    [sym_vector] = STATE(121),
    [sym_structure] = STATE(121),
    [sym_hash] = STATE(121),
    [sym_graph] = STATE(121),
    [aux_sym_sexp_comment_repeat1] = STATE(24),
    [aux_sym__skip_token1] = ACTIONS(329),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(331),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_POUND_LT_LT] = ACTIONS(301),
    [aux_sym_regex_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_number_token1] = ACTIONS(307),
    [sym_character] = ACTIONS(333),
    [aux_sym_symbol_token1] = ACTIONS(311),
    [sym_keyword] = ACTIONS(333),
    [anon_sym_POUND_AMP] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_POUNDfl] = ACTIONS(321),
    [anon_sym_POUNDfx] = ACTIONS(321),
    [anon_sym_POUNDs] = ACTIONS(323),
    [anon_sym_POUNDhash] = ACTIONS(325),
    [anon_sym_POUNDhasheq] = ACTIONS(325),
    [anon_sym_POUNDhasheqv] = ACTIONS(327),
    [sym_quote] = ACTIONS(333),
    [sym_quasiquote] = ACTIONS(333),
    [sym_syntax] = ACTIONS(333),
    [sym_quasisyntax] = ACTIONS(333),
    [sym_unquote] = ACTIONS(331),
    [sym_unquote_splicing] = ACTIONS(333),
    [sym_unsyntax] = ACTIONS(331),
    [sym_unsyntax_splicing] = ACTIONS(333),
  },
  [26] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(87),
    [sym_string] = STATE(87),
    [sym_byte_string] = STATE(87),
    [sym_here_string] = STATE(87),
    [sym_regex] = STATE(87),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(87),
    [sym_symbol] = STATE(87),
    [sym_box] = STATE(87),
    [sym_list] = STATE(87),
    [sym_vector] = STATE(87),
    [sym_structure] = STATE(87),
    [sym_hash] = STATE(87),
    [sym_graph] = STATE(87),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(335),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(337),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(337),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [sym_quote] = ACTIONS(337),
    [sym_quasiquote] = ACTIONS(337),
    [sym_syntax] = ACTIONS(337),
    [sym_quasisyntax] = ACTIONS(337),
    [sym_unquote] = ACTIONS(335),
    [sym_unquote_splicing] = ACTIONS(337),
    [sym_unsyntax] = ACTIONS(335),
    [sym_unsyntax_splicing] = ACTIONS(337),
  },
  [27] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(119),
    [sym_string] = STATE(119),
    [sym_byte_string] = STATE(119),
    [sym_here_string] = STATE(119),
    [sym_regex] = STATE(119),
    [sym__real_string] = STATE(101),
    [sym_number] = STATE(119),
    [sym_symbol] = STATE(119),
    [sym_box] = STATE(119),
    [sym_list] = STATE(119),
    [sym_vector] = STATE(119),
    [sym_structure] = STATE(119),
    [sym_hash] = STATE(119),
    [sym_graph] = STATE(119),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(339),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_POUND_LT_LT] = ACTIONS(301),
    [aux_sym_regex_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_number_token1] = ACTIONS(307),
    [sym_character] = ACTIONS(341),
    [aux_sym_symbol_token1] = ACTIONS(311),
    [sym_keyword] = ACTIONS(341),
    [anon_sym_POUND_AMP] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_POUNDfl] = ACTIONS(321),
    [anon_sym_POUNDfx] = ACTIONS(321),
    [anon_sym_POUNDs] = ACTIONS(323),
    [anon_sym_POUNDhash] = ACTIONS(325),
    [anon_sym_POUNDhasheq] = ACTIONS(325),
    [anon_sym_POUNDhasheqv] = ACTIONS(327),
    [sym_quote] = ACTIONS(341),
    [sym_quasiquote] = ACTIONS(341),
    [sym_syntax] = ACTIONS(341),
    [sym_quasisyntax] = ACTIONS(341),
    [sym_unquote] = ACTIONS(339),
    [sym_unquote_splicing] = ACTIONS(341),
    [sym_unsyntax] = ACTIONS(339),
    [sym_unsyntax_splicing] = ACTIONS(341),
  },
  [28] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(58),
    [sym_string] = STATE(58),
    [sym_byte_string] = STATE(58),
    [sym_here_string] = STATE(58),
    [sym_regex] = STATE(58),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(58),
    [sym_symbol] = STATE(58),
    [sym_box] = STATE(58),
    [sym_list] = STATE(58),
    [sym_vector] = STATE(58),
    [sym_structure] = STATE(58),
    [sym_hash] = STATE(58),
    [sym_graph] = STATE(58),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(343),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(345),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(345),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(345),
    [sym_quasiquote] = ACTIONS(345),
    [sym_syntax] = ACTIONS(345),
    [sym_quasisyntax] = ACTIONS(345),
    [sym_unquote] = ACTIONS(343),
    [sym_unquote_splicing] = ACTIONS(345),
    [sym_unsyntax] = ACTIONS(343),
    [sym_unsyntax_splicing] = ACTIONS(345),
  },
  [29] = {
    [sym__skip] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_block_comment] = STATE(27),
    [sym_sexp_comment] = STATE(27),
    [sym__datum] = STATE(108),
    [sym_string] = STATE(108),
    [sym_byte_string] = STATE(108),
    [sym_here_string] = STATE(108),
    [sym_regex] = STATE(108),
    [sym__real_string] = STATE(101),
    [sym_number] = STATE(108),
    [sym_symbol] = STATE(108),
    [sym_box] = STATE(108),
    [sym_list] = STATE(108),
    [sym_vector] = STATE(108),
    [sym_structure] = STATE(108),
    [sym_hash] = STATE(108),
    [sym_graph] = STATE(108),
    [aux_sym_sexp_comment_repeat1] = STATE(27),
    [aux_sym__skip_token1] = ACTIONS(347),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_POUND_LT_LT] = ACTIONS(301),
    [aux_sym_regex_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_number_token1] = ACTIONS(307),
    [sym_character] = ACTIONS(351),
    [aux_sym_symbol_token1] = ACTIONS(311),
    [sym_keyword] = ACTIONS(351),
    [anon_sym_POUND_AMP] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_POUNDfl] = ACTIONS(321),
    [anon_sym_POUNDfx] = ACTIONS(321),
    [anon_sym_POUNDs] = ACTIONS(323),
    [anon_sym_POUNDhash] = ACTIONS(325),
    [anon_sym_POUNDhasheq] = ACTIONS(325),
    [anon_sym_POUNDhasheqv] = ACTIONS(327),
    [sym_quote] = ACTIONS(351),
    [sym_quasiquote] = ACTIONS(351),
    [sym_syntax] = ACTIONS(351),
    [sym_quasisyntax] = ACTIONS(351),
    [sym_unquote] = ACTIONS(349),
    [sym_unquote_splicing] = ACTIONS(351),
    [sym_unsyntax] = ACTIONS(349),
    [sym_unsyntax_splicing] = ACTIONS(351),
  },
  [30] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(49),
    [sym_string] = STATE(49),
    [sym_byte_string] = STATE(49),
    [sym_here_string] = STATE(49),
    [sym_regex] = STATE(49),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(49),
    [sym_symbol] = STATE(49),
    [sym_box] = STATE(49),
    [sym_list] = STATE(49),
    [sym_vector] = STATE(49),
    [sym_structure] = STATE(49),
    [sym_hash] = STATE(49),
    [sym_graph] = STATE(49),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(353),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(355),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(355),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(355),
    [sym_quasiquote] = ACTIONS(355),
    [sym_syntax] = ACTIONS(355),
    [sym_quasisyntax] = ACTIONS(355),
    [sym_unquote] = ACTIONS(353),
    [sym_unquote_splicing] = ACTIONS(355),
    [sym_unsyntax] = ACTIONS(353),
    [sym_unsyntax_splicing] = ACTIONS(355),
  },
  [31] = {
    [sym__skip] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym_sexp_comment] = STATE(30),
    [sym__datum] = STATE(50),
    [sym_string] = STATE(50),
    [sym_byte_string] = STATE(50),
    [sym_here_string] = STATE(50),
    [sym_regex] = STATE(50),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(50),
    [sym_symbol] = STATE(50),
    [sym_box] = STATE(50),
    [sym_list] = STATE(50),
    [sym_vector] = STATE(50),
    [sym_structure] = STATE(50),
    [sym_hash] = STATE(50),
    [sym_graph] = STATE(50),
    [aux_sym_sexp_comment_repeat1] = STATE(30),
    [aux_sym__skip_token1] = ACTIONS(357),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(361),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(361),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(361),
    [sym_quasiquote] = ACTIONS(361),
    [sym_syntax] = ACTIONS(361),
    [sym_quasisyntax] = ACTIONS(361),
    [sym_unquote] = ACTIONS(359),
    [sym_unquote_splicing] = ACTIONS(361),
    [sym_unsyntax] = ACTIONS(359),
    [sym_unsyntax_splicing] = ACTIONS(361),
  },
  [32] = {
    [sym__skip] = STATE(40),
    [sym_comment] = STATE(40),
    [sym_block_comment] = STATE(40),
    [sym_sexp_comment] = STATE(40),
    [sym__datum] = STATE(46),
    [sym_string] = STATE(46),
    [sym_byte_string] = STATE(46),
    [sym_here_string] = STATE(46),
    [sym_regex] = STATE(46),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(46),
    [sym_symbol] = STATE(46),
    [sym_box] = STATE(46),
    [sym_list] = STATE(46),
    [sym_vector] = STATE(46),
    [sym_structure] = STATE(46),
    [sym_hash] = STATE(46),
    [sym_graph] = STATE(46),
    [aux_sym_sexp_comment_repeat1] = STATE(40),
    [aux_sym__skip_token1] = ACTIONS(363),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(365),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(367),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(367),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(367),
    [sym_quasiquote] = ACTIONS(367),
    [sym_syntax] = ACTIONS(367),
    [sym_quasisyntax] = ACTIONS(367),
    [sym_unquote] = ACTIONS(365),
    [sym_unquote_splicing] = ACTIONS(367),
    [sym_unsyntax] = ACTIONS(365),
    [sym_unsyntax_splicing] = ACTIONS(367),
  },
  [33] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(109),
    [sym_string] = STATE(109),
    [sym_byte_string] = STATE(109),
    [sym_here_string] = STATE(109),
    [sym_regex] = STATE(109),
    [sym__real_string] = STATE(101),
    [sym_number] = STATE(109),
    [sym_symbol] = STATE(109),
    [sym_box] = STATE(109),
    [sym_list] = STATE(109),
    [sym_vector] = STATE(109),
    [sym_structure] = STATE(109),
    [sym_hash] = STATE(109),
    [sym_graph] = STATE(109),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_POUND_LT_LT] = ACTIONS(301),
    [aux_sym_regex_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_number_token1] = ACTIONS(307),
    [sym_character] = ACTIONS(371),
    [aux_sym_symbol_token1] = ACTIONS(311),
    [sym_keyword] = ACTIONS(371),
    [anon_sym_POUND_AMP] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_POUNDfl] = ACTIONS(321),
    [anon_sym_POUNDfx] = ACTIONS(321),
    [anon_sym_POUNDs] = ACTIONS(323),
    [anon_sym_POUNDhash] = ACTIONS(325),
    [anon_sym_POUNDhasheq] = ACTIONS(325),
    [anon_sym_POUNDhasheqv] = ACTIONS(327),
    [sym_quote] = ACTIONS(371),
    [sym_quasiquote] = ACTIONS(371),
    [sym_syntax] = ACTIONS(371),
    [sym_quasisyntax] = ACTIONS(371),
    [sym_unquote] = ACTIONS(369),
    [sym_unquote_splicing] = ACTIONS(371),
    [sym_unsyntax] = ACTIONS(369),
    [sym_unsyntax_splicing] = ACTIONS(371),
  },
  [34] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(53),
    [sym_string] = STATE(53),
    [sym_byte_string] = STATE(53),
    [sym_here_string] = STATE(53),
    [sym_regex] = STATE(53),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(53),
    [sym_symbol] = STATE(53),
    [sym_box] = STATE(53),
    [sym_list] = STATE(53),
    [sym_vector] = STATE(53),
    [sym_structure] = STATE(53),
    [sym_hash] = STATE(53),
    [sym_graph] = STATE(53),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(375),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(375),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(375),
    [sym_quasiquote] = ACTIONS(375),
    [sym_syntax] = ACTIONS(375),
    [sym_quasisyntax] = ACTIONS(375),
    [sym_unquote] = ACTIONS(373),
    [sym_unquote_splicing] = ACTIONS(375),
    [sym_unsyntax] = ACTIONS(373),
    [sym_unsyntax_splicing] = ACTIONS(375),
  },
  [35] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(79),
    [sym_string] = STATE(79),
    [sym_byte_string] = STATE(79),
    [sym_here_string] = STATE(79),
    [sym_regex] = STATE(79),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(79),
    [sym_symbol] = STATE(79),
    [sym_box] = STATE(79),
    [sym_list] = STATE(79),
    [sym_vector] = STATE(79),
    [sym_structure] = STATE(79),
    [sym_hash] = STATE(79),
    [sym_graph] = STATE(79),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(379),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(379),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [sym_quote] = ACTIONS(379),
    [sym_quasiquote] = ACTIONS(379),
    [sym_syntax] = ACTIONS(379),
    [sym_quasisyntax] = ACTIONS(379),
    [sym_unquote] = ACTIONS(377),
    [sym_unquote_splicing] = ACTIONS(379),
    [sym_unsyntax] = ACTIONS(377),
    [sym_unsyntax_splicing] = ACTIONS(379),
  },
  [36] = {
    [sym__skip] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_block_comment] = STATE(26),
    [sym_sexp_comment] = STATE(26),
    [sym__datum] = STATE(74),
    [sym_string] = STATE(74),
    [sym_byte_string] = STATE(74),
    [sym_here_string] = STATE(74),
    [sym_regex] = STATE(74),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(74),
    [sym_symbol] = STATE(74),
    [sym_box] = STATE(74),
    [sym_list] = STATE(74),
    [sym_vector] = STATE(74),
    [sym_structure] = STATE(74),
    [sym_hash] = STATE(74),
    [sym_graph] = STATE(74),
    [aux_sym_sexp_comment_repeat1] = STATE(26),
    [aux_sym__skip_token1] = ACTIONS(381),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(383),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(385),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(385),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [sym_quote] = ACTIONS(385),
    [sym_quasiquote] = ACTIONS(385),
    [sym_syntax] = ACTIONS(385),
    [sym_quasisyntax] = ACTIONS(385),
    [sym_unquote] = ACTIONS(383),
    [sym_unquote_splicing] = ACTIONS(385),
    [sym_unsyntax] = ACTIONS(383),
    [sym_unsyntax_splicing] = ACTIONS(385),
  },
  [37] = {
    [sym__skip] = STATE(33),
    [sym_comment] = STATE(33),
    [sym_block_comment] = STATE(33),
    [sym_sexp_comment] = STATE(33),
    [sym__datum] = STATE(99),
    [sym_string] = STATE(99),
    [sym_byte_string] = STATE(99),
    [sym_here_string] = STATE(99),
    [sym_regex] = STATE(99),
    [sym__real_string] = STATE(101),
    [sym_number] = STATE(99),
    [sym_symbol] = STATE(99),
    [sym_box] = STATE(99),
    [sym_list] = STATE(99),
    [sym_vector] = STATE(99),
    [sym_structure] = STATE(99),
    [sym_hash] = STATE(99),
    [sym_graph] = STATE(99),
    [aux_sym_sexp_comment_repeat1] = STATE(33),
    [aux_sym__skip_token1] = ACTIONS(387),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_POUND_LT_LT] = ACTIONS(301),
    [aux_sym_regex_token1] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_number_token1] = ACTIONS(307),
    [sym_character] = ACTIONS(391),
    [aux_sym_symbol_token1] = ACTIONS(311),
    [sym_keyword] = ACTIONS(391),
    [anon_sym_POUND_AMP] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_POUNDfl] = ACTIONS(321),
    [anon_sym_POUNDfx] = ACTIONS(321),
    [anon_sym_POUNDs] = ACTIONS(323),
    [anon_sym_POUNDhash] = ACTIONS(325),
    [anon_sym_POUNDhasheq] = ACTIONS(325),
    [anon_sym_POUNDhasheqv] = ACTIONS(327),
    [sym_quote] = ACTIONS(391),
    [sym_quasiquote] = ACTIONS(391),
    [sym_syntax] = ACTIONS(391),
    [sym_quasisyntax] = ACTIONS(391),
    [sym_unquote] = ACTIONS(389),
    [sym_unquote_splicing] = ACTIONS(391),
    [sym_unsyntax] = ACTIONS(389),
    [sym_unsyntax_splicing] = ACTIONS(391),
  },
  [38] = {
    [sym__skip] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym_sexp_comment] = STATE(44),
    [sym__datum] = STATE(90),
    [sym_string] = STATE(90),
    [sym_byte_string] = STATE(90),
    [sym_here_string] = STATE(90),
    [sym_regex] = STATE(90),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(90),
    [sym_symbol] = STATE(90),
    [sym_box] = STATE(90),
    [sym_list] = STATE(90),
    [sym_vector] = STATE(90),
    [sym_structure] = STATE(90),
    [sym_hash] = STATE(90),
    [sym_graph] = STATE(90),
    [aux_sym_sexp_comment_repeat1] = STATE(44),
    [aux_sym__skip_token1] = ACTIONS(393),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(397),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(397),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [sym_quote] = ACTIONS(397),
    [sym_quasiquote] = ACTIONS(397),
    [sym_syntax] = ACTIONS(397),
    [sym_quasisyntax] = ACTIONS(397),
    [sym_unquote] = ACTIONS(395),
    [sym_unquote_splicing] = ACTIONS(397),
    [sym_unsyntax] = ACTIONS(395),
    [sym_unsyntax_splicing] = ACTIONS(397),
  },
  [39] = {
    [sym__skip] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_block_comment] = STATE(28),
    [sym_sexp_comment] = STATE(28),
    [sym__datum] = STATE(47),
    [sym_string] = STATE(47),
    [sym_byte_string] = STATE(47),
    [sym_here_string] = STATE(47),
    [sym_regex] = STATE(47),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(47),
    [sym_symbol] = STATE(47),
    [sym_box] = STATE(47),
    [sym_list] = STATE(47),
    [sym_vector] = STATE(47),
    [sym_structure] = STATE(47),
    [sym_hash] = STATE(47),
    [sym_graph] = STATE(47),
    [aux_sym_sexp_comment_repeat1] = STATE(28),
    [aux_sym__skip_token1] = ACTIONS(399),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(403),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(403),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(403),
    [sym_quasiquote] = ACTIONS(403),
    [sym_syntax] = ACTIONS(403),
    [sym_quasisyntax] = ACTIONS(403),
    [sym_unquote] = ACTIONS(401),
    [sym_unquote_splicing] = ACTIONS(403),
    [sym_unsyntax] = ACTIONS(401),
    [sym_unsyntax_splicing] = ACTIONS(403),
  },
  [40] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(51),
    [sym_string] = STATE(51),
    [sym_byte_string] = STATE(51),
    [sym_here_string] = STATE(51),
    [sym_regex] = STATE(51),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(51),
    [sym_symbol] = STATE(51),
    [sym_box] = STATE(51),
    [sym_list] = STATE(51),
    [sym_vector] = STATE(51),
    [sym_structure] = STATE(51),
    [sym_hash] = STATE(51),
    [sym_graph] = STATE(51),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(407),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(407),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(407),
    [sym_quasiquote] = ACTIONS(407),
    [sym_syntax] = ACTIONS(407),
    [sym_quasisyntax] = ACTIONS(407),
    [sym_unquote] = ACTIONS(405),
    [sym_unquote_splicing] = ACTIONS(407),
    [sym_unsyntax] = ACTIONS(405),
    [sym_unsyntax_splicing] = ACTIONS(407),
  },
  [41] = {
    [sym__skip] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_block_comment] = STATE(43),
    [sym_sexp_comment] = STATE(43),
    [sym__datum] = STATE(76),
    [sym_string] = STATE(76),
    [sym_byte_string] = STATE(76),
    [sym_here_string] = STATE(76),
    [sym_regex] = STATE(76),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(76),
    [sym_symbol] = STATE(76),
    [sym_box] = STATE(76),
    [sym_list] = STATE(76),
    [sym_vector] = STATE(76),
    [sym_structure] = STATE(76),
    [sym_hash] = STATE(76),
    [sym_graph] = STATE(76),
    [aux_sym_sexp_comment_repeat1] = STATE(43),
    [aux_sym__skip_token1] = ACTIONS(409),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(411),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(413),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(413),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [sym_quote] = ACTIONS(413),
    [sym_quasiquote] = ACTIONS(413),
    [sym_syntax] = ACTIONS(413),
    [sym_quasisyntax] = ACTIONS(413),
    [sym_unquote] = ACTIONS(411),
    [sym_unquote_splicing] = ACTIONS(413),
    [sym_unsyntax] = ACTIONS(411),
    [sym_unsyntax_splicing] = ACTIONS(413),
  },
  [42] = {
    [sym__skip] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym_sexp_comment] = STATE(34),
    [sym__datum] = STATE(62),
    [sym_string] = STATE(62),
    [sym_byte_string] = STATE(62),
    [sym_here_string] = STATE(62),
    [sym_regex] = STATE(62),
    [sym__real_string] = STATE(70),
    [sym_number] = STATE(62),
    [sym_symbol] = STATE(62),
    [sym_box] = STATE(62),
    [sym_list] = STATE(62),
    [sym_vector] = STATE(62),
    [sym_structure] = STATE(62),
    [sym_hash] = STATE(62),
    [sym_graph] = STATE(62),
    [aux_sym_sexp_comment_repeat1] = STATE(34),
    [aux_sym__skip_token1] = ACTIONS(415),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(417),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_POUND_LT_LT] = ACTIONS(129),
    [aux_sym_regex_token1] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_number_token1] = ACTIONS(135),
    [sym_character] = ACTIONS(419),
    [aux_sym_symbol_token1] = ACTIONS(137),
    [sym_keyword] = ACTIONS(419),
    [anon_sym_POUND_AMP] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_POUNDfl] = ACTIONS(149),
    [anon_sym_POUNDfx] = ACTIONS(149),
    [anon_sym_POUNDs] = ACTIONS(151),
    [anon_sym_POUNDhash] = ACTIONS(153),
    [anon_sym_POUNDhasheq] = ACTIONS(153),
    [anon_sym_POUNDhasheqv] = ACTIONS(155),
    [sym_quote] = ACTIONS(419),
    [sym_quasiquote] = ACTIONS(419),
    [sym_syntax] = ACTIONS(419),
    [sym_quasisyntax] = ACTIONS(419),
    [sym_unquote] = ACTIONS(417),
    [sym_unquote_splicing] = ACTIONS(419),
    [sym_unsyntax] = ACTIONS(417),
    [sym_unsyntax_splicing] = ACTIONS(419),
  },
  [43] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(75),
    [sym_string] = STATE(75),
    [sym_byte_string] = STATE(75),
    [sym_here_string] = STATE(75),
    [sym_regex] = STATE(75),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(75),
    [sym_symbol] = STATE(75),
    [sym_box] = STATE(75),
    [sym_list] = STATE(75),
    [sym_vector] = STATE(75),
    [sym_structure] = STATE(75),
    [sym_hash] = STATE(75),
    [sym_graph] = STATE(75),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(423),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(423),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [sym_quote] = ACTIONS(423),
    [sym_quasiquote] = ACTIONS(423),
    [sym_syntax] = ACTIONS(423),
    [sym_quasisyntax] = ACTIONS(423),
    [sym_unquote] = ACTIONS(421),
    [sym_unquote_splicing] = ACTIONS(423),
    [sym_unsyntax] = ACTIONS(421),
    [sym_unsyntax_splicing] = ACTIONS(423),
  },
  [44] = {
    [sym__skip] = STATE(71),
    [sym_comment] = STATE(71),
    [sym_block_comment] = STATE(71),
    [sym_sexp_comment] = STATE(71),
    [sym__datum] = STATE(77),
    [sym_string] = STATE(77),
    [sym_byte_string] = STATE(77),
    [sym_here_string] = STATE(77),
    [sym_regex] = STATE(77),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(77),
    [sym_symbol] = STATE(77),
    [sym_box] = STATE(77),
    [sym_list] = STATE(77),
    [sym_vector] = STATE(77),
    [sym_structure] = STATE(77),
    [sym_hash] = STATE(77),
    [sym_graph] = STATE(77),
    [aux_sym_sexp_comment_repeat1] = STATE(71),
    [aux_sym__skip_token1] = ACTIONS(295),
    [aux_sym_comment_token1] = ACTIONS(285),
    [anon_sym_POUND_PIPE] = ACTIONS(287),
    [anon_sym_POUND_SEMI] = ACTIONS(289),
    [sym__line_comment] = ACTIONS(285),
    [sym_boolean] = ACTIONS(425),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(427),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(427),
    [anon_sym_POUND_AMP] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_POUNDfl] = ACTIONS(35),
    [anon_sym_POUNDfx] = ACTIONS(35),
    [anon_sym_POUNDs] = ACTIONS(37),
    [anon_sym_POUNDhash] = ACTIONS(39),
    [anon_sym_POUNDhasheq] = ACTIONS(39),
    [anon_sym_POUNDhasheqv] = ACTIONS(41),
    [sym_quote] = ACTIONS(427),
    [sym_quasiquote] = ACTIONS(427),
    [sym_syntax] = ACTIONS(427),
    [sym_quasisyntax] = ACTIONS(427),
    [sym_unquote] = ACTIONS(425),
    [sym_unquote_splicing] = ACTIONS(427),
    [sym_unsyntax] = ACTIONS(425),
    [sym_unsyntax_splicing] = ACTIONS(427),
  },
  [45] = {
    [aux_sym__skip_token1] = ACTIONS(429),
    [sym_dot] = ACTIONS(431),
    [aux_sym_comment_token1] = ACTIONS(429),
    [anon_sym_POUND_PIPE] = ACTIONS(429),
    [anon_sym_POUND_SEMI] = ACTIONS(429),
    [sym__line_comment] = ACTIONS(429),
    [sym_boolean] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(431),
    [anon_sym_POUND_LT_LT] = ACTIONS(429),
    [aux_sym_regex_token1] = ACTIONS(429),
    [anon_sym_DQUOTE] = ACTIONS(429),
    [aux_sym_number_token1] = ACTIONS(431),
    [sym_character] = ACTIONS(429),
    [aux_sym_symbol_token1] = ACTIONS(431),
    [sym_keyword] = ACTIONS(429),
    [anon_sym_POUND_AMP] = ACTIONS(429),
    [anon_sym_LPAREN] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(429),
    [anon_sym_LBRACE] = ACTIONS(429),
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_POUNDfl] = ACTIONS(429),
    [anon_sym_POUNDfx] = ACTIONS(429),
    [anon_sym_POUNDs] = ACTIONS(429),
    [anon_sym_POUNDhash] = ACTIONS(431),
    [anon_sym_POUNDhasheq] = ACTIONS(431),
    [anon_sym_POUNDhasheqv] = ACTIONS(429),
    [sym_quote] = ACTIONS(429),
    [sym_quasiquote] = ACTIONS(429),
    [sym_syntax] = ACTIONS(429),
    [sym_quasisyntax] = ACTIONS(429),
    [sym_unquote] = ACTIONS(431),
    [sym_unquote_splicing] = ACTIONS(429),
    [sym_unsyntax] = ACTIONS(431),
    [sym_unsyntax_splicing] = ACTIONS(429),
    [anon_sym_POUNDreader] = ACTIONS(429),
    [anon_sym_POUNDlang] = ACTIONS(429),
    [anon_sym_POUND_BANG] = ACTIONS(431),
  },
  [46] = {
    [aux_sym__skip_token1] = ACTIONS(433),
    [sym_dot] = ACTIONS(435),
    [aux_sym_comment_token1] = ACTIONS(433),
    [anon_sym_POUND_PIPE] = ACTIONS(433),
    [anon_sym_POUND_SEMI] = ACTIONS(433),
    [sym__line_comment] = ACTIONS(433),
    [sym_boolean] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_POUND_LT_LT] = ACTIONS(433),
    [aux_sym_regex_token1] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [aux_sym_number_token1] = ACTIONS(435),
    [sym_character] = ACTIONS(433),
    [aux_sym_symbol_token1] = ACTIONS(435),
    [sym_keyword] = ACTIONS(433),
    [anon_sym_POUND_AMP] = ACTIONS(433),
    [anon_sym_LPAREN] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(433),
    [anon_sym_LBRACE] = ACTIONS(433),
    [anon_sym_RBRACE] = ACTIONS(433),
    [anon_sym_POUNDfl] = ACTIONS(433),
    [anon_sym_POUNDfx] = ACTIONS(433),
    [anon_sym_POUNDs] = ACTIONS(433),
    [anon_sym_POUNDhash] = ACTIONS(435),
    [anon_sym_POUNDhasheq] = ACTIONS(435),
    [anon_sym_POUNDhasheqv] = ACTIONS(433),
    [sym_quote] = ACTIONS(433),
    [sym_quasiquote] = ACTIONS(433),
    [sym_syntax] = ACTIONS(433),
    [sym_quasisyntax] = ACTIONS(433),
    [sym_unquote] = ACTIONS(435),
    [sym_unquote_splicing] = ACTIONS(433),
    [sym_unsyntax] = ACTIONS(435),
    [sym_unsyntax_splicing] = ACTIONS(433),
    [anon_sym_POUNDreader] = ACTIONS(433),
    [anon_sym_POUNDlang] = ACTIONS(433),
    [anon_sym_POUND_BANG] = ACTIONS(435),
  },
  [47] = {
    [aux_sym__skip_token1] = ACTIONS(437),
    [sym_dot] = ACTIONS(439),
    [aux_sym_comment_token1] = ACTIONS(437),
    [anon_sym_POUND_PIPE] = ACTIONS(437),
    [anon_sym_POUND_SEMI] = ACTIONS(437),
    [sym__line_comment] = ACTIONS(437),
    [sym_boolean] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_POUND_LT_LT] = ACTIONS(437),
    [aux_sym_regex_token1] = ACTIONS(437),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [aux_sym_number_token1] = ACTIONS(439),
    [sym_character] = ACTIONS(437),
    [aux_sym_symbol_token1] = ACTIONS(439),
    [sym_keyword] = ACTIONS(437),
    [anon_sym_POUND_AMP] = ACTIONS(437),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(437),
    [anon_sym_RBRACK] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(437),
    [anon_sym_RBRACE] = ACTIONS(437),
    [anon_sym_POUNDfl] = ACTIONS(437),
    [anon_sym_POUNDfx] = ACTIONS(437),
    [anon_sym_POUNDs] = ACTIONS(437),
    [anon_sym_POUNDhash] = ACTIONS(439),
    [anon_sym_POUNDhasheq] = ACTIONS(439),
    [anon_sym_POUNDhasheqv] = ACTIONS(437),
    [sym_quote] = ACTIONS(437),
    [sym_quasiquote] = ACTIONS(437),
    [sym_syntax] = ACTIONS(437),
    [sym_quasisyntax] = ACTIONS(437),
    [sym_unquote] = ACTIONS(439),
    [sym_unquote_splicing] = ACTIONS(437),
    [sym_unsyntax] = ACTIONS(439),
    [sym_unsyntax_splicing] = ACTIONS(437),
    [anon_sym_POUNDreader] = ACTIONS(437),
    [anon_sym_POUNDlang] = ACTIONS(437),
    [anon_sym_POUND_BANG] = ACTIONS(439),
  },
  [48] = {
    [aux_sym__skip_token1] = ACTIONS(441),
    [sym_dot] = ACTIONS(443),
    [aux_sym_comment_token1] = ACTIONS(441),
    [anon_sym_POUND_PIPE] = ACTIONS(441),
    [anon_sym_POUND_SEMI] = ACTIONS(441),
    [sym__line_comment] = ACTIONS(441),
    [sym_boolean] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(443),
    [anon_sym_POUND_LT_LT] = ACTIONS(441),
    [aux_sym_regex_token1] = ACTIONS(441),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [aux_sym_number_token1] = ACTIONS(443),
    [sym_character] = ACTIONS(441),
    [aux_sym_symbol_token1] = ACTIONS(443),
    [sym_keyword] = ACTIONS(441),
    [anon_sym_POUND_AMP] = ACTIONS(441),
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_RBRACE] = ACTIONS(441),
    [anon_sym_POUNDfl] = ACTIONS(441),
    [anon_sym_POUNDfx] = ACTIONS(441),
    [anon_sym_POUNDs] = ACTIONS(441),
    [anon_sym_POUNDhash] = ACTIONS(443),
    [anon_sym_POUNDhasheq] = ACTIONS(443),
    [anon_sym_POUNDhasheqv] = ACTIONS(441),
    [sym_quote] = ACTIONS(441),
    [sym_quasiquote] = ACTIONS(441),
    [sym_syntax] = ACTIONS(441),
    [sym_quasisyntax] = ACTIONS(441),
    [sym_unquote] = ACTIONS(443),
    [sym_unquote_splicing] = ACTIONS(441),
    [sym_unsyntax] = ACTIONS(443),
    [sym_unsyntax_splicing] = ACTIONS(441),
    [anon_sym_POUNDreader] = ACTIONS(441),
    [anon_sym_POUNDlang] = ACTIONS(441),
    [anon_sym_POUND_BANG] = ACTIONS(443),
  },
  [49] = {
    [aux_sym__skip_token1] = ACTIONS(445),
    [sym_dot] = ACTIONS(447),
    [aux_sym_comment_token1] = ACTIONS(445),
    [anon_sym_POUND_PIPE] = ACTIONS(445),
    [anon_sym_POUND_SEMI] = ACTIONS(445),
    [sym__line_comment] = ACTIONS(445),
    [sym_boolean] = ACTIONS(447),
    [anon_sym_POUND] = ACTIONS(447),
    [anon_sym_POUND_LT_LT] = ACTIONS(445),
    [aux_sym_regex_token1] = ACTIONS(445),
    [anon_sym_DQUOTE] = ACTIONS(445),
    [aux_sym_number_token1] = ACTIONS(447),
    [sym_character] = ACTIONS(445),
    [aux_sym_symbol_token1] = ACTIONS(447),
    [sym_keyword] = ACTIONS(445),
    [anon_sym_POUND_AMP] = ACTIONS(445),
    [anon_sym_LPAREN] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_LBRACE] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_POUNDfl] = ACTIONS(445),
    [anon_sym_POUNDfx] = ACTIONS(445),
    [anon_sym_POUNDs] = ACTIONS(445),
    [anon_sym_POUNDhash] = ACTIONS(447),
    [anon_sym_POUNDhasheq] = ACTIONS(447),
    [anon_sym_POUNDhasheqv] = ACTIONS(445),
    [sym_quote] = ACTIONS(445),
    [sym_quasiquote] = ACTIONS(445),
    [sym_syntax] = ACTIONS(445),
    [sym_quasisyntax] = ACTIONS(445),
    [sym_unquote] = ACTIONS(447),
    [sym_unquote_splicing] = ACTIONS(445),
    [sym_unsyntax] = ACTIONS(447),
    [sym_unsyntax_splicing] = ACTIONS(445),
    [anon_sym_POUNDreader] = ACTIONS(445),
    [anon_sym_POUNDlang] = ACTIONS(445),
    [anon_sym_POUND_BANG] = ACTIONS(447),
  },
  [50] = {
    [aux_sym__skip_token1] = ACTIONS(449),
    [sym_dot] = ACTIONS(451),
    [aux_sym_comment_token1] = ACTIONS(449),
    [anon_sym_POUND_PIPE] = ACTIONS(449),
    [anon_sym_POUND_SEMI] = ACTIONS(449),
    [sym__line_comment] = ACTIONS(449),
    [sym_boolean] = ACTIONS(451),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_POUND_LT_LT] = ACTIONS(449),
    [aux_sym_regex_token1] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(449),
    [aux_sym_number_token1] = ACTIONS(451),
    [sym_character] = ACTIONS(449),
    [aux_sym_symbol_token1] = ACTIONS(451),
    [sym_keyword] = ACTIONS(449),
    [anon_sym_POUND_AMP] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_RBRACK] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_POUNDfl] = ACTIONS(449),
    [anon_sym_POUNDfx] = ACTIONS(449),
    [anon_sym_POUNDs] = ACTIONS(449),
    [anon_sym_POUNDhash] = ACTIONS(451),
    [anon_sym_POUNDhasheq] = ACTIONS(451),
    [anon_sym_POUNDhasheqv] = ACTIONS(449),
    [sym_quote] = ACTIONS(449),
    [sym_quasiquote] = ACTIONS(449),
    [sym_syntax] = ACTIONS(449),
    [sym_quasisyntax] = ACTIONS(449),
    [sym_unquote] = ACTIONS(451),
    [sym_unquote_splicing] = ACTIONS(449),
    [sym_unsyntax] = ACTIONS(451),
    [sym_unsyntax_splicing] = ACTIONS(449),
    [anon_sym_POUNDreader] = ACTIONS(449),
    [anon_sym_POUNDlang] = ACTIONS(449),
    [anon_sym_POUND_BANG] = ACTIONS(451),
  },
  [51] = {
    [aux_sym__skip_token1] = ACTIONS(453),
    [sym_dot] = ACTIONS(455),
    [aux_sym_comment_token1] = ACTIONS(453),
    [anon_sym_POUND_PIPE] = ACTIONS(453),
    [anon_sym_POUND_SEMI] = ACTIONS(453),
    [sym__line_comment] = ACTIONS(453),
    [sym_boolean] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_POUND_LT_LT] = ACTIONS(453),
    [aux_sym_regex_token1] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [aux_sym_number_token1] = ACTIONS(455),
    [sym_character] = ACTIONS(453),
    [aux_sym_symbol_token1] = ACTIONS(455),
    [sym_keyword] = ACTIONS(453),
    [anon_sym_POUND_AMP] = ACTIONS(453),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(453),
    [anon_sym_POUNDfl] = ACTIONS(453),
    [anon_sym_POUNDfx] = ACTIONS(453),
    [anon_sym_POUNDs] = ACTIONS(453),
    [anon_sym_POUNDhash] = ACTIONS(455),
    [anon_sym_POUNDhasheq] = ACTIONS(455),
    [anon_sym_POUNDhasheqv] = ACTIONS(453),
    [sym_quote] = ACTIONS(453),
    [sym_quasiquote] = ACTIONS(453),
    [sym_syntax] = ACTIONS(453),
    [sym_quasisyntax] = ACTIONS(453),
    [sym_unquote] = ACTIONS(455),
    [sym_unquote_splicing] = ACTIONS(453),
    [sym_unsyntax] = ACTIONS(455),
    [sym_unsyntax_splicing] = ACTIONS(453),
    [anon_sym_POUNDreader] = ACTIONS(453),
    [anon_sym_POUNDlang] = ACTIONS(453),
    [anon_sym_POUND_BANG] = ACTIONS(455),
  },
  [52] = {
    [aux_sym__skip_token1] = ACTIONS(457),
    [sym_dot] = ACTIONS(459),
    [aux_sym_comment_token1] = ACTIONS(457),
    [anon_sym_POUND_PIPE] = ACTIONS(457),
    [anon_sym_POUND_SEMI] = ACTIONS(457),
    [sym__line_comment] = ACTIONS(457),
    [sym_boolean] = ACTIONS(459),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_POUND_LT_LT] = ACTIONS(457),
    [aux_sym_regex_token1] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [aux_sym_number_token1] = ACTIONS(459),
    [sym_character] = ACTIONS(457),
    [aux_sym_symbol_token1] = ACTIONS(459),
    [sym_keyword] = ACTIONS(457),
    [anon_sym_POUND_AMP] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(457),
    [anon_sym_RBRACE] = ACTIONS(457),
    [anon_sym_POUNDfl] = ACTIONS(457),
    [anon_sym_POUNDfx] = ACTIONS(457),
    [anon_sym_POUNDs] = ACTIONS(457),
    [anon_sym_POUNDhash] = ACTIONS(459),
    [anon_sym_POUNDhasheq] = ACTIONS(459),
    [anon_sym_POUNDhasheqv] = ACTIONS(457),
    [sym_quote] = ACTIONS(457),
    [sym_quasiquote] = ACTIONS(457),
    [sym_syntax] = ACTIONS(457),
    [sym_quasisyntax] = ACTIONS(457),
    [sym_unquote] = ACTIONS(459),
    [sym_unquote_splicing] = ACTIONS(457),
    [sym_unsyntax] = ACTIONS(459),
    [sym_unsyntax_splicing] = ACTIONS(457),
    [anon_sym_POUNDreader] = ACTIONS(457),
    [anon_sym_POUNDlang] = ACTIONS(457),
    [anon_sym_POUND_BANG] = ACTIONS(459),
  },
  [53] = {
    [aux_sym__skip_token1] = ACTIONS(461),
    [sym_dot] = ACTIONS(463),
    [aux_sym_comment_token1] = ACTIONS(461),
    [anon_sym_POUND_PIPE] = ACTIONS(461),
    [anon_sym_POUND_SEMI] = ACTIONS(461),
    [sym__line_comment] = ACTIONS(461),
    [sym_boolean] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(463),
    [anon_sym_POUND_LT_LT] = ACTIONS(461),
    [aux_sym_regex_token1] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [aux_sym_number_token1] = ACTIONS(463),
    [sym_character] = ACTIONS(461),
    [aux_sym_symbol_token1] = ACTIONS(463),
    [sym_keyword] = ACTIONS(461),
    [anon_sym_POUND_AMP] = ACTIONS(461),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_POUNDfl] = ACTIONS(461),
    [anon_sym_POUNDfx] = ACTIONS(461),
    [anon_sym_POUNDs] = ACTIONS(461),
    [anon_sym_POUNDhash] = ACTIONS(463),
    [anon_sym_POUNDhasheq] = ACTIONS(463),
    [anon_sym_POUNDhasheqv] = ACTIONS(461),
    [sym_quote] = ACTIONS(461),
    [sym_quasiquote] = ACTIONS(461),
    [sym_syntax] = ACTIONS(461),
    [sym_quasisyntax] = ACTIONS(461),
    [sym_unquote] = ACTIONS(463),
    [sym_unquote_splicing] = ACTIONS(461),
    [sym_unsyntax] = ACTIONS(463),
    [sym_unsyntax_splicing] = ACTIONS(461),
    [anon_sym_POUNDreader] = ACTIONS(461),
    [anon_sym_POUNDlang] = ACTIONS(461),
    [anon_sym_POUND_BANG] = ACTIONS(463),
  },
  [54] = {
    [aux_sym__skip_token1] = ACTIONS(465),
    [sym_dot] = ACTIONS(467),
    [aux_sym_comment_token1] = ACTIONS(465),
    [anon_sym_POUND_PIPE] = ACTIONS(465),
    [anon_sym_POUND_SEMI] = ACTIONS(465),
    [sym__line_comment] = ACTIONS(465),
    [sym_boolean] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(467),
    [anon_sym_POUND_LT_LT] = ACTIONS(465),
    [aux_sym_regex_token1] = ACTIONS(465),
    [anon_sym_DQUOTE] = ACTIONS(465),
    [aux_sym_number_token1] = ACTIONS(467),
    [sym_character] = ACTIONS(465),
    [aux_sym_symbol_token1] = ACTIONS(467),
    [sym_keyword] = ACTIONS(465),
    [anon_sym_POUND_AMP] = ACTIONS(465),
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_POUNDfl] = ACTIONS(465),
    [anon_sym_POUNDfx] = ACTIONS(465),
    [anon_sym_POUNDs] = ACTIONS(465),
    [anon_sym_POUNDhash] = ACTIONS(467),
    [anon_sym_POUNDhasheq] = ACTIONS(467),
    [anon_sym_POUNDhasheqv] = ACTIONS(465),
    [sym_quote] = ACTIONS(465),
    [sym_quasiquote] = ACTIONS(465),
    [sym_syntax] = ACTIONS(465),
    [sym_quasisyntax] = ACTIONS(465),
    [sym_unquote] = ACTIONS(467),
    [sym_unquote_splicing] = ACTIONS(465),
    [sym_unsyntax] = ACTIONS(467),
    [sym_unsyntax_splicing] = ACTIONS(465),
    [anon_sym_POUNDreader] = ACTIONS(465),
    [anon_sym_POUNDlang] = ACTIONS(465),
    [anon_sym_POUND_BANG] = ACTIONS(467),
  },
  [55] = {
    [aux_sym__skip_token1] = ACTIONS(469),
    [sym_dot] = ACTIONS(471),
    [aux_sym_comment_token1] = ACTIONS(469),
    [anon_sym_POUND_PIPE] = ACTIONS(469),
    [anon_sym_POUND_SEMI] = ACTIONS(469),
    [sym__line_comment] = ACTIONS(469),
    [sym_boolean] = ACTIONS(471),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_POUND_LT_LT] = ACTIONS(469),
    [aux_sym_regex_token1] = ACTIONS(469),
    [anon_sym_DQUOTE] = ACTIONS(469),
    [aux_sym_number_token1] = ACTIONS(471),
    [sym_character] = ACTIONS(469),
    [aux_sym_symbol_token1] = ACTIONS(471),
    [sym_keyword] = ACTIONS(469),
    [anon_sym_POUND_AMP] = ACTIONS(469),
    [anon_sym_LPAREN] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_RBRACK] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_RBRACE] = ACTIONS(469),
    [anon_sym_POUNDfl] = ACTIONS(469),
    [anon_sym_POUNDfx] = ACTIONS(469),
    [anon_sym_POUNDs] = ACTIONS(469),
    [anon_sym_POUNDhash] = ACTIONS(471),
    [anon_sym_POUNDhasheq] = ACTIONS(471),
    [anon_sym_POUNDhasheqv] = ACTIONS(469),
    [sym_quote] = ACTIONS(469),
    [sym_quasiquote] = ACTIONS(469),
    [sym_syntax] = ACTIONS(469),
    [sym_quasisyntax] = ACTIONS(469),
    [sym_unquote] = ACTIONS(471),
    [sym_unquote_splicing] = ACTIONS(469),
    [sym_unsyntax] = ACTIONS(471),
    [sym_unsyntax_splicing] = ACTIONS(469),
    [anon_sym_POUNDreader] = ACTIONS(469),
    [anon_sym_POUNDlang] = ACTIONS(469),
    [anon_sym_POUND_BANG] = ACTIONS(471),
  },
  [56] = {
    [aux_sym__skip_token1] = ACTIONS(473),
    [sym_dot] = ACTIONS(475),
    [aux_sym_comment_token1] = ACTIONS(473),
    [anon_sym_POUND_PIPE] = ACTIONS(473),
    [anon_sym_POUND_SEMI] = ACTIONS(473),
    [sym__line_comment] = ACTIONS(473),
    [sym_boolean] = ACTIONS(475),
    [anon_sym_POUND] = ACTIONS(475),
    [anon_sym_POUND_LT_LT] = ACTIONS(473),
    [aux_sym_regex_token1] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [aux_sym_number_token1] = ACTIONS(475),
    [sym_character] = ACTIONS(473),
    [aux_sym_symbol_token1] = ACTIONS(475),
    [sym_keyword] = ACTIONS(473),
    [anon_sym_POUND_AMP] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_RBRACE] = ACTIONS(473),
    [anon_sym_POUNDfl] = ACTIONS(473),
    [anon_sym_POUNDfx] = ACTIONS(473),
    [anon_sym_POUNDs] = ACTIONS(473),
    [anon_sym_POUNDhash] = ACTIONS(475),
    [anon_sym_POUNDhasheq] = ACTIONS(475),
    [anon_sym_POUNDhasheqv] = ACTIONS(473),
    [sym_quote] = ACTIONS(473),
    [sym_quasiquote] = ACTIONS(473),
    [sym_syntax] = ACTIONS(473),
    [sym_quasisyntax] = ACTIONS(473),
    [sym_unquote] = ACTIONS(475),
    [sym_unquote_splicing] = ACTIONS(473),
    [sym_unsyntax] = ACTIONS(475),
    [sym_unsyntax_splicing] = ACTIONS(473),
    [anon_sym_POUNDreader] = ACTIONS(473),
    [anon_sym_POUNDlang] = ACTIONS(473),
    [anon_sym_POUND_BANG] = ACTIONS(475),
  },
  [57] = {
    [aux_sym__skip_token1] = ACTIONS(477),
    [sym_dot] = ACTIONS(479),
    [aux_sym_comment_token1] = ACTIONS(477),
    [anon_sym_POUND_PIPE] = ACTIONS(477),
    [anon_sym_POUND_SEMI] = ACTIONS(477),
    [sym__line_comment] = ACTIONS(477),
    [sym_boolean] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(479),
    [anon_sym_POUND_LT_LT] = ACTIONS(477),
    [aux_sym_regex_token1] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(477),
    [aux_sym_number_token1] = ACTIONS(479),
    [sym_character] = ACTIONS(477),
    [aux_sym_symbol_token1] = ACTIONS(479),
    [sym_keyword] = ACTIONS(477),
    [anon_sym_POUND_AMP] = ACTIONS(477),
    [anon_sym_LPAREN] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(477),
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_RBRACE] = ACTIONS(477),
    [anon_sym_POUNDfl] = ACTIONS(477),
    [anon_sym_POUNDfx] = ACTIONS(477),
    [anon_sym_POUNDs] = ACTIONS(477),
    [anon_sym_POUNDhash] = ACTIONS(479),
    [anon_sym_POUNDhasheq] = ACTIONS(479),
    [anon_sym_POUNDhasheqv] = ACTIONS(477),
    [sym_quote] = ACTIONS(477),
    [sym_quasiquote] = ACTIONS(477),
    [sym_syntax] = ACTIONS(477),
    [sym_quasisyntax] = ACTIONS(477),
    [sym_unquote] = ACTIONS(479),
    [sym_unquote_splicing] = ACTIONS(477),
    [sym_unsyntax] = ACTIONS(479),
    [sym_unsyntax_splicing] = ACTIONS(477),
    [anon_sym_POUNDreader] = ACTIONS(477),
    [anon_sym_POUNDlang] = ACTIONS(477),
    [anon_sym_POUND_BANG] = ACTIONS(479),
  },
  [58] = {
    [aux_sym__skip_token1] = ACTIONS(481),
    [sym_dot] = ACTIONS(483),
    [aux_sym_comment_token1] = ACTIONS(481),
    [anon_sym_POUND_PIPE] = ACTIONS(481),
    [anon_sym_POUND_SEMI] = ACTIONS(481),
    [sym__line_comment] = ACTIONS(481),
    [sym_boolean] = ACTIONS(483),
    [anon_sym_POUND] = ACTIONS(483),
    [anon_sym_POUND_LT_LT] = ACTIONS(481),
    [aux_sym_regex_token1] = ACTIONS(481),
    [anon_sym_DQUOTE] = ACTIONS(481),
    [aux_sym_number_token1] = ACTIONS(483),
    [sym_character] = ACTIONS(481),
    [aux_sym_symbol_token1] = ACTIONS(483),
    [sym_keyword] = ACTIONS(481),
    [anon_sym_POUND_AMP] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_LBRACK] = ACTIONS(481),
    [anon_sym_RBRACK] = ACTIONS(481),
    [anon_sym_LBRACE] = ACTIONS(481),
    [anon_sym_RBRACE] = ACTIONS(481),
    [anon_sym_POUNDfl] = ACTIONS(481),
    [anon_sym_POUNDfx] = ACTIONS(481),
    [anon_sym_POUNDs] = ACTIONS(481),
    [anon_sym_POUNDhash] = ACTIONS(483),
    [anon_sym_POUNDhasheq] = ACTIONS(483),
    [anon_sym_POUNDhasheqv] = ACTIONS(481),
    [sym_quote] = ACTIONS(481),
    [sym_quasiquote] = ACTIONS(481),
    [sym_syntax] = ACTIONS(481),
    [sym_quasisyntax] = ACTIONS(481),
    [sym_unquote] = ACTIONS(483),
    [sym_unquote_splicing] = ACTIONS(481),
    [sym_unsyntax] = ACTIONS(483),
    [sym_unsyntax_splicing] = ACTIONS(481),
    [anon_sym_POUNDreader] = ACTIONS(481),
    [anon_sym_POUNDlang] = ACTIONS(481),
    [anon_sym_POUND_BANG] = ACTIONS(483),
  },
  [59] = {
    [aux_sym__skip_token1] = ACTIONS(485),
    [sym_dot] = ACTIONS(487),
    [aux_sym_comment_token1] = ACTIONS(485),
    [anon_sym_POUND_PIPE] = ACTIONS(485),
    [anon_sym_POUND_SEMI] = ACTIONS(485),
    [sym__line_comment] = ACTIONS(485),
    [sym_boolean] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(487),
    [anon_sym_POUND_LT_LT] = ACTIONS(485),
    [aux_sym_regex_token1] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
    [aux_sym_number_token1] = ACTIONS(487),
    [sym_character] = ACTIONS(485),
    [aux_sym_symbol_token1] = ACTIONS(487),
    [sym_keyword] = ACTIONS(485),
    [anon_sym_POUND_AMP] = ACTIONS(485),
    [anon_sym_LPAREN] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(485),
    [anon_sym_POUNDfl] = ACTIONS(485),
    [anon_sym_POUNDfx] = ACTIONS(485),
    [anon_sym_POUNDs] = ACTIONS(485),
    [anon_sym_POUNDhash] = ACTIONS(487),
    [anon_sym_POUNDhasheq] = ACTIONS(487),
    [anon_sym_POUNDhasheqv] = ACTIONS(485),
    [sym_quote] = ACTIONS(485),
    [sym_quasiquote] = ACTIONS(485),
    [sym_syntax] = ACTIONS(485),
    [sym_quasisyntax] = ACTIONS(485),
    [sym_unquote] = ACTIONS(487),
    [sym_unquote_splicing] = ACTIONS(485),
    [sym_unsyntax] = ACTIONS(487),
    [sym_unsyntax_splicing] = ACTIONS(485),
    [anon_sym_POUNDreader] = ACTIONS(485),
    [anon_sym_POUNDlang] = ACTIONS(485),
    [anon_sym_POUND_BANG] = ACTIONS(487),
  },
  [60] = {
    [aux_sym__skip_token1] = ACTIONS(489),
    [sym_dot] = ACTIONS(491),
    [aux_sym_comment_token1] = ACTIONS(489),
    [anon_sym_POUND_PIPE] = ACTIONS(489),
    [anon_sym_POUND_SEMI] = ACTIONS(489),
    [sym__line_comment] = ACTIONS(489),
    [sym_boolean] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(491),
    [anon_sym_POUND_LT_LT] = ACTIONS(489),
    [aux_sym_regex_token1] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [aux_sym_number_token1] = ACTIONS(491),
    [sym_character] = ACTIONS(489),
    [aux_sym_symbol_token1] = ACTIONS(491),
    [sym_keyword] = ACTIONS(489),
    [anon_sym_POUND_AMP] = ACTIONS(489),
    [anon_sym_LPAREN] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_RBRACK] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_POUNDfl] = ACTIONS(489),
    [anon_sym_POUNDfx] = ACTIONS(489),
    [anon_sym_POUNDs] = ACTIONS(489),
    [anon_sym_POUNDhash] = ACTIONS(491),
    [anon_sym_POUNDhasheq] = ACTIONS(491),
    [anon_sym_POUNDhasheqv] = ACTIONS(489),
    [sym_quote] = ACTIONS(489),
    [sym_quasiquote] = ACTIONS(489),
    [sym_syntax] = ACTIONS(489),
    [sym_quasisyntax] = ACTIONS(489),
    [sym_unquote] = ACTIONS(491),
    [sym_unquote_splicing] = ACTIONS(489),
    [sym_unsyntax] = ACTIONS(491),
    [sym_unsyntax_splicing] = ACTIONS(489),
    [anon_sym_POUNDreader] = ACTIONS(489),
    [anon_sym_POUNDlang] = ACTIONS(489),
    [anon_sym_POUND_BANG] = ACTIONS(491),
  },
  [61] = {
    [aux_sym__skip_token1] = ACTIONS(493),
    [sym_dot] = ACTIONS(495),
    [aux_sym_comment_token1] = ACTIONS(493),
    [anon_sym_POUND_PIPE] = ACTIONS(493),
    [anon_sym_POUND_SEMI] = ACTIONS(493),
    [sym__line_comment] = ACTIONS(493),
    [sym_boolean] = ACTIONS(495),
    [anon_sym_POUND] = ACTIONS(495),
    [anon_sym_POUND_LT_LT] = ACTIONS(493),
    [aux_sym_regex_token1] = ACTIONS(493),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [aux_sym_number_token1] = ACTIONS(495),
    [sym_character] = ACTIONS(493),
    [aux_sym_symbol_token1] = ACTIONS(495),
    [sym_keyword] = ACTIONS(493),
    [anon_sym_POUND_AMP] = ACTIONS(493),
    [anon_sym_LPAREN] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_POUNDfl] = ACTIONS(493),
    [anon_sym_POUNDfx] = ACTIONS(493),
    [anon_sym_POUNDs] = ACTIONS(493),
    [anon_sym_POUNDhash] = ACTIONS(495),
    [anon_sym_POUNDhasheq] = ACTIONS(495),
    [anon_sym_POUNDhasheqv] = ACTIONS(493),
    [sym_quote] = ACTIONS(493),
    [sym_quasiquote] = ACTIONS(493),
    [sym_syntax] = ACTIONS(493),
    [sym_quasisyntax] = ACTIONS(493),
    [sym_unquote] = ACTIONS(495),
    [sym_unquote_splicing] = ACTIONS(493),
    [sym_unsyntax] = ACTIONS(495),
    [sym_unsyntax_splicing] = ACTIONS(493),
    [anon_sym_POUNDreader] = ACTIONS(493),
    [anon_sym_POUNDlang] = ACTIONS(493),
    [anon_sym_POUND_BANG] = ACTIONS(495),
  },
  [62] = {
    [aux_sym__skip_token1] = ACTIONS(497),
    [sym_dot] = ACTIONS(499),
    [aux_sym_comment_token1] = ACTIONS(497),
    [anon_sym_POUND_PIPE] = ACTIONS(497),
    [anon_sym_POUND_SEMI] = ACTIONS(497),
    [sym__line_comment] = ACTIONS(497),
    [sym_boolean] = ACTIONS(499),
    [anon_sym_POUND] = ACTIONS(499),
    [anon_sym_POUND_LT_LT] = ACTIONS(497),
    [aux_sym_regex_token1] = ACTIONS(497),
    [anon_sym_DQUOTE] = ACTIONS(497),
    [aux_sym_number_token1] = ACTIONS(499),
    [sym_character] = ACTIONS(497),
    [aux_sym_symbol_token1] = ACTIONS(499),
    [sym_keyword] = ACTIONS(497),
    [anon_sym_POUND_AMP] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_POUNDfl] = ACTIONS(497),
    [anon_sym_POUNDfx] = ACTIONS(497),
    [anon_sym_POUNDs] = ACTIONS(497),
    [anon_sym_POUNDhash] = ACTIONS(499),
    [anon_sym_POUNDhasheq] = ACTIONS(499),
    [anon_sym_POUNDhasheqv] = ACTIONS(497),
    [sym_quote] = ACTIONS(497),
    [sym_quasiquote] = ACTIONS(497),
    [sym_syntax] = ACTIONS(497),
    [sym_quasisyntax] = ACTIONS(497),
    [sym_unquote] = ACTIONS(499),
    [sym_unquote_splicing] = ACTIONS(497),
    [sym_unsyntax] = ACTIONS(499),
    [sym_unsyntax_splicing] = ACTIONS(497),
    [anon_sym_POUNDreader] = ACTIONS(497),
    [anon_sym_POUNDlang] = ACTIONS(497),
    [anon_sym_POUND_BANG] = ACTIONS(499),
  },
  [63] = {
    [aux_sym__skip_token1] = ACTIONS(501),
    [sym_dot] = ACTIONS(503),
    [aux_sym_comment_token1] = ACTIONS(501),
    [anon_sym_POUND_PIPE] = ACTIONS(501),
    [anon_sym_POUND_SEMI] = ACTIONS(501),
    [sym__line_comment] = ACTIONS(501),
    [sym_boolean] = ACTIONS(503),
    [anon_sym_POUND] = ACTIONS(503),
    [anon_sym_POUND_LT_LT] = ACTIONS(501),
    [aux_sym_regex_token1] = ACTIONS(501),
    [anon_sym_DQUOTE] = ACTIONS(501),
    [aux_sym_number_token1] = ACTIONS(503),
    [sym_character] = ACTIONS(501),
    [aux_sym_symbol_token1] = ACTIONS(503),
    [sym_keyword] = ACTIONS(501),
    [anon_sym_POUND_AMP] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_POUNDfl] = ACTIONS(501),
    [anon_sym_POUNDfx] = ACTIONS(501),
    [anon_sym_POUNDs] = ACTIONS(501),
    [anon_sym_POUNDhash] = ACTIONS(503),
    [anon_sym_POUNDhasheq] = ACTIONS(503),
    [anon_sym_POUNDhasheqv] = ACTIONS(501),
    [sym_quote] = ACTIONS(501),
    [sym_quasiquote] = ACTIONS(501),
    [sym_syntax] = ACTIONS(501),
    [sym_quasisyntax] = ACTIONS(501),
    [sym_unquote] = ACTIONS(503),
    [sym_unquote_splicing] = ACTIONS(501),
    [sym_unsyntax] = ACTIONS(503),
    [sym_unsyntax_splicing] = ACTIONS(501),
    [anon_sym_POUNDreader] = ACTIONS(501),
    [anon_sym_POUNDlang] = ACTIONS(501),
    [anon_sym_POUND_BANG] = ACTIONS(503),
  },
  [64] = {
    [aux_sym__skip_token1] = ACTIONS(505),
    [sym_dot] = ACTIONS(507),
    [aux_sym_comment_token1] = ACTIONS(505),
    [anon_sym_POUND_PIPE] = ACTIONS(505),
    [anon_sym_POUND_SEMI] = ACTIONS(505),
    [sym__line_comment] = ACTIONS(505),
    [sym_boolean] = ACTIONS(507),
    [anon_sym_POUND] = ACTIONS(507),
    [anon_sym_POUND_LT_LT] = ACTIONS(505),
    [aux_sym_regex_token1] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [aux_sym_number_token1] = ACTIONS(507),
    [sym_character] = ACTIONS(505),
    [aux_sym_symbol_token1] = ACTIONS(507),
    [sym_keyword] = ACTIONS(505),
    [anon_sym_POUND_AMP] = ACTIONS(505),
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_RBRACK] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_RBRACE] = ACTIONS(505),
    [anon_sym_POUNDfl] = ACTIONS(505),
    [anon_sym_POUNDfx] = ACTIONS(505),
    [anon_sym_POUNDs] = ACTIONS(505),
    [anon_sym_POUNDhash] = ACTIONS(507),
    [anon_sym_POUNDhasheq] = ACTIONS(507),
    [anon_sym_POUNDhasheqv] = ACTIONS(505),
    [sym_quote] = ACTIONS(505),
    [sym_quasiquote] = ACTIONS(505),
    [sym_syntax] = ACTIONS(505),
    [sym_quasisyntax] = ACTIONS(505),
    [sym_unquote] = ACTIONS(507),
    [sym_unquote_splicing] = ACTIONS(505),
    [sym_unsyntax] = ACTIONS(507),
    [sym_unsyntax_splicing] = ACTIONS(505),
    [anon_sym_POUNDreader] = ACTIONS(505),
    [anon_sym_POUNDlang] = ACTIONS(505),
    [anon_sym_POUND_BANG] = ACTIONS(507),
  },
  [65] = {
    [aux_sym__skip_token1] = ACTIONS(509),
    [sym_dot] = ACTIONS(511),
    [aux_sym_comment_token1] = ACTIONS(509),
    [anon_sym_POUND_PIPE] = ACTIONS(509),
    [anon_sym_POUND_SEMI] = ACTIONS(509),
    [sym__line_comment] = ACTIONS(509),
    [sym_boolean] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(511),
    [anon_sym_POUND_LT_LT] = ACTIONS(509),
    [aux_sym_regex_token1] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [aux_sym_number_token1] = ACTIONS(511),
    [sym_character] = ACTIONS(509),
    [aux_sym_symbol_token1] = ACTIONS(511),
    [sym_keyword] = ACTIONS(509),
    [anon_sym_POUND_AMP] = ACTIONS(509),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_RBRACK] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_POUNDfl] = ACTIONS(509),
    [anon_sym_POUNDfx] = ACTIONS(509),
    [anon_sym_POUNDs] = ACTIONS(509),
    [anon_sym_POUNDhash] = ACTIONS(511),
    [anon_sym_POUNDhasheq] = ACTIONS(511),
    [anon_sym_POUNDhasheqv] = ACTIONS(509),
    [sym_quote] = ACTIONS(509),
    [sym_quasiquote] = ACTIONS(509),
    [sym_syntax] = ACTIONS(509),
    [sym_quasisyntax] = ACTIONS(509),
    [sym_unquote] = ACTIONS(511),
    [sym_unquote_splicing] = ACTIONS(509),
    [sym_unsyntax] = ACTIONS(511),
    [sym_unsyntax_splicing] = ACTIONS(509),
    [anon_sym_POUNDreader] = ACTIONS(509),
    [anon_sym_POUNDlang] = ACTIONS(509),
    [anon_sym_POUND_BANG] = ACTIONS(511),
  },
  [66] = {
    [aux_sym__skip_token1] = ACTIONS(513),
    [sym_dot] = ACTIONS(515),
    [aux_sym_comment_token1] = ACTIONS(513),
    [anon_sym_POUND_PIPE] = ACTIONS(513),
    [anon_sym_POUND_SEMI] = ACTIONS(513),
    [sym__line_comment] = ACTIONS(513),
    [sym_boolean] = ACTIONS(515),
    [anon_sym_POUND] = ACTIONS(515),
    [anon_sym_POUND_LT_LT] = ACTIONS(513),
    [aux_sym_regex_token1] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [aux_sym_number_token1] = ACTIONS(515),
    [sym_character] = ACTIONS(513),
    [aux_sym_symbol_token1] = ACTIONS(515),
    [sym_keyword] = ACTIONS(513),
    [anon_sym_POUND_AMP] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_RBRACE] = ACTIONS(513),
    [anon_sym_POUNDfl] = ACTIONS(513),
    [anon_sym_POUNDfx] = ACTIONS(513),
    [anon_sym_POUNDs] = ACTIONS(513),
    [anon_sym_POUNDhash] = ACTIONS(515),
    [anon_sym_POUNDhasheq] = ACTIONS(515),
    [anon_sym_POUNDhasheqv] = ACTIONS(513),
    [sym_quote] = ACTIONS(513),
    [sym_quasiquote] = ACTIONS(513),
    [sym_syntax] = ACTIONS(513),
    [sym_quasisyntax] = ACTIONS(513),
    [sym_unquote] = ACTIONS(515),
    [sym_unquote_splicing] = ACTIONS(513),
    [sym_unsyntax] = ACTIONS(515),
    [sym_unsyntax_splicing] = ACTIONS(513),
    [anon_sym_POUNDreader] = ACTIONS(513),
    [anon_sym_POUNDlang] = ACTIONS(513),
    [anon_sym_POUND_BANG] = ACTIONS(515),
  },
  [67] = {
    [aux_sym__skip_token1] = ACTIONS(517),
    [sym_dot] = ACTIONS(519),
    [aux_sym_comment_token1] = ACTIONS(517),
    [anon_sym_POUND_PIPE] = ACTIONS(517),
    [anon_sym_POUND_SEMI] = ACTIONS(517),
    [sym__line_comment] = ACTIONS(517),
    [sym_boolean] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(519),
    [anon_sym_POUND_LT_LT] = ACTIONS(517),
    [aux_sym_regex_token1] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [aux_sym_number_token1] = ACTIONS(519),
    [sym_character] = ACTIONS(517),
    [aux_sym_symbol_token1] = ACTIONS(519),
    [sym_keyword] = ACTIONS(517),
    [anon_sym_POUND_AMP] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_POUNDfl] = ACTIONS(517),
    [anon_sym_POUNDfx] = ACTIONS(517),
    [anon_sym_POUNDs] = ACTIONS(517),
    [anon_sym_POUNDhash] = ACTIONS(519),
    [anon_sym_POUNDhasheq] = ACTIONS(519),
    [anon_sym_POUNDhasheqv] = ACTIONS(517),
    [sym_quote] = ACTIONS(517),
    [sym_quasiquote] = ACTIONS(517),
    [sym_syntax] = ACTIONS(517),
    [sym_quasisyntax] = ACTIONS(517),
    [sym_unquote] = ACTIONS(519),
    [sym_unquote_splicing] = ACTIONS(517),
    [sym_unsyntax] = ACTIONS(519),
    [sym_unsyntax_splicing] = ACTIONS(517),
    [anon_sym_POUNDreader] = ACTIONS(517),
    [anon_sym_POUNDlang] = ACTIONS(517),
    [anon_sym_POUND_BANG] = ACTIONS(519),
  },
  [68] = {
    [aux_sym__skip_token1] = ACTIONS(521),
    [sym_dot] = ACTIONS(523),
    [aux_sym_comment_token1] = ACTIONS(521),
    [anon_sym_POUND_PIPE] = ACTIONS(521),
    [anon_sym_POUND_SEMI] = ACTIONS(521),
    [sym__line_comment] = ACTIONS(521),
    [sym_boolean] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(523),
    [anon_sym_POUND_LT_LT] = ACTIONS(521),
    [aux_sym_regex_token1] = ACTIONS(521),
    [anon_sym_DQUOTE] = ACTIONS(521),
    [aux_sym_number_token1] = ACTIONS(523),
    [sym_character] = ACTIONS(521),
    [aux_sym_symbol_token1] = ACTIONS(523),
    [sym_keyword] = ACTIONS(521),
    [anon_sym_POUND_AMP] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(521),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(521),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(521),
    [anon_sym_POUNDfl] = ACTIONS(521),
    [anon_sym_POUNDfx] = ACTIONS(521),
    [anon_sym_POUNDs] = ACTIONS(521),
    [anon_sym_POUNDhash] = ACTIONS(523),
    [anon_sym_POUNDhasheq] = ACTIONS(523),
    [anon_sym_POUNDhasheqv] = ACTIONS(521),
    [sym_quote] = ACTIONS(521),
    [sym_quasiquote] = ACTIONS(521),
    [sym_syntax] = ACTIONS(521),
    [sym_quasisyntax] = ACTIONS(521),
    [sym_unquote] = ACTIONS(523),
    [sym_unquote_splicing] = ACTIONS(521),
    [sym_unsyntax] = ACTIONS(523),
    [sym_unsyntax_splicing] = ACTIONS(521),
    [anon_sym_POUNDreader] = ACTIONS(521),
    [anon_sym_POUNDlang] = ACTIONS(521),
    [anon_sym_POUND_BANG] = ACTIONS(523),
  },
  [69] = {
    [aux_sym__skip_token1] = ACTIONS(525),
    [sym_dot] = ACTIONS(527),
    [aux_sym_comment_token1] = ACTIONS(525),
    [anon_sym_POUND_PIPE] = ACTIONS(525),
    [anon_sym_POUND_SEMI] = ACTIONS(525),
    [sym__line_comment] = ACTIONS(525),
    [sym_boolean] = ACTIONS(527),
    [anon_sym_POUND] = ACTIONS(527),
    [anon_sym_POUND_LT_LT] = ACTIONS(525),
    [aux_sym_regex_token1] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(525),
    [aux_sym_number_token1] = ACTIONS(527),
    [sym_character] = ACTIONS(525),
    [aux_sym_symbol_token1] = ACTIONS(527),
    [sym_keyword] = ACTIONS(525),
    [anon_sym_POUND_AMP] = ACTIONS(525),
    [anon_sym_LPAREN] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(525),
    [anon_sym_RBRACK] = ACTIONS(525),
    [anon_sym_LBRACE] = ACTIONS(525),
    [anon_sym_RBRACE] = ACTIONS(525),
    [anon_sym_POUNDfl] = ACTIONS(525),
    [anon_sym_POUNDfx] = ACTIONS(525),
    [anon_sym_POUNDs] = ACTIONS(525),
    [anon_sym_POUNDhash] = ACTIONS(527),
    [anon_sym_POUNDhasheq] = ACTIONS(527),
    [anon_sym_POUNDhasheqv] = ACTIONS(525),
    [sym_quote] = ACTIONS(525),
    [sym_quasiquote] = ACTIONS(525),
    [sym_syntax] = ACTIONS(525),
    [sym_quasisyntax] = ACTIONS(525),
    [sym_unquote] = ACTIONS(527),
    [sym_unquote_splicing] = ACTIONS(525),
    [sym_unsyntax] = ACTIONS(527),
    [sym_unsyntax_splicing] = ACTIONS(525),
    [anon_sym_POUNDreader] = ACTIONS(525),
    [anon_sym_POUNDlang] = ACTIONS(525),
    [anon_sym_POUND_BANG] = ACTIONS(527),
  },
  [70] = {
    [aux_sym__skip_token1] = ACTIONS(529),
    [sym_dot] = ACTIONS(531),
    [aux_sym_comment_token1] = ACTIONS(529),
    [anon_sym_POUND_PIPE] = ACTIONS(529),
    [anon_sym_POUND_SEMI] = ACTIONS(529),
    [sym__line_comment] = ACTIONS(529),
    [sym_boolean] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(531),
    [anon_sym_POUND_LT_LT] = ACTIONS(529),
    [aux_sym_regex_token1] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(529),
    [aux_sym_number_token1] = ACTIONS(531),
    [sym_character] = ACTIONS(529),
    [aux_sym_symbol_token1] = ACTIONS(531),
    [sym_keyword] = ACTIONS(529),
    [anon_sym_POUND_AMP] = ACTIONS(529),
    [anon_sym_LPAREN] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [anon_sym_LBRACE] = ACTIONS(529),
    [anon_sym_RBRACE] = ACTIONS(529),
    [anon_sym_POUNDfl] = ACTIONS(529),
    [anon_sym_POUNDfx] = ACTIONS(529),
    [anon_sym_POUNDs] = ACTIONS(529),
    [anon_sym_POUNDhash] = ACTIONS(531),
    [anon_sym_POUNDhasheq] = ACTIONS(531),
    [anon_sym_POUNDhasheqv] = ACTIONS(529),
    [sym_quote] = ACTIONS(529),
    [sym_quasiquote] = ACTIONS(529),
    [sym_syntax] = ACTIONS(529),
    [sym_quasisyntax] = ACTIONS(529),
    [sym_unquote] = ACTIONS(531),
    [sym_unquote_splicing] = ACTIONS(529),
    [sym_unsyntax] = ACTIONS(531),
    [sym_unsyntax_splicing] = ACTIONS(529),
    [anon_sym_POUNDreader] = ACTIONS(529),
    [anon_sym_POUNDlang] = ACTIONS(529),
    [anon_sym_POUND_BANG] = ACTIONS(531),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(533), 1,
      aux_sym__skip_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(542), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(536), 2,
      aux_sym_comment_token1,
      sym__line_comment,
    STATE(71), 5,
      sym__skip,
      sym_comment,
      sym_block_comment,
      sym_sexp_comment,
      aux_sym_sexp_comment_repeat1,
    ACTIONS(545), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(547), 19,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [52] = 2,
    ACTIONS(471), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(469), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [93] = 2,
    ACTIONS(523), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(521), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [134] = 2,
    ACTIONS(439), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(437), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [175] = 2,
    ACTIONS(447), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(445), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [216] = 2,
    ACTIONS(451), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(449), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [257] = 2,
    ACTIONS(455), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(453), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [298] = 2,
    ACTIONS(459), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(457), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [339] = 2,
    ACTIONS(463), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(461), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [380] = 2,
    ACTIONS(431), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(429), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [421] = 2,
    ACTIONS(467), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(465), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [462] = 2,
    ACTIONS(511), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(509), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [503] = 2,
    ACTIONS(479), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(477), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [544] = 2,
    ACTIONS(503), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(501), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [585] = 2,
    ACTIONS(475), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(473), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [626] = 2,
    ACTIONS(443), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(441), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [667] = 2,
    ACTIONS(483), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(481), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [708] = 2,
    ACTIONS(531), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(529), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [749] = 2,
    ACTIONS(519), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(517), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [790] = 2,
    ACTIONS(435), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(433), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [831] = 2,
    ACTIONS(487), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(485), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [872] = 2,
    ACTIONS(491), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(489), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [913] = 2,
    ACTIONS(507), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(505), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [954] = 2,
    ACTIONS(527), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(525), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [995] = 2,
    ACTIONS(495), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(493), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1036] = 2,
    ACTIONS(515), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(513), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1077] = 2,
    ACTIONS(499), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(497), 27,
      ts_builtin_sym_end,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
      anon_sym_POUNDreader,
      anon_sym_POUNDlang,
  [1118] = 2,
    ACTIONS(507), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(505), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1155] = 2,
    ACTIONS(439), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(437), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1192] = 2,
    ACTIONS(431), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(429), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1229] = 2,
    ACTIONS(531), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(529), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1266] = 2,
    ACTIONS(527), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(525), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1303] = 2,
    ACTIONS(479), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(477), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1340] = 2,
    ACTIONS(515), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(513), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1377] = 2,
    ACTIONS(511), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(509), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1414] = 2,
    ACTIONS(523), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(521), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1451] = 2,
    ACTIONS(503), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(501), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1488] = 2,
    ACTIONS(499), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(497), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1525] = 2,
    ACTIONS(483), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(481), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1562] = 2,
    ACTIONS(495), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(493), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1599] = 2,
    ACTIONS(491), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(489), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1636] = 2,
    ACTIONS(487), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(485), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1673] = 2,
    ACTIONS(519), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(517), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1710] = 2,
    ACTIONS(443), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(441), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1747] = 2,
    ACTIONS(475), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(473), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1784] = 2,
    ACTIONS(447), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(445), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1821] = 2,
    ACTIONS(471), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(469), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1858] = 2,
    ACTIONS(467), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(465), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1895] = 2,
    ACTIONS(463), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(461), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1932] = 2,
    ACTIONS(459), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(457), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [1969] = 2,
    ACTIONS(451), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(449), 24,
      aux_sym__skip_token1,
      aux_sym_comment_token1,
      anon_sym_POUND_PIPE,
      anon_sym_POUND_SEMI,
      sym__line_comment,
      anon_sym_POUND_LT_LT,
      aux_sym_regex_token1,
      anon_sym_DQUOTE,
      sym_character,
      sym_keyword,
      anon_sym_POUND_AMP,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_POUNDfl,
      anon_sym_POUNDfx,
      anon_sym_POUNDs,
      anon_sym_POUNDhasheqv,
      sym_quote,
      sym_quasiquote,
      sym_syntax,
      sym_quasisyntax,
      sym_unquote_splicing,
      sym_unsyntax_splicing,
  [2006] = 7,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 1,
      sym_decimal,
    STATE(57), 1,
      sym__real_string,
    STATE(66), 1,
      sym_list,
  [2028] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(551), 1,
      sym_decimal,
    STATE(83), 1,
      sym__real_string,
    STATE(96), 1,
      sym_list,
  [2050] = 7,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      sym_decimal,
    STATE(103), 1,
      sym__real_string,
    STATE(104), 1,
      sym_list,
  [2072] = 6,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(555), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      anon_sym_EQ,
    STATE(117), 1,
      sym_list,
  [2091] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(559), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      anon_sym_EQ,
    STATE(72), 1,
      sym_list,
  [2110] = 6,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(563), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      anon_sym_EQ,
    STATE(55), 1,
      sym_list,
  [2129] = 4,
    ACTIONS(567), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(570), 1,
      aux_sym_block_comment_token1,
    ACTIONS(573), 1,
      anon_sym_PIPE_POUND,
    STATE(128), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2143] = 4,
    ACTIONS(575), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(577), 1,
      aux_sym_block_comment_token1,
    ACTIONS(579), 1,
      anon_sym_PIPE_POUND,
    STATE(128), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2157] = 4,
    ACTIONS(575), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(577), 1,
      aux_sym_block_comment_token1,
    ACTIONS(581), 1,
      anon_sym_PIPE_POUND,
    STATE(128), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2171] = 4,
    ACTIONS(575), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(577), 1,
      aux_sym_block_comment_token1,
    ACTIONS(583), 1,
      anon_sym_PIPE_POUND,
    STATE(128), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2185] = 4,
    ACTIONS(575), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(585), 1,
      aux_sym_block_comment_token1,
    ACTIONS(587), 1,
      anon_sym_PIPE_POUND,
    STATE(131), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2199] = 5,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      sym_decimal,
    STATE(104), 1,
      sym_list,
  [2215] = 4,
    ACTIONS(575), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(591), 1,
      aux_sym_block_comment_token1,
    ACTIONS(593), 1,
      anon_sym_PIPE_POUND,
    STATE(129), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2229] = 4,
    ACTIONS(575), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(577), 1,
      aux_sym_block_comment_token1,
    ACTIONS(595), 1,
      anon_sym_PIPE_POUND,
    STATE(128), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2243] = 4,
    ACTIONS(575), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(597), 1,
      aux_sym_block_comment_token1,
    ACTIONS(599), 1,
      anon_sym_PIPE_POUND,
    STATE(135), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2257] = 5,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(601), 1,
      sym_decimal,
    STATE(66), 1,
      sym_list,
  [2273] = 4,
    ACTIONS(575), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(603), 1,
      aux_sym_block_comment_token1,
    ACTIONS(605), 1,
      anon_sym_PIPE_POUND,
    STATE(130), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2287] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(607), 1,
      sym_decimal,
    STATE(96), 1,
      sym_list,
  [2303] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_list,
  [2316] = 3,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(611), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2327] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_list,
  [2340] = 3,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(611), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2351] = 3,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(611), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2362] = 4,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_list,
  [2375] = 4,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_list,
  [2388] = 4,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_list,
  [2401] = 4,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_list,
  [2414] = 3,
    ACTIONS(617), 1,
      anon_sym_DQUOTE,
    STATE(144), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(619), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2425] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_list,
  [2438] = 3,
    ACTIONS(621), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(623), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2449] = 3,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(627), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2460] = 4,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_list,
  [2473] = 4,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    ACTIONS(317), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_list,
  [2486] = 3,
    ACTIONS(630), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(632), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2497] = 2,
    ACTIONS(519), 1,
      aux_sym_block_comment_token1,
    ACTIONS(517), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2505] = 2,
    ACTIONS(431), 1,
      aux_sym_block_comment_token1,
    ACTIONS(429), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2513] = 2,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym__real_string,
  [2520] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym__real_string,
  [2527] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      sym__real_string,
  [2534] = 1,
    ACTIONS(634), 1,
      sym__here_string_body,
  [2538] = 1,
    ACTIONS(636), 1,
      sym__here_string_body,
  [2542] = 1,
    ACTIONS(638), 1,
      sym__here_string_body,
  [2546] = 1,
    ACTIONS(367), 1,
      sym_lang_name,
  [2550] = 1,
    ACTIONS(397), 1,
      sym_lang_name,
  [2554] = 1,
    ACTIONS(640), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(71)] = 0,
  [SMALL_STATE(72)] = 52,
  [SMALL_STATE(73)] = 93,
  [SMALL_STATE(74)] = 134,
  [SMALL_STATE(75)] = 175,
  [SMALL_STATE(76)] = 216,
  [SMALL_STATE(77)] = 257,
  [SMALL_STATE(78)] = 298,
  [SMALL_STATE(79)] = 339,
  [SMALL_STATE(80)] = 380,
  [SMALL_STATE(81)] = 421,
  [SMALL_STATE(82)] = 462,
  [SMALL_STATE(83)] = 503,
  [SMALL_STATE(84)] = 544,
  [SMALL_STATE(85)] = 585,
  [SMALL_STATE(86)] = 626,
  [SMALL_STATE(87)] = 667,
  [SMALL_STATE(88)] = 708,
  [SMALL_STATE(89)] = 749,
  [SMALL_STATE(90)] = 790,
  [SMALL_STATE(91)] = 831,
  [SMALL_STATE(92)] = 872,
  [SMALL_STATE(93)] = 913,
  [SMALL_STATE(94)] = 954,
  [SMALL_STATE(95)] = 995,
  [SMALL_STATE(96)] = 1036,
  [SMALL_STATE(97)] = 1077,
  [SMALL_STATE(98)] = 1118,
  [SMALL_STATE(99)] = 1155,
  [SMALL_STATE(100)] = 1192,
  [SMALL_STATE(101)] = 1229,
  [SMALL_STATE(102)] = 1266,
  [SMALL_STATE(103)] = 1303,
  [SMALL_STATE(104)] = 1340,
  [SMALL_STATE(105)] = 1377,
  [SMALL_STATE(106)] = 1414,
  [SMALL_STATE(107)] = 1451,
  [SMALL_STATE(108)] = 1488,
  [SMALL_STATE(109)] = 1525,
  [SMALL_STATE(110)] = 1562,
  [SMALL_STATE(111)] = 1599,
  [SMALL_STATE(112)] = 1636,
  [SMALL_STATE(113)] = 1673,
  [SMALL_STATE(114)] = 1710,
  [SMALL_STATE(115)] = 1747,
  [SMALL_STATE(116)] = 1784,
  [SMALL_STATE(117)] = 1821,
  [SMALL_STATE(118)] = 1858,
  [SMALL_STATE(119)] = 1895,
  [SMALL_STATE(120)] = 1932,
  [SMALL_STATE(121)] = 1969,
  [SMALL_STATE(122)] = 2006,
  [SMALL_STATE(123)] = 2028,
  [SMALL_STATE(124)] = 2050,
  [SMALL_STATE(125)] = 2072,
  [SMALL_STATE(126)] = 2091,
  [SMALL_STATE(127)] = 2110,
  [SMALL_STATE(128)] = 2129,
  [SMALL_STATE(129)] = 2143,
  [SMALL_STATE(130)] = 2157,
  [SMALL_STATE(131)] = 2171,
  [SMALL_STATE(132)] = 2185,
  [SMALL_STATE(133)] = 2199,
  [SMALL_STATE(134)] = 2215,
  [SMALL_STATE(135)] = 2229,
  [SMALL_STATE(136)] = 2243,
  [SMALL_STATE(137)] = 2257,
  [SMALL_STATE(138)] = 2273,
  [SMALL_STATE(139)] = 2287,
  [SMALL_STATE(140)] = 2303,
  [SMALL_STATE(141)] = 2316,
  [SMALL_STATE(142)] = 2327,
  [SMALL_STATE(143)] = 2340,
  [SMALL_STATE(144)] = 2351,
  [SMALL_STATE(145)] = 2362,
  [SMALL_STATE(146)] = 2375,
  [SMALL_STATE(147)] = 2388,
  [SMALL_STATE(148)] = 2401,
  [SMALL_STATE(149)] = 2414,
  [SMALL_STATE(150)] = 2425,
  [SMALL_STATE(151)] = 2438,
  [SMALL_STATE(152)] = 2449,
  [SMALL_STATE(153)] = 2460,
  [SMALL_STATE(154)] = 2473,
  [SMALL_STATE(155)] = 2486,
  [SMALL_STATE(156)] = 2497,
  [SMALL_STATE(157)] = 2505,
  [SMALL_STATE(158)] = 2513,
  [SMALL_STATE(159)] = 2520,
  [SMALL_STATE(160)] = 2527,
  [SMALL_STATE(161)] = 2534,
  [SMALL_STATE(162)] = 2538,
  [SMALL_STATE(163)] = 2542,
  [SMALL_STATE(164)] = 2546,
  [SMALL_STATE(165)] = 2550,
  [SMALL_STATE(166)] = 2554,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(48),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(132),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(39),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(122),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(163),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(160),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(155),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(68),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(69),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(42),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(137),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(147),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(146),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(146),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(32),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(164),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(164),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(86),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(136),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(21),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(123),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(162),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(159),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(151),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(73),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(94),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(139),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(140),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(142),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(142),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(71),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(114),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(138),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(37),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(134),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(128),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(152),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [640] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_racket_external_scanner_create(void);
void tree_sitter_racket_external_scanner_destroy(void *);
bool tree_sitter_racket_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_racket_external_scanner_serialize(void *, char *);
void tree_sitter_racket_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_racket(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_racket_external_scanner_create,
      tree_sitter_racket_external_scanner_destroy,
      tree_sitter_racket_external_scanner_scan,
      tree_sitter_racket_external_scanner_serialize,
      tree_sitter_racket_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
