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
#define STATE_COUNT 179
#define LARGE_STATE_COUNT 79
#define SYMBOL_COUNT 75
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
  sym_quoted = 68,
  sym_extension = 69,
  aux_sym_program_repeat1 = 70,
  aux_sym_block_comment_repeat1 = 71,
  aux_sym_sexp_comment_repeat1 = 72,
  aux_sym__real_string_repeat1 = 73,
  aux_sym_list_repeat1 = 74,
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
  [sym_quoted] = "quoted",
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
  [sym_quoted] = sym_quoted,
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
  [sym_quoted] = {
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 3,
  [10] = 3,
  [11] = 7,
  [12] = 6,
  [13] = 5,
  [14] = 8,
  [15] = 4,
  [16] = 5,
  [17] = 8,
  [18] = 6,
  [19] = 7,
  [20] = 4,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 24,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 25,
  [33] = 33,
  [34] = 26,
  [35] = 35,
  [36] = 31,
  [37] = 37,
  [38] = 23,
  [39] = 23,
  [40] = 35,
  [41] = 26,
  [42] = 37,
  [43] = 33,
  [44] = 31,
  [45] = 29,
  [46] = 35,
  [47] = 47,
  [48] = 37,
  [49] = 47,
  [50] = 24,
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
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 65,
  [81] = 70,
  [82] = 60,
  [83] = 61,
  [84] = 64,
  [85] = 69,
  [86] = 67,
  [87] = 68,
  [88] = 72,
  [89] = 71,
  [90] = 58,
  [91] = 73,
  [92] = 56,
  [93] = 54,
  [94] = 51,
  [95] = 55,
  [96] = 57,
  [97] = 75,
  [98] = 76,
  [99] = 53,
  [100] = 74,
  [101] = 52,
  [102] = 63,
  [103] = 77,
  [104] = 66,
  [105] = 78,
  [106] = 62,
  [107] = 59,
  [108] = 51,
  [109] = 69,
  [110] = 68,
  [111] = 72,
  [112] = 58,
  [113] = 67,
  [114] = 76,
  [115] = 77,
  [116] = 78,
  [117] = 66,
  [118] = 70,
  [119] = 59,
  [120] = 62,
  [121] = 63,
  [122] = 65,
  [123] = 52,
  [124] = 53,
  [125] = 71,
  [126] = 57,
  [127] = 73,
  [128] = 55,
  [129] = 75,
  [130] = 56,
  [131] = 54,
  [132] = 60,
  [133] = 64,
  [134] = 134,
  [135] = 134,
  [136] = 134,
  [137] = 137,
  [138] = 137,
  [139] = 137,
  [140] = 140,
  [141] = 140,
  [142] = 142,
  [143] = 142,
  [144] = 142,
  [145] = 140,
  [146] = 146,
  [147] = 146,
  [148] = 148,
  [149] = 142,
  [150] = 146,
  [151] = 140,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 152,
  [157] = 157,
  [158] = 158,
  [159] = 155,
  [160] = 157,
  [161] = 154,
  [162] = 157,
  [163] = 153,
  [164] = 153,
  [165] = 154,
  [166] = 155,
  [167] = 152,
  [168] = 53,
  [169] = 58,
  [170] = 170,
  [171] = 170,
  [172] = 170,
  [173] = 173,
  [174] = 174,
  [175] = 173,
  [176] = 176,
  [177] = 176,
  [178] = 176,
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
      if (eof) ADVANCE(240);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == ',') ADVANCE(471);
      if (lookahead == '.') ADVANCE(242);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == ']') ADVANCE(457);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(247);
      if (lookahead == '}') ADVANCE(459);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(477);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == ',') ADVANCE(472);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == ']') ADVANCE(457);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '}') ADVANCE(459);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != 65279) ADVANCE(451);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ',') ADVANCE(472);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(451);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '{') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(221);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(283);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(8);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(11);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(124);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(349);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(128);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(175);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(192);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(295);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(174);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(191);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(331);
      END_STATE();
    case 34:
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(355);
      END_STATE();
    case 36:
      if (lookahead == '.') ADVANCE(226);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 37:
      if (lookahead == '.') ADVANCE(189);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(39);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      END_STATE();
    case 39:
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      END_STATE();
    case 40:
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(351);
      END_STATE();
    case 42:
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 43:
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 44:
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 46:
      if (lookahead == '.') ADVANCE(218);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(164);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 53:
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(359);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(176);
      END_STATE();
    case 56:
      if (lookahead == '.') ADVANCE(190);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(177);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(193);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(178);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(194);
      END_STATE();
    case 61:
      if (lookahead == '<') ADVANCE(260);
      END_STATE();
    case 62:
      if (lookahead == 'U') ADVANCE(409);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == 'n') ADVANCE(395);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(396);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(405);
      if (lookahead == 'v') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(391);
      END_STATE();
    case 63:
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '|') ADVANCE(111);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(452);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(391);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(391);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(262);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(1);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(463);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 97:
      if (lookahead == 'q') ADVANCE(464);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 108:
      if (lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 109:
      if (lookahead == 'x') ADVANCE(262);
      END_STATE();
    case 110:
      if (lookahead == '|') ADVANCE(451);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 111:
      if (lookahead == '|') ADVANCE(452);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(252);
      END_STATE();
    case 113:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(181);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      END_STATE();
    case 114:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 115:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(182);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(374);
      END_STATE();
    case 116:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 117:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(387);
      END_STATE();
    case 118:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 119:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 120:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(380);
      END_STATE();
    case 121:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(184);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      END_STATE();
    case 122:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 123:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 124:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(188);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(379);
      END_STATE();
    case 127:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 128:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 129:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 132:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 133:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 136:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 138:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 139:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(30);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 140:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 141:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 142:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 143:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 144:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 145:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 146:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 147:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 148:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 149:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 150:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      END_STATE();
    case 152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 156:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 158:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 159:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 160:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(372);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 177:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(378);
      END_STATE();
    case 178:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 179:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(293);
      END_STATE();
    case 180:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      END_STATE();
    case 181:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      END_STATE();
    case 182:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(374);
      END_STATE();
    case 183:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(337);
      END_STATE();
    case 184:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      END_STATE();
    case 185:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(319);
      END_STATE();
    case 186:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(12);
      END_STATE();
    case 187:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(345);
      END_STATE();
    case 188:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      END_STATE();
    case 189:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(276);
      END_STATE();
    case 190:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(372);
      END_STATE();
    case 191:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 192:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(375);
      END_STATE();
    case 193:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(378);
      END_STATE();
    case 194:
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'S' ||
          lookahead == 'i' ||
          lookahead == 's') ADVANCE(410);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(391);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(387);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(380);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(357);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(379);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(367);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(365);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 221:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(265);
      if (lookahead == '\r') ADVANCE(266);
      if (lookahead == 'U') ADVANCE(232);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == 'x') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(268);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 235:
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '|') ADVANCE(246);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '|') ADVANCE(247);
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(451);
      END_STATE();
    case 238:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(452);
      END_STATE();
    case 239:
      if (eof) ADVANCE(240);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == '(') ADVANCE(454);
      if (lookahead == ',') ADVANCE(472);
      if (lookahead == '.') ADVANCE(443);
      if (lookahead == ';') ADVANCE(244);
      if (lookahead == '[') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '|') ADVANCE(110);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != ']' &&
          lookahead != '}' &&
          lookahead != 65279) ADVANCE(451);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__skip_token1);
      if (aux_sym__skip_token1_character_set_1(lookahead)) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_dot);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(245);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(252);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__line_comment);
      if (lookahead == '\\') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == 'x') ADVANCE(461);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_boolean);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(478);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '&') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == ',') ADVANCE(474);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '!') ADVANCE(112);
      if (lookahead == '%') ADVANCE(451);
      if (lookahead == '&') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == ',') ADVANCE(474);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ';') ADVANCE(250);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == 'F' ||
          lookahead == 'T') ADVANCE(253);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'h') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '|') ADVANCE(245);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(6);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(199);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'I' ||
          lookahead == 'e' ||
          lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '|') ADVANCE(245);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_POUND_LT_LT);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_regex_token1);
      if (lookahead == '#') ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__real_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(265);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_number_token1);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == '/') ADVANCE(443);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(278);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(443);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(423);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(280);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(423);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(444);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(282);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(444);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(283);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(284);
      if (lookahead == '.') ADVANCE(294);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '.') ADVANCE(298);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '.') ADVANCE(297);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(288);
      if (lookahead == '.') ADVANCE(301);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(424);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '.') ADVANCE(305);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '.') ADVANCE(306);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(422);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(293);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(295);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(300);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(422);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(307);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(309);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '/') ADVANCE(185);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(313);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(316);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(317);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(320);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(319);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(320);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(113);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(321);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(321);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(324);
      if (lookahead == '.') ADVANCE(327);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(325);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(325);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(327);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'L' ||
          lookahead == 'S' ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '.') ADVANCE(334);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(330);
      if (lookahead == '.') ADVANCE(333);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(331);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(332);
      if (lookahead == '.') ADVANCE(338);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(333);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(333);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '.') ADVANCE(342);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(336);
      if (lookahead == '.') ADVANCE(341);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(337);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(115);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '.') ADVANCE(345);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '.') ADVANCE(346);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '.') ADVANCE(348);
      if (lookahead == '/') ADVANCE(218);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(344);
      if (lookahead == '.') ADVANCE(347);
      if (lookahead == '/') ADVANCE(218);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(345);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(121);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(347);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(347);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '.') ADVANCE(353);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(349);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(350);
      if (lookahead == '.') ADVANCE(354);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '.') ADVANCE(357);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(351);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(352);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(353);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(354);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(356);
      if (lookahead == '.') ADVANCE(361);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(355);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(356);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(357);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(358);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(120);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(360);
      if (lookahead == '.') ADVANCE(365);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(359);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(360);
      if (lookahead == '.') ADVANCE(366);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(362);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(361);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(362);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(363);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(364);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == '/') ADVANCE(207);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(365);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(366);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(126);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(367);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '#') ADVANCE(368);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(117);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(419);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(47);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(200);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '.') ADVANCE(413);
      if (lookahead == '/') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '.') ADVANCE(414);
      if (lookahead == '/') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '#') ADVANCE(414);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'S' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 's') ADVANCE(425);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(440);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(442);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(434);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(441);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(448);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(437);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(415);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(416);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(418);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(429);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(415);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(416);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(418);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(430);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(431);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(385);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(370);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(385);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (lookahead == '0' ||
          lookahead == 'F' ||
          lookahead == 'f') ADVANCE(433);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(384);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(413);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '|') ADVANCE(110);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\\') ADVANCE(238);
      if (lookahead == '|') ADVANCE(111);
      if (!sym_keyword_character_set_1(lookahead)) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_POUND_AMP);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_POUNDfl);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_POUNDfx);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_POUNDs);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_POUNDhash);
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_POUNDhasheq);
      if (lookahead == 'v') ADVANCE(465);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_POUNDhasheqv);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_quote);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_quasiquote);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_syntax);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_quasisyntax);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_unquote);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_unquote);
      if (lookahead == '@') ADVANCE(473);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_unquote_splicing);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_unsyntax);
      if (lookahead == '@') ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_unsyntax_splicing);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_POUNDreader);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_POUNDlang);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      if (lookahead == ' ' ||
          lookahead == '/') ADVANCE(252);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_lang_name);
      if (lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(479);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 239},
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
  [21] = {.lex_state = 239},
  [22] = {.lex_state = 239},
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
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
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
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 239},
  [81] = {.lex_state = 239},
  [82] = {.lex_state = 239},
  [83] = {.lex_state = 239},
  [84] = {.lex_state = 239},
  [85] = {.lex_state = 239},
  [86] = {.lex_state = 239},
  [87] = {.lex_state = 239},
  [88] = {.lex_state = 239},
  [89] = {.lex_state = 239},
  [90] = {.lex_state = 239},
  [91] = {.lex_state = 239},
  [92] = {.lex_state = 239},
  [93] = {.lex_state = 239},
  [94] = {.lex_state = 239},
  [95] = {.lex_state = 239},
  [96] = {.lex_state = 239},
  [97] = {.lex_state = 239},
  [98] = {.lex_state = 239},
  [99] = {.lex_state = 239},
  [100] = {.lex_state = 239},
  [101] = {.lex_state = 239},
  [102] = {.lex_state = 239},
  [103] = {.lex_state = 239},
  [104] = {.lex_state = 239},
  [105] = {.lex_state = 239},
  [106] = {.lex_state = 239},
  [107] = {.lex_state = 239},
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
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 236},
  [141] = {.lex_state = 236},
  [142] = {.lex_state = 236},
  [143] = {.lex_state = 236},
  [144] = {.lex_state = 236},
  [145] = {.lex_state = 236},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 236},
  [149] = {.lex_state = 236},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 236},
  [152] = {.lex_state = 239},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 239},
  [156] = {.lex_state = 239},
  [157] = {.lex_state = 239},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 239},
  [160] = {.lex_state = 239},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 239},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 239},
  [167] = {.lex_state = 239},
  [168] = {.lex_state = 236},
  [169] = {.lex_state = 236},
  [170] = {.lex_state = 239},
  [171] = {.lex_state = 239},
  [172] = {.lex_state = 239},
  [173] = {.lex_state = 235},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 235},
  [176] = {.lex_state = 0, .external_lex_state = 1},
  [177] = {.lex_state = 0, .external_lex_state = 1},
  [178] = {.lex_state = 0, .external_lex_state = 1},
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
    [sym_program] = STATE(174),
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
    [sym_quoted] = STATE(21),
    [sym_extension] = STATE(21),
    [aux_sym_program_repeat1] = STATE(21),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
    [anon_sym_POUNDreader] = ACTIONS(47),
    [anon_sym_POUNDlang] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(53),
    [sym_dot] = ACTIONS(56),
    [aux_sym_comment_token1] = ACTIONS(59),
    [anon_sym_POUND_PIPE] = ACTIONS(62),
    [anon_sym_POUND_SEMI] = ACTIONS(65),
    [sym__line_comment] = ACTIONS(59),
    [sym_boolean] = ACTIONS(56),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_POUND_LT_LT] = ACTIONS(71),
    [aux_sym_regex_token1] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [aux_sym_number_token1] = ACTIONS(80),
    [sym_character] = ACTIONS(53),
    [aux_sym_symbol_token1] = ACTIONS(83),
    [sym_keyword] = ACTIONS(53),
    [anon_sym_POUND_AMP] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_POUNDfl] = ACTIONS(100),
    [anon_sym_POUNDfx] = ACTIONS(100),
    [anon_sym_POUNDs] = ACTIONS(103),
    [anon_sym_POUNDhash] = ACTIONS(106),
    [anon_sym_POUNDhasheq] = ACTIONS(106),
    [anon_sym_POUNDhasheqv] = ACTIONS(109),
    [sym_quote] = ACTIONS(112),
    [sym_quasiquote] = ACTIONS(112),
    [sym_syntax] = ACTIONS(112),
    [sym_quasisyntax] = ACTIONS(112),
    [sym_unquote] = ACTIONS(115),
    [sym_unquote_splicing] = ACTIONS(112),
    [sym_unsyntax] = ACTIONS(115),
    [sym_unsyntax_splicing] = ACTIONS(112),
    [anon_sym_POUNDreader] = ACTIONS(118),
    [anon_sym_POUNDlang] = ACTIONS(121),
    [anon_sym_POUND_BANG] = ACTIONS(124),
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(157),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [5] = {
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(10),
    [sym_symbol] = STATE(10),
    [sym_box] = STATE(10),
    [sym_list] = STATE(10),
    [sym_vector] = STATE(10),
    [sym_structure] = STATE(10),
    [sym_hash] = STATE(10),
    [sym_graph] = STATE(10),
    [sym_quoted] = STATE(10),
    [sym_extension] = STATE(10),
    [aux_sym_list_repeat1] = STATE(10),
    [aux_sym__skip_token1] = ACTIONS(179),
    [sym_dot] = ACTIONS(181),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(179),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(179),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [6] = {
    [sym__token] = STATE(8),
    [sym__skip] = STATE(8),
    [sym_comment] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_sexp_comment] = STATE(8),
    [sym__datum] = STATE(8),
    [sym_string] = STATE(8),
    [sym_byte_string] = STATE(8),
    [sym_here_string] = STATE(8),
    [sym_regex] = STATE(8),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_box] = STATE(8),
    [sym_list] = STATE(8),
    [sym_vector] = STATE(8),
    [sym_structure] = STATE(8),
    [sym_hash] = STATE(8),
    [sym_graph] = STATE(8),
    [sym_quoted] = STATE(8),
    [sym_extension] = STATE(8),
    [aux_sym_list_repeat1] = STATE(8),
    [aux_sym__skip_token1] = ACTIONS(185),
    [sym_dot] = ACTIONS(187),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(185),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(185),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [7] = {
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_box] = STATE(4),
    [sym_list] = STATE(4),
    [sym_vector] = STATE(4),
    [sym_structure] = STATE(4),
    [sym_hash] = STATE(4),
    [sym_graph] = STATE(4),
    [sym_quoted] = STATE(4),
    [sym_extension] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [aux_sym__skip_token1] = ACTIONS(189),
    [sym_dot] = ACTIONS(191),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(191),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(189),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(189),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [8] = {
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [9] = {
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(193),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [11] = {
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(20),
    [sym_symbol] = STATE(20),
    [sym_box] = STATE(20),
    [sym_list] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_structure] = STATE(20),
    [sym_hash] = STATE(20),
    [sym_graph] = STATE(20),
    [sym_quoted] = STATE(20),
    [sym_extension] = STATE(20),
    [aux_sym_list_repeat1] = STATE(20),
    [aux_sym__skip_token1] = ACTIONS(195),
    [sym_dot] = ACTIONS(197),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(195),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(195),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [12] = {
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(17),
    [sym_symbol] = STATE(17),
    [sym_box] = STATE(17),
    [sym_list] = STATE(17),
    [sym_vector] = STATE(17),
    [sym_structure] = STATE(17),
    [sym_hash] = STATE(17),
    [sym_graph] = STATE(17),
    [sym_quoted] = STATE(17),
    [sym_extension] = STATE(17),
    [aux_sym_list_repeat1] = STATE(17),
    [aux_sym__skip_token1] = ACTIONS(201),
    [sym_dot] = ACTIONS(203),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(201),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(201),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [13] = {
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_box] = STATE(3),
    [sym_list] = STATE(3),
    [sym_vector] = STATE(3),
    [sym_structure] = STATE(3),
    [sym_hash] = STATE(3),
    [sym_graph] = STATE(3),
    [sym_quoted] = STATE(3),
    [sym_extension] = STATE(3),
    [aux_sym_list_repeat1] = STATE(3),
    [aux_sym__skip_token1] = ACTIONS(205),
    [sym_dot] = ACTIONS(207),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(205),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(205),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(199),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [16] = {
    [sym__token] = STATE(9),
    [sym__skip] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_sexp_comment] = STATE(9),
    [sym__datum] = STATE(9),
    [sym_string] = STATE(9),
    [sym_byte_string] = STATE(9),
    [sym_here_string] = STATE(9),
    [sym_regex] = STATE(9),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(9),
    [sym_symbol] = STATE(9),
    [sym_box] = STATE(9),
    [sym_list] = STATE(9),
    [sym_vector] = STATE(9),
    [sym_structure] = STATE(9),
    [sym_hash] = STATE(9),
    [sym_graph] = STATE(9),
    [sym_quoted] = STATE(9),
    [sym_extension] = STATE(9),
    [aux_sym_list_repeat1] = STATE(9),
    [aux_sym__skip_token1] = ACTIONS(209),
    [sym_dot] = ACTIONS(211),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(211),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(209),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(209),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym_box] = STATE(14),
    [sym_list] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_structure] = STATE(14),
    [sym_hash] = STATE(14),
    [sym_graph] = STATE(14),
    [sym_quoted] = STATE(14),
    [sym_extension] = STATE(14),
    [aux_sym_list_repeat1] = STATE(14),
    [aux_sym__skip_token1] = ACTIONS(215),
    [sym_dot] = ACTIONS(217),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(215),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(215),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym_box] = STATE(15),
    [sym_list] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_structure] = STATE(15),
    [sym_hash] = STATE(15),
    [sym_graph] = STATE(15),
    [sym_quoted] = STATE(15),
    [sym_extension] = STATE(15),
    [aux_sym_list_repeat1] = STATE(15),
    [aux_sym__skip_token1] = ACTIONS(219),
    [sym_dot] = ACTIONS(221),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(219),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(219),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
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
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_box] = STATE(2),
    [sym_list] = STATE(2),
    [sym_vector] = STATE(2),
    [sym_structure] = STATE(2),
    [sym_hash] = STATE(2),
    [sym_graph] = STATE(2),
    [sym_quoted] = STATE(2),
    [sym_extension] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [aux_sym__skip_token1] = ACTIONS(127),
    [sym_dot] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_POUND_PIPE] = ACTIONS(133),
    [anon_sym_POUND_SEMI] = ACTIONS(135),
    [sym__line_comment] = ACTIONS(131),
    [sym_boolean] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(127),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(127),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
    [anon_sym_POUNDreader] = ACTIONS(171),
    [anon_sym_POUNDlang] = ACTIONS(173),
    [anon_sym_POUND_BANG] = ACTIONS(175),
  },
  [21] = {
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
    [sym_quoted] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(223),
    [aux_sym__skip_token1] = ACTIONS(225),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_PIPE] = ACTIONS(9),
    [anon_sym_POUND_SEMI] = ACTIONS(11),
    [sym__line_comment] = ACTIONS(7),
    [sym_boolean] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(225),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(225),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
    [anon_sym_POUNDreader] = ACTIONS(47),
    [anon_sym_POUNDlang] = ACTIONS(49),
    [anon_sym_POUND_BANG] = ACTIONS(51),
  },
  [22] = {
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
    [sym_quoted] = STATE(22),
    [sym_extension] = STATE(22),
    [aux_sym_program_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(229),
    [aux_sym__skip_token1] = ACTIONS(231),
    [aux_sym_comment_token1] = ACTIONS(234),
    [anon_sym_POUND_PIPE] = ACTIONS(237),
    [anon_sym_POUND_SEMI] = ACTIONS(240),
    [sym__line_comment] = ACTIONS(234),
    [sym_boolean] = ACTIONS(243),
    [anon_sym_POUND] = ACTIONS(246),
    [anon_sym_POUND_LT_LT] = ACTIONS(249),
    [aux_sym_regex_token1] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(255),
    [aux_sym_number_token1] = ACTIONS(258),
    [sym_character] = ACTIONS(231),
    [aux_sym_symbol_token1] = ACTIONS(261),
    [sym_keyword] = ACTIONS(231),
    [anon_sym_POUND_AMP] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(273),
    [anon_sym_POUNDfl] = ACTIONS(276),
    [anon_sym_POUNDfx] = ACTIONS(276),
    [anon_sym_POUNDs] = ACTIONS(279),
    [anon_sym_POUNDhash] = ACTIONS(282),
    [anon_sym_POUNDhasheq] = ACTIONS(282),
    [anon_sym_POUNDhasheqv] = ACTIONS(285),
    [sym_quote] = ACTIONS(288),
    [sym_quasiquote] = ACTIONS(288),
    [sym_syntax] = ACTIONS(288),
    [sym_quasisyntax] = ACTIONS(288),
    [sym_unquote] = ACTIONS(291),
    [sym_unquote_splicing] = ACTIONS(288),
    [sym_unsyntax] = ACTIONS(291),
    [sym_unsyntax_splicing] = ACTIONS(288),
    [anon_sym_POUNDreader] = ACTIONS(294),
    [anon_sym_POUNDlang] = ACTIONS(297),
    [anon_sym_POUND_BANG] = ACTIONS(300),
  },
  [23] = {
    [sym__skip] = STATE(27),
    [sym_comment] = STATE(27),
    [sym_block_comment] = STATE(27),
    [sym_sexp_comment] = STATE(27),
    [sym__datum] = STATE(91),
    [sym_string] = STATE(91),
    [sym_byte_string] = STATE(91),
    [sym_here_string] = STATE(91),
    [sym_regex] = STATE(91),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(91),
    [sym_symbol] = STATE(91),
    [sym_box] = STATE(91),
    [sym_list] = STATE(91),
    [sym_vector] = STATE(91),
    [sym_structure] = STATE(91),
    [sym_hash] = STATE(91),
    [sym_graph] = STATE(91),
    [sym_quoted] = STATE(91),
    [aux_sym_sexp_comment_repeat1] = STATE(27),
    [aux_sym__skip_token1] = ACTIONS(303),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(311),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(313),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(313),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
  },
  [24] = {
    [sym__skip] = STATE(34),
    [sym_comment] = STATE(34),
    [sym_block_comment] = STATE(34),
    [sym_sexp_comment] = STATE(34),
    [sym__datum] = STATE(64),
    [sym_string] = STATE(64),
    [sym_byte_string] = STATE(64),
    [sym_here_string] = STATE(64),
    [sym_regex] = STATE(64),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_box] = STATE(64),
    [sym_list] = STATE(64),
    [sym_vector] = STATE(64),
    [sym_structure] = STATE(64),
    [sym_hash] = STATE(64),
    [sym_graph] = STATE(64),
    [sym_quoted] = STATE(64),
    [aux_sym_sexp_comment_repeat1] = STATE(34),
    [aux_sym__skip_token1] = ACTIONS(315),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(319),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(319),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
  },
  [25] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(129),
    [sym_string] = STATE(129),
    [sym_byte_string] = STATE(129),
    [sym_here_string] = STATE(129),
    [sym_regex] = STATE(129),
    [sym__real_string] = STATE(111),
    [sym_number] = STATE(129),
    [sym_symbol] = STATE(129),
    [sym_box] = STATE(129),
    [sym_list] = STATE(129),
    [sym_vector] = STATE(129),
    [sym_structure] = STATE(129),
    [sym_hash] = STATE(129),
    [sym_graph] = STATE(129),
    [sym_quoted] = STATE(129),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_POUND_LT_LT] = ACTIONS(327),
    [aux_sym_regex_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [sym_character] = ACTIONS(335),
    [aux_sym_symbol_token1] = ACTIONS(337),
    [sym_keyword] = ACTIONS(335),
    [anon_sym_POUND_AMP] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_POUNDfl] = ACTIONS(347),
    [anon_sym_POUNDfx] = ACTIONS(347),
    [anon_sym_POUNDs] = ACTIONS(349),
    [anon_sym_POUNDhash] = ACTIONS(351),
    [anon_sym_POUNDhasheq] = ACTIONS(351),
    [anon_sym_POUNDhasheqv] = ACTIONS(353),
    [sym_quote] = ACTIONS(355),
    [sym_quasiquote] = ACTIONS(355),
    [sym_syntax] = ACTIONS(355),
    [sym_quasisyntax] = ACTIONS(355),
    [sym_unquote] = ACTIONS(357),
    [sym_unquote_splicing] = ACTIONS(355),
    [sym_unsyntax] = ACTIONS(357),
    [sym_unsyntax_splicing] = ACTIONS(355),
  },
  [26] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(109),
    [sym_string] = STATE(109),
    [sym_byte_string] = STATE(109),
    [sym_here_string] = STATE(109),
    [sym_regex] = STATE(109),
    [sym__real_string] = STATE(111),
    [sym_number] = STATE(109),
    [sym_symbol] = STATE(109),
    [sym_box] = STATE(109),
    [sym_list] = STATE(109),
    [sym_vector] = STATE(109),
    [sym_structure] = STATE(109),
    [sym_hash] = STATE(109),
    [sym_graph] = STATE(109),
    [sym_quoted] = STATE(109),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_POUND_LT_LT] = ACTIONS(327),
    [aux_sym_regex_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [sym_character] = ACTIONS(361),
    [aux_sym_symbol_token1] = ACTIONS(337),
    [sym_keyword] = ACTIONS(361),
    [anon_sym_POUND_AMP] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_POUNDfl] = ACTIONS(347),
    [anon_sym_POUNDfx] = ACTIONS(347),
    [anon_sym_POUNDs] = ACTIONS(349),
    [anon_sym_POUNDhash] = ACTIONS(351),
    [anon_sym_POUNDhasheq] = ACTIONS(351),
    [anon_sym_POUNDhasheqv] = ACTIONS(353),
    [sym_quote] = ACTIONS(355),
    [sym_quasiquote] = ACTIONS(355),
    [sym_syntax] = ACTIONS(355),
    [sym_quasisyntax] = ACTIONS(355),
    [sym_unquote] = ACTIONS(357),
    [sym_unquote_splicing] = ACTIONS(355),
    [sym_unsyntax] = ACTIONS(357),
    [sym_unsyntax_splicing] = ACTIONS(355),
  },
  [27] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
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
    [sym_quoted] = STATE(97),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(363),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(365),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(365),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
  },
  [28] = {
    [sym__skip] = STATE(26),
    [sym_comment] = STATE(26),
    [sym_block_comment] = STATE(26),
    [sym_sexp_comment] = STATE(26),
    [sym__datum] = STATE(133),
    [sym_string] = STATE(133),
    [sym_byte_string] = STATE(133),
    [sym_here_string] = STATE(133),
    [sym_regex] = STATE(133),
    [sym__real_string] = STATE(111),
    [sym_number] = STATE(133),
    [sym_symbol] = STATE(133),
    [sym_box] = STATE(133),
    [sym_list] = STATE(133),
    [sym_vector] = STATE(133),
    [sym_structure] = STATE(133),
    [sym_hash] = STATE(133),
    [sym_graph] = STATE(133),
    [sym_quoted] = STATE(133),
    [aux_sym_sexp_comment_repeat1] = STATE(26),
    [aux_sym__skip_token1] = ACTIONS(367),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_POUND_LT_LT] = ACTIONS(327),
    [aux_sym_regex_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [sym_character] = ACTIONS(371),
    [aux_sym_symbol_token1] = ACTIONS(337),
    [sym_keyword] = ACTIONS(371),
    [anon_sym_POUND_AMP] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_POUNDfl] = ACTIONS(347),
    [anon_sym_POUNDfx] = ACTIONS(347),
    [anon_sym_POUNDs] = ACTIONS(349),
    [anon_sym_POUNDhash] = ACTIONS(351),
    [anon_sym_POUNDhasheq] = ACTIONS(351),
    [anon_sym_POUNDhasheqv] = ACTIONS(353),
    [sym_quote] = ACTIONS(355),
    [sym_quasiquote] = ACTIONS(355),
    [sym_syntax] = ACTIONS(355),
    [sym_quasisyntax] = ACTIONS(355),
    [sym_unquote] = ACTIONS(357),
    [sym_unquote_splicing] = ACTIONS(355),
    [sym_unsyntax] = ACTIONS(357),
    [sym_unsyntax_splicing] = ACTIONS(355),
  },
  [29] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(60),
    [sym_string] = STATE(60),
    [sym_byte_string] = STATE(60),
    [sym_here_string] = STATE(60),
    [sym_regex] = STATE(60),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(60),
    [sym_symbol] = STATE(60),
    [sym_box] = STATE(60),
    [sym_list] = STATE(60),
    [sym_vector] = STATE(60),
    [sym_structure] = STATE(60),
    [sym_hash] = STATE(60),
    [sym_graph] = STATE(60),
    [sym_quoted] = STATE(60),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(375),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(375),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
  },
  [30] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(132),
    [sym_string] = STATE(132),
    [sym_byte_string] = STATE(132),
    [sym_here_string] = STATE(132),
    [sym_regex] = STATE(132),
    [sym__real_string] = STATE(111),
    [sym_number] = STATE(132),
    [sym_symbol] = STATE(132),
    [sym_box] = STATE(132),
    [sym_list] = STATE(132),
    [sym_vector] = STATE(132),
    [sym_structure] = STATE(132),
    [sym_hash] = STATE(132),
    [sym_graph] = STATE(132),
    [sym_quoted] = STATE(132),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_POUND_LT_LT] = ACTIONS(327),
    [aux_sym_regex_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [sym_character] = ACTIONS(379),
    [aux_sym_symbol_token1] = ACTIONS(337),
    [sym_keyword] = ACTIONS(379),
    [anon_sym_POUND_AMP] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_POUNDfl] = ACTIONS(347),
    [anon_sym_POUNDfx] = ACTIONS(347),
    [anon_sym_POUNDs] = ACTIONS(349),
    [anon_sym_POUNDhash] = ACTIONS(351),
    [anon_sym_POUNDhasheq] = ACTIONS(351),
    [anon_sym_POUNDhasheqv] = ACTIONS(353),
    [sym_quote] = ACTIONS(355),
    [sym_quasiquote] = ACTIONS(355),
    [sym_syntax] = ACTIONS(355),
    [sym_quasisyntax] = ACTIONS(355),
    [sym_unquote] = ACTIONS(357),
    [sym_unquote_splicing] = ACTIONS(355),
    [sym_unsyntax] = ACTIONS(357),
    [sym_unsyntax_splicing] = ACTIONS(355),
  },
  [31] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(130),
    [sym_string] = STATE(130),
    [sym_byte_string] = STATE(130),
    [sym_here_string] = STATE(130),
    [sym_regex] = STATE(130),
    [sym__real_string] = STATE(111),
    [sym_number] = STATE(130),
    [sym_symbol] = STATE(130),
    [sym_box] = STATE(130),
    [sym_list] = STATE(130),
    [sym_vector] = STATE(130),
    [sym_structure] = STATE(130),
    [sym_hash] = STATE(130),
    [sym_graph] = STATE(130),
    [sym_quoted] = STATE(130),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_POUND_LT_LT] = ACTIONS(327),
    [aux_sym_regex_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [sym_character] = ACTIONS(383),
    [aux_sym_symbol_token1] = ACTIONS(337),
    [sym_keyword] = ACTIONS(383),
    [anon_sym_POUND_AMP] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_POUNDfl] = ACTIONS(347),
    [anon_sym_POUNDfx] = ACTIONS(347),
    [anon_sym_POUNDs] = ACTIONS(349),
    [anon_sym_POUNDhash] = ACTIONS(351),
    [anon_sym_POUNDhasheq] = ACTIONS(351),
    [anon_sym_POUNDhasheqv] = ACTIONS(353),
    [sym_quote] = ACTIONS(355),
    [sym_quasiquote] = ACTIONS(355),
    [sym_syntax] = ACTIONS(355),
    [sym_quasisyntax] = ACTIONS(355),
    [sym_unquote] = ACTIONS(357),
    [sym_unquote_splicing] = ACTIONS(355),
    [sym_unsyntax] = ACTIONS(357),
    [sym_unsyntax_splicing] = ACTIONS(355),
  },
  [32] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(75),
    [sym_string] = STATE(75),
    [sym_byte_string] = STATE(75),
    [sym_here_string] = STATE(75),
    [sym_regex] = STATE(75),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(75),
    [sym_symbol] = STATE(75),
    [sym_box] = STATE(75),
    [sym_list] = STATE(75),
    [sym_vector] = STATE(75),
    [sym_structure] = STATE(75),
    [sym_hash] = STATE(75),
    [sym_graph] = STATE(75),
    [sym_quoted] = STATE(75),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(387),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(387),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
  },
  [33] = {
    [sym__skip] = STATE(49),
    [sym_comment] = STATE(49),
    [sym_block_comment] = STATE(49),
    [sym_sexp_comment] = STATE(49),
    [sym__datum] = STATE(74),
    [sym_string] = STATE(74),
    [sym_byte_string] = STATE(74),
    [sym_here_string] = STATE(74),
    [sym_regex] = STATE(74),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(74),
    [sym_symbol] = STATE(74),
    [sym_box] = STATE(74),
    [sym_list] = STATE(74),
    [sym_vector] = STATE(74),
    [sym_structure] = STATE(74),
    [sym_hash] = STATE(74),
    [sym_graph] = STATE(74),
    [sym_quoted] = STATE(74),
    [aux_sym_sexp_comment_repeat1] = STATE(49),
    [aux_sym__skip_token1] = ACTIONS(389),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(393),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(393),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
  },
  [34] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(69),
    [sym_string] = STATE(69),
    [sym_byte_string] = STATE(69),
    [sym_here_string] = STATE(69),
    [sym_regex] = STATE(69),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_box] = STATE(69),
    [sym_list] = STATE(69),
    [sym_vector] = STATE(69),
    [sym_structure] = STATE(69),
    [sym_hash] = STATE(69),
    [sym_graph] = STATE(69),
    [sym_quoted] = STATE(69),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(397),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(397),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
  },
  [35] = {
    [sym__skip] = STATE(31),
    [sym_comment] = STATE(31),
    [sym_block_comment] = STATE(31),
    [sym_sexp_comment] = STATE(31),
    [sym__datum] = STATE(119),
    [sym_string] = STATE(119),
    [sym_byte_string] = STATE(119),
    [sym_here_string] = STATE(119),
    [sym_regex] = STATE(119),
    [sym__real_string] = STATE(111),
    [sym_number] = STATE(119),
    [sym_symbol] = STATE(119),
    [sym_box] = STATE(119),
    [sym_list] = STATE(119),
    [sym_vector] = STATE(119),
    [sym_structure] = STATE(119),
    [sym_hash] = STATE(119),
    [sym_graph] = STATE(119),
    [sym_quoted] = STATE(119),
    [aux_sym_sexp_comment_repeat1] = STATE(31),
    [aux_sym__skip_token1] = ACTIONS(399),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_POUND_LT_LT] = ACTIONS(327),
    [aux_sym_regex_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [sym_character] = ACTIONS(403),
    [aux_sym_symbol_token1] = ACTIONS(337),
    [sym_keyword] = ACTIONS(403),
    [anon_sym_POUND_AMP] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_POUNDfl] = ACTIONS(347),
    [anon_sym_POUNDfx] = ACTIONS(347),
    [anon_sym_POUNDs] = ACTIONS(349),
    [anon_sym_POUNDhash] = ACTIONS(351),
    [anon_sym_POUNDhasheq] = ACTIONS(351),
    [anon_sym_POUNDhasheqv] = ACTIONS(353),
    [sym_quote] = ACTIONS(355),
    [sym_quasiquote] = ACTIONS(355),
    [sym_syntax] = ACTIONS(355),
    [sym_quasisyntax] = ACTIONS(355),
    [sym_unquote] = ACTIONS(357),
    [sym_unquote_splicing] = ACTIONS(355),
    [sym_unsyntax] = ACTIONS(357),
    [sym_unsyntax_splicing] = ACTIONS(355),
  },
  [36] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(92),
    [sym_string] = STATE(92),
    [sym_byte_string] = STATE(92),
    [sym_here_string] = STATE(92),
    [sym_regex] = STATE(92),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_box] = STATE(92),
    [sym_list] = STATE(92),
    [sym_vector] = STATE(92),
    [sym_structure] = STATE(92),
    [sym_hash] = STATE(92),
    [sym_graph] = STATE(92),
    [sym_quoted] = STATE(92),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(407),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(407),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
  },
  [37] = {
    [sym__skip] = STATE(29),
    [sym_comment] = STATE(29),
    [sym_block_comment] = STATE(29),
    [sym_sexp_comment] = STATE(29),
    [sym__datum] = STATE(52),
    [sym_string] = STATE(52),
    [sym_byte_string] = STATE(52),
    [sym_here_string] = STATE(52),
    [sym_regex] = STATE(52),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(52),
    [sym_symbol] = STATE(52),
    [sym_box] = STATE(52),
    [sym_list] = STATE(52),
    [sym_vector] = STATE(52),
    [sym_structure] = STATE(52),
    [sym_hash] = STATE(52),
    [sym_graph] = STATE(52),
    [sym_quoted] = STATE(52),
    [aux_sym_sexp_comment_repeat1] = STATE(29),
    [aux_sym__skip_token1] = ACTIONS(409),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(411),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(413),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(413),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
  },
  [38] = {
    [sym__skip] = STATE(32),
    [sym_comment] = STATE(32),
    [sym_block_comment] = STATE(32),
    [sym_sexp_comment] = STATE(32),
    [sym__datum] = STATE(73),
    [sym_string] = STATE(73),
    [sym_byte_string] = STATE(73),
    [sym_here_string] = STATE(73),
    [sym_regex] = STATE(73),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(73),
    [sym_symbol] = STATE(73),
    [sym_box] = STATE(73),
    [sym_list] = STATE(73),
    [sym_vector] = STATE(73),
    [sym_structure] = STATE(73),
    [sym_hash] = STATE(73),
    [sym_graph] = STATE(73),
    [sym_quoted] = STATE(73),
    [aux_sym_sexp_comment_repeat1] = STATE(32),
    [aux_sym__skip_token1] = ACTIONS(415),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(417),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(419),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(419),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
  },
  [39] = {
    [sym__skip] = STATE(25),
    [sym_comment] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym_sexp_comment] = STATE(25),
    [sym__datum] = STATE(127),
    [sym_string] = STATE(127),
    [sym_byte_string] = STATE(127),
    [sym_here_string] = STATE(127),
    [sym_regex] = STATE(127),
    [sym__real_string] = STATE(111),
    [sym_number] = STATE(127),
    [sym_symbol] = STATE(127),
    [sym_box] = STATE(127),
    [sym_list] = STATE(127),
    [sym_vector] = STATE(127),
    [sym_structure] = STATE(127),
    [sym_hash] = STATE(127),
    [sym_graph] = STATE(127),
    [sym_quoted] = STATE(127),
    [aux_sym_sexp_comment_repeat1] = STATE(25),
    [aux_sym__skip_token1] = ACTIONS(421),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_POUND_LT_LT] = ACTIONS(327),
    [aux_sym_regex_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [sym_character] = ACTIONS(425),
    [aux_sym_symbol_token1] = ACTIONS(337),
    [sym_keyword] = ACTIONS(425),
    [anon_sym_POUND_AMP] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_POUNDfl] = ACTIONS(347),
    [anon_sym_POUNDfx] = ACTIONS(347),
    [anon_sym_POUNDs] = ACTIONS(349),
    [anon_sym_POUNDhash] = ACTIONS(351),
    [anon_sym_POUNDhasheq] = ACTIONS(351),
    [anon_sym_POUNDhasheqv] = ACTIONS(353),
    [sym_quote] = ACTIONS(355),
    [sym_quasiquote] = ACTIONS(355),
    [sym_syntax] = ACTIONS(355),
    [sym_quasisyntax] = ACTIONS(355),
    [sym_unquote] = ACTIONS(357),
    [sym_unquote_splicing] = ACTIONS(355),
    [sym_unsyntax] = ACTIONS(357),
    [sym_unsyntax_splicing] = ACTIONS(355),
  },
  [40] = {
    [sym__skip] = STATE(44),
    [sym_comment] = STATE(44),
    [sym_block_comment] = STATE(44),
    [sym_sexp_comment] = STATE(44),
    [sym__datum] = STATE(59),
    [sym_string] = STATE(59),
    [sym_byte_string] = STATE(59),
    [sym_here_string] = STATE(59),
    [sym_regex] = STATE(59),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(59),
    [sym_symbol] = STATE(59),
    [sym_box] = STATE(59),
    [sym_list] = STATE(59),
    [sym_vector] = STATE(59),
    [sym_structure] = STATE(59),
    [sym_hash] = STATE(59),
    [sym_graph] = STATE(59),
    [sym_quoted] = STATE(59),
    [aux_sym_sexp_comment_repeat1] = STATE(44),
    [aux_sym__skip_token1] = ACTIONS(427),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(431),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(431),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
  },
  [41] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(85),
    [sym_string] = STATE(85),
    [sym_byte_string] = STATE(85),
    [sym_here_string] = STATE(85),
    [sym_regex] = STATE(85),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(85),
    [sym_symbol] = STATE(85),
    [sym_box] = STATE(85),
    [sym_list] = STATE(85),
    [sym_vector] = STATE(85),
    [sym_structure] = STATE(85),
    [sym_hash] = STATE(85),
    [sym_graph] = STATE(85),
    [sym_quoted] = STATE(85),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(435),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(435),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
  },
  [42] = {
    [sym__skip] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym_sexp_comment] = STATE(30),
    [sym__datum] = STATE(123),
    [sym_string] = STATE(123),
    [sym_byte_string] = STATE(123),
    [sym_here_string] = STATE(123),
    [sym_regex] = STATE(123),
    [sym__real_string] = STATE(111),
    [sym_number] = STATE(123),
    [sym_symbol] = STATE(123),
    [sym_box] = STATE(123),
    [sym_list] = STATE(123),
    [sym_vector] = STATE(123),
    [sym_structure] = STATE(123),
    [sym_hash] = STATE(123),
    [sym_graph] = STATE(123),
    [sym_quoted] = STATE(123),
    [aux_sym_sexp_comment_repeat1] = STATE(30),
    [aux_sym__skip_token1] = ACTIONS(437),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(325),
    [anon_sym_POUND_LT_LT] = ACTIONS(327),
    [aux_sym_regex_token1] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_number_token1] = ACTIONS(333),
    [sym_character] = ACTIONS(441),
    [aux_sym_symbol_token1] = ACTIONS(337),
    [sym_keyword] = ACTIONS(441),
    [anon_sym_POUND_AMP] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [anon_sym_POUNDfl] = ACTIONS(347),
    [anon_sym_POUNDfx] = ACTIONS(347),
    [anon_sym_POUNDs] = ACTIONS(349),
    [anon_sym_POUNDhash] = ACTIONS(351),
    [anon_sym_POUNDhasheq] = ACTIONS(351),
    [anon_sym_POUNDhasheqv] = ACTIONS(353),
    [sym_quote] = ACTIONS(355),
    [sym_quasiquote] = ACTIONS(355),
    [sym_syntax] = ACTIONS(355),
    [sym_quasisyntax] = ACTIONS(355),
    [sym_unquote] = ACTIONS(357),
    [sym_unquote_splicing] = ACTIONS(355),
    [sym_unsyntax] = ACTIONS(357),
    [sym_unsyntax_splicing] = ACTIONS(355),
  },
  [43] = {
    [sym__skip] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_block_comment] = STATE(47),
    [sym_sexp_comment] = STATE(47),
    [sym__datum] = STATE(100),
    [sym_string] = STATE(100),
    [sym_byte_string] = STATE(100),
    [sym_here_string] = STATE(100),
    [sym_regex] = STATE(100),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(100),
    [sym_symbol] = STATE(100),
    [sym_box] = STATE(100),
    [sym_list] = STATE(100),
    [sym_vector] = STATE(100),
    [sym_structure] = STATE(100),
    [sym_hash] = STATE(100),
    [sym_graph] = STATE(100),
    [sym_quoted] = STATE(100),
    [aux_sym_sexp_comment_repeat1] = STATE(47),
    [aux_sym__skip_token1] = ACTIONS(443),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(445),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(447),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(447),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
  },
  [44] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(56),
    [sym_string] = STATE(56),
    [sym_byte_string] = STATE(56),
    [sym_here_string] = STATE(56),
    [sym_regex] = STATE(56),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(56),
    [sym_symbol] = STATE(56),
    [sym_box] = STATE(56),
    [sym_list] = STATE(56),
    [sym_vector] = STATE(56),
    [sym_structure] = STATE(56),
    [sym_hash] = STATE(56),
    [sym_graph] = STATE(56),
    [sym_quoted] = STATE(56),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(451),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(451),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
  },
  [45] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(82),
    [sym_string] = STATE(82),
    [sym_byte_string] = STATE(82),
    [sym_here_string] = STATE(82),
    [sym_regex] = STATE(82),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_box] = STATE(82),
    [sym_list] = STATE(82),
    [sym_vector] = STATE(82),
    [sym_structure] = STATE(82),
    [sym_hash] = STATE(82),
    [sym_graph] = STATE(82),
    [sym_quoted] = STATE(82),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(455),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(455),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
  },
  [46] = {
    [sym__skip] = STATE(36),
    [sym_comment] = STATE(36),
    [sym_block_comment] = STATE(36),
    [sym_sexp_comment] = STATE(36),
    [sym__datum] = STATE(107),
    [sym_string] = STATE(107),
    [sym_byte_string] = STATE(107),
    [sym_here_string] = STATE(107),
    [sym_regex] = STATE(107),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(107),
    [sym_symbol] = STATE(107),
    [sym_box] = STATE(107),
    [sym_list] = STATE(107),
    [sym_vector] = STATE(107),
    [sym_structure] = STATE(107),
    [sym_hash] = STATE(107),
    [sym_graph] = STATE(107),
    [sym_quoted] = STATE(107),
    [aux_sym_sexp_comment_repeat1] = STATE(36),
    [aux_sym__skip_token1] = ACTIONS(457),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(459),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(461),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(461),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
  },
  [47] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(83),
    [sym_string] = STATE(83),
    [sym_byte_string] = STATE(83),
    [sym_here_string] = STATE(83),
    [sym_regex] = STATE(83),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(83),
    [sym_symbol] = STATE(83),
    [sym_box] = STATE(83),
    [sym_list] = STATE(83),
    [sym_vector] = STATE(83),
    [sym_structure] = STATE(83),
    [sym_hash] = STATE(83),
    [sym_graph] = STATE(83),
    [sym_quoted] = STATE(83),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(465),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(465),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
  },
  [48] = {
    [sym__skip] = STATE(45),
    [sym_comment] = STATE(45),
    [sym_block_comment] = STATE(45),
    [sym_sexp_comment] = STATE(45),
    [sym__datum] = STATE(101),
    [sym_string] = STATE(101),
    [sym_byte_string] = STATE(101),
    [sym_here_string] = STATE(101),
    [sym_regex] = STATE(101),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(101),
    [sym_symbol] = STATE(101),
    [sym_box] = STATE(101),
    [sym_list] = STATE(101),
    [sym_vector] = STATE(101),
    [sym_structure] = STATE(101),
    [sym_hash] = STATE(101),
    [sym_graph] = STATE(101),
    [sym_quoted] = STATE(101),
    [aux_sym_sexp_comment_repeat1] = STATE(45),
    [aux_sym__skip_token1] = ACTIONS(467),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(471),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(471),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
  },
  [49] = {
    [sym__skip] = STATE(79),
    [sym_comment] = STATE(79),
    [sym_block_comment] = STATE(79),
    [sym_sexp_comment] = STATE(79),
    [sym__datum] = STATE(61),
    [sym_string] = STATE(61),
    [sym_byte_string] = STATE(61),
    [sym_here_string] = STATE(61),
    [sym_regex] = STATE(61),
    [sym__real_string] = STATE(72),
    [sym_number] = STATE(61),
    [sym_symbol] = STATE(61),
    [sym_box] = STATE(61),
    [sym_list] = STATE(61),
    [sym_vector] = STATE(61),
    [sym_structure] = STATE(61),
    [sym_hash] = STATE(61),
    [sym_graph] = STATE(61),
    [sym_quoted] = STATE(61),
    [aux_sym_sexp_comment_repeat1] = STATE(79),
    [aux_sym__skip_token1] = ACTIONS(321),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(137),
    [anon_sym_POUND_LT_LT] = ACTIONS(139),
    [aux_sym_regex_token1] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [aux_sym_number_token1] = ACTIONS(145),
    [sym_character] = ACTIONS(475),
    [aux_sym_symbol_token1] = ACTIONS(147),
    [sym_keyword] = ACTIONS(475),
    [anon_sym_POUND_AMP] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_POUNDfl] = ACTIONS(159),
    [anon_sym_POUNDfx] = ACTIONS(159),
    [anon_sym_POUNDs] = ACTIONS(161),
    [anon_sym_POUNDhash] = ACTIONS(163),
    [anon_sym_POUNDhasheq] = ACTIONS(163),
    [anon_sym_POUNDhasheqv] = ACTIONS(165),
    [sym_quote] = ACTIONS(167),
    [sym_quasiquote] = ACTIONS(167),
    [sym_syntax] = ACTIONS(167),
    [sym_quasisyntax] = ACTIONS(167),
    [sym_unquote] = ACTIONS(169),
    [sym_unquote_splicing] = ACTIONS(167),
    [sym_unsyntax] = ACTIONS(169),
    [sym_unsyntax_splicing] = ACTIONS(167),
  },
  [50] = {
    [sym__skip] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_block_comment] = STATE(41),
    [sym_sexp_comment] = STATE(41),
    [sym__datum] = STATE(84),
    [sym_string] = STATE(84),
    [sym_byte_string] = STATE(84),
    [sym_here_string] = STATE(84),
    [sym_regex] = STATE(84),
    [sym__real_string] = STATE(88),
    [sym_number] = STATE(84),
    [sym_symbol] = STATE(84),
    [sym_box] = STATE(84),
    [sym_list] = STATE(84),
    [sym_vector] = STATE(84),
    [sym_structure] = STATE(84),
    [sym_hash] = STATE(84),
    [sym_graph] = STATE(84),
    [sym_quoted] = STATE(84),
    [aux_sym_sexp_comment_repeat1] = STATE(41),
    [aux_sym__skip_token1] = ACTIONS(477),
    [aux_sym_comment_token1] = ACTIONS(305),
    [anon_sym_POUND_PIPE] = ACTIONS(307),
    [anon_sym_POUND_SEMI] = ACTIONS(309),
    [sym__line_comment] = ACTIONS(305),
    [sym_boolean] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_POUND_LT_LT] = ACTIONS(17),
    [aux_sym_regex_token1] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [sym_character] = ACTIONS(481),
    [aux_sym_symbol_token1] = ACTIONS(25),
    [sym_keyword] = ACTIONS(481),
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
    [sym_quote] = ACTIONS(43),
    [sym_quasiquote] = ACTIONS(43),
    [sym_syntax] = ACTIONS(43),
    [sym_quasisyntax] = ACTIONS(43),
    [sym_unquote] = ACTIONS(45),
    [sym_unquote_splicing] = ACTIONS(43),
    [sym_unsyntax] = ACTIONS(45),
    [sym_unsyntax_splicing] = ACTIONS(43),
  },
  [51] = {
    [aux_sym__skip_token1] = ACTIONS(483),
    [sym_dot] = ACTIONS(485),
    [aux_sym_comment_token1] = ACTIONS(483),
    [anon_sym_POUND_PIPE] = ACTIONS(483),
    [anon_sym_POUND_SEMI] = ACTIONS(483),
    [sym__line_comment] = ACTIONS(483),
    [sym_boolean] = ACTIONS(485),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_POUND_LT_LT] = ACTIONS(483),
    [aux_sym_regex_token1] = ACTIONS(483),
    [anon_sym_DQUOTE] = ACTIONS(483),
    [aux_sym_number_token1] = ACTIONS(485),
    [sym_character] = ACTIONS(483),
    [aux_sym_symbol_token1] = ACTIONS(485),
    [sym_keyword] = ACTIONS(483),
    [anon_sym_POUND_AMP] = ACTIONS(483),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(483),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_POUNDfl] = ACTIONS(483),
    [anon_sym_POUNDfx] = ACTIONS(483),
    [anon_sym_POUNDs] = ACTIONS(483),
    [anon_sym_POUNDhash] = ACTIONS(485),
    [anon_sym_POUNDhasheq] = ACTIONS(485),
    [anon_sym_POUNDhasheqv] = ACTIONS(483),
    [sym_quote] = ACTIONS(483),
    [sym_quasiquote] = ACTIONS(483),
    [sym_syntax] = ACTIONS(483),
    [sym_quasisyntax] = ACTIONS(483),
    [sym_unquote] = ACTIONS(485),
    [sym_unquote_splicing] = ACTIONS(483),
    [sym_unsyntax] = ACTIONS(485),
    [sym_unsyntax_splicing] = ACTIONS(483),
    [anon_sym_POUNDreader] = ACTIONS(483),
    [anon_sym_POUNDlang] = ACTIONS(483),
    [anon_sym_POUND_BANG] = ACTIONS(485),
  },
  [52] = {
    [aux_sym__skip_token1] = ACTIONS(487),
    [sym_dot] = ACTIONS(489),
    [aux_sym_comment_token1] = ACTIONS(487),
    [anon_sym_POUND_PIPE] = ACTIONS(487),
    [anon_sym_POUND_SEMI] = ACTIONS(487),
    [sym__line_comment] = ACTIONS(487),
    [sym_boolean] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(489),
    [anon_sym_POUND_LT_LT] = ACTIONS(487),
    [aux_sym_regex_token1] = ACTIONS(487),
    [anon_sym_DQUOTE] = ACTIONS(487),
    [aux_sym_number_token1] = ACTIONS(489),
    [sym_character] = ACTIONS(487),
    [aux_sym_symbol_token1] = ACTIONS(489),
    [sym_keyword] = ACTIONS(487),
    [anon_sym_POUND_AMP] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_RBRACK] = ACTIONS(487),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_POUNDfl] = ACTIONS(487),
    [anon_sym_POUNDfx] = ACTIONS(487),
    [anon_sym_POUNDs] = ACTIONS(487),
    [anon_sym_POUNDhash] = ACTIONS(489),
    [anon_sym_POUNDhasheq] = ACTIONS(489),
    [anon_sym_POUNDhasheqv] = ACTIONS(487),
    [sym_quote] = ACTIONS(487),
    [sym_quasiquote] = ACTIONS(487),
    [sym_syntax] = ACTIONS(487),
    [sym_quasisyntax] = ACTIONS(487),
    [sym_unquote] = ACTIONS(489),
    [sym_unquote_splicing] = ACTIONS(487),
    [sym_unsyntax] = ACTIONS(489),
    [sym_unsyntax_splicing] = ACTIONS(487),
    [anon_sym_POUNDreader] = ACTIONS(487),
    [anon_sym_POUNDlang] = ACTIONS(487),
    [anon_sym_POUND_BANG] = ACTIONS(489),
  },
  [53] = {
    [aux_sym__skip_token1] = ACTIONS(491),
    [sym_dot] = ACTIONS(493),
    [aux_sym_comment_token1] = ACTIONS(491),
    [anon_sym_POUND_PIPE] = ACTIONS(491),
    [anon_sym_POUND_SEMI] = ACTIONS(491),
    [sym__line_comment] = ACTIONS(491),
    [sym_boolean] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_POUND_LT_LT] = ACTIONS(491),
    [aux_sym_regex_token1] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [aux_sym_number_token1] = ACTIONS(493),
    [sym_character] = ACTIONS(491),
    [aux_sym_symbol_token1] = ACTIONS(493),
    [sym_keyword] = ACTIONS(491),
    [anon_sym_POUND_AMP] = ACTIONS(491),
    [anon_sym_LPAREN] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [anon_sym_LBRACE] = ACTIONS(491),
    [anon_sym_RBRACE] = ACTIONS(491),
    [anon_sym_POUNDfl] = ACTIONS(491),
    [anon_sym_POUNDfx] = ACTIONS(491),
    [anon_sym_POUNDs] = ACTIONS(491),
    [anon_sym_POUNDhash] = ACTIONS(493),
    [anon_sym_POUNDhasheq] = ACTIONS(493),
    [anon_sym_POUNDhasheqv] = ACTIONS(491),
    [sym_quote] = ACTIONS(491),
    [sym_quasiquote] = ACTIONS(491),
    [sym_syntax] = ACTIONS(491),
    [sym_quasisyntax] = ACTIONS(491),
    [sym_unquote] = ACTIONS(493),
    [sym_unquote_splicing] = ACTIONS(491),
    [sym_unsyntax] = ACTIONS(493),
    [sym_unsyntax_splicing] = ACTIONS(491),
    [anon_sym_POUNDreader] = ACTIONS(491),
    [anon_sym_POUNDlang] = ACTIONS(491),
    [anon_sym_POUND_BANG] = ACTIONS(493),
  },
  [54] = {
    [aux_sym__skip_token1] = ACTIONS(495),
    [sym_dot] = ACTIONS(497),
    [aux_sym_comment_token1] = ACTIONS(495),
    [anon_sym_POUND_PIPE] = ACTIONS(495),
    [anon_sym_POUND_SEMI] = ACTIONS(495),
    [sym__line_comment] = ACTIONS(495),
    [sym_boolean] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(497),
    [anon_sym_POUND_LT_LT] = ACTIONS(495),
    [aux_sym_regex_token1] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [aux_sym_number_token1] = ACTIONS(497),
    [sym_character] = ACTIONS(495),
    [aux_sym_symbol_token1] = ACTIONS(497),
    [sym_keyword] = ACTIONS(495),
    [anon_sym_POUND_AMP] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_RBRACK] = ACTIONS(495),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_RBRACE] = ACTIONS(495),
    [anon_sym_POUNDfl] = ACTIONS(495),
    [anon_sym_POUNDfx] = ACTIONS(495),
    [anon_sym_POUNDs] = ACTIONS(495),
    [anon_sym_POUNDhash] = ACTIONS(497),
    [anon_sym_POUNDhasheq] = ACTIONS(497),
    [anon_sym_POUNDhasheqv] = ACTIONS(495),
    [sym_quote] = ACTIONS(495),
    [sym_quasiquote] = ACTIONS(495),
    [sym_syntax] = ACTIONS(495),
    [sym_quasisyntax] = ACTIONS(495),
    [sym_unquote] = ACTIONS(497),
    [sym_unquote_splicing] = ACTIONS(495),
    [sym_unsyntax] = ACTIONS(497),
    [sym_unsyntax_splicing] = ACTIONS(495),
    [anon_sym_POUNDreader] = ACTIONS(495),
    [anon_sym_POUNDlang] = ACTIONS(495),
    [anon_sym_POUND_BANG] = ACTIONS(497),
  },
  [55] = {
    [aux_sym__skip_token1] = ACTIONS(499),
    [sym_dot] = ACTIONS(501),
    [aux_sym_comment_token1] = ACTIONS(499),
    [anon_sym_POUND_PIPE] = ACTIONS(499),
    [anon_sym_POUND_SEMI] = ACTIONS(499),
    [sym__line_comment] = ACTIONS(499),
    [sym_boolean] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(501),
    [anon_sym_POUND_LT_LT] = ACTIONS(499),
    [aux_sym_regex_token1] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [aux_sym_number_token1] = ACTIONS(501),
    [sym_character] = ACTIONS(499),
    [aux_sym_symbol_token1] = ACTIONS(501),
    [sym_keyword] = ACTIONS(499),
    [anon_sym_POUND_AMP] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_RBRACK] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [anon_sym_POUNDfl] = ACTIONS(499),
    [anon_sym_POUNDfx] = ACTIONS(499),
    [anon_sym_POUNDs] = ACTIONS(499),
    [anon_sym_POUNDhash] = ACTIONS(501),
    [anon_sym_POUNDhasheq] = ACTIONS(501),
    [anon_sym_POUNDhasheqv] = ACTIONS(499),
    [sym_quote] = ACTIONS(499),
    [sym_quasiquote] = ACTIONS(499),
    [sym_syntax] = ACTIONS(499),
    [sym_quasisyntax] = ACTIONS(499),
    [sym_unquote] = ACTIONS(501),
    [sym_unquote_splicing] = ACTIONS(499),
    [sym_unsyntax] = ACTIONS(501),
    [sym_unsyntax_splicing] = ACTIONS(499),
    [anon_sym_POUNDreader] = ACTIONS(499),
    [anon_sym_POUNDlang] = ACTIONS(499),
    [anon_sym_POUND_BANG] = ACTIONS(501),
  },
  [56] = {
    [aux_sym__skip_token1] = ACTIONS(503),
    [sym_dot] = ACTIONS(505),
    [aux_sym_comment_token1] = ACTIONS(503),
    [anon_sym_POUND_PIPE] = ACTIONS(503),
    [anon_sym_POUND_SEMI] = ACTIONS(503),
    [sym__line_comment] = ACTIONS(503),
    [sym_boolean] = ACTIONS(505),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_POUND_LT_LT] = ACTIONS(503),
    [aux_sym_regex_token1] = ACTIONS(503),
    [anon_sym_DQUOTE] = ACTIONS(503),
    [aux_sym_number_token1] = ACTIONS(505),
    [sym_character] = ACTIONS(503),
    [aux_sym_symbol_token1] = ACTIONS(505),
    [sym_keyword] = ACTIONS(503),
    [anon_sym_POUND_AMP] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_LBRACK] = ACTIONS(503),
    [anon_sym_RBRACK] = ACTIONS(503),
    [anon_sym_LBRACE] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(503),
    [anon_sym_POUNDfl] = ACTIONS(503),
    [anon_sym_POUNDfx] = ACTIONS(503),
    [anon_sym_POUNDs] = ACTIONS(503),
    [anon_sym_POUNDhash] = ACTIONS(505),
    [anon_sym_POUNDhasheq] = ACTIONS(505),
    [anon_sym_POUNDhasheqv] = ACTIONS(503),
    [sym_quote] = ACTIONS(503),
    [sym_quasiquote] = ACTIONS(503),
    [sym_syntax] = ACTIONS(503),
    [sym_quasisyntax] = ACTIONS(503),
    [sym_unquote] = ACTIONS(505),
    [sym_unquote_splicing] = ACTIONS(503),
    [sym_unsyntax] = ACTIONS(505),
    [sym_unsyntax_splicing] = ACTIONS(503),
    [anon_sym_POUNDreader] = ACTIONS(503),
    [anon_sym_POUNDlang] = ACTIONS(503),
    [anon_sym_POUND_BANG] = ACTIONS(505),
  },
  [57] = {
    [aux_sym__skip_token1] = ACTIONS(507),
    [sym_dot] = ACTIONS(509),
    [aux_sym_comment_token1] = ACTIONS(507),
    [anon_sym_POUND_PIPE] = ACTIONS(507),
    [anon_sym_POUND_SEMI] = ACTIONS(507),
    [sym__line_comment] = ACTIONS(507),
    [sym_boolean] = ACTIONS(509),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_POUND_LT_LT] = ACTIONS(507),
    [aux_sym_regex_token1] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [aux_sym_number_token1] = ACTIONS(509),
    [sym_character] = ACTIONS(507),
    [aux_sym_symbol_token1] = ACTIONS(509),
    [sym_keyword] = ACTIONS(507),
    [anon_sym_POUND_AMP] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [anon_sym_LBRACE] = ACTIONS(507),
    [anon_sym_RBRACE] = ACTIONS(507),
    [anon_sym_POUNDfl] = ACTIONS(507),
    [anon_sym_POUNDfx] = ACTIONS(507),
    [anon_sym_POUNDs] = ACTIONS(507),
    [anon_sym_POUNDhash] = ACTIONS(509),
    [anon_sym_POUNDhasheq] = ACTIONS(509),
    [anon_sym_POUNDhasheqv] = ACTIONS(507),
    [sym_quote] = ACTIONS(507),
    [sym_quasiquote] = ACTIONS(507),
    [sym_syntax] = ACTIONS(507),
    [sym_quasisyntax] = ACTIONS(507),
    [sym_unquote] = ACTIONS(509),
    [sym_unquote_splicing] = ACTIONS(507),
    [sym_unsyntax] = ACTIONS(509),
    [sym_unsyntax_splicing] = ACTIONS(507),
    [anon_sym_POUNDreader] = ACTIONS(507),
    [anon_sym_POUNDlang] = ACTIONS(507),
    [anon_sym_POUND_BANG] = ACTIONS(509),
  },
  [58] = {
    [aux_sym__skip_token1] = ACTIONS(511),
    [sym_dot] = ACTIONS(513),
    [aux_sym_comment_token1] = ACTIONS(511),
    [anon_sym_POUND_PIPE] = ACTIONS(511),
    [anon_sym_POUND_SEMI] = ACTIONS(511),
    [sym__line_comment] = ACTIONS(511),
    [sym_boolean] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(513),
    [anon_sym_POUND_LT_LT] = ACTIONS(511),
    [aux_sym_regex_token1] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [aux_sym_number_token1] = ACTIONS(513),
    [sym_character] = ACTIONS(511),
    [aux_sym_symbol_token1] = ACTIONS(513),
    [sym_keyword] = ACTIONS(511),
    [anon_sym_POUND_AMP] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(511),
    [anon_sym_LBRACE] = ACTIONS(511),
    [anon_sym_RBRACE] = ACTIONS(511),
    [anon_sym_POUNDfl] = ACTIONS(511),
    [anon_sym_POUNDfx] = ACTIONS(511),
    [anon_sym_POUNDs] = ACTIONS(511),
    [anon_sym_POUNDhash] = ACTIONS(513),
    [anon_sym_POUNDhasheq] = ACTIONS(513),
    [anon_sym_POUNDhasheqv] = ACTIONS(511),
    [sym_quote] = ACTIONS(511),
    [sym_quasiquote] = ACTIONS(511),
    [sym_syntax] = ACTIONS(511),
    [sym_quasisyntax] = ACTIONS(511),
    [sym_unquote] = ACTIONS(513),
    [sym_unquote_splicing] = ACTIONS(511),
    [sym_unsyntax] = ACTIONS(513),
    [sym_unsyntax_splicing] = ACTIONS(511),
    [anon_sym_POUNDreader] = ACTIONS(511),
    [anon_sym_POUNDlang] = ACTIONS(511),
    [anon_sym_POUND_BANG] = ACTIONS(513),
  },
  [59] = {
    [aux_sym__skip_token1] = ACTIONS(515),
    [sym_dot] = ACTIONS(517),
    [aux_sym_comment_token1] = ACTIONS(515),
    [anon_sym_POUND_PIPE] = ACTIONS(515),
    [anon_sym_POUND_SEMI] = ACTIONS(515),
    [sym__line_comment] = ACTIONS(515),
    [sym_boolean] = ACTIONS(517),
    [anon_sym_POUND] = ACTIONS(517),
    [anon_sym_POUND_LT_LT] = ACTIONS(515),
    [aux_sym_regex_token1] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [aux_sym_number_token1] = ACTIONS(517),
    [sym_character] = ACTIONS(515),
    [aux_sym_symbol_token1] = ACTIONS(517),
    [sym_keyword] = ACTIONS(515),
    [anon_sym_POUND_AMP] = ACTIONS(515),
    [anon_sym_LPAREN] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(515),
    [anon_sym_RBRACK] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_POUNDfl] = ACTIONS(515),
    [anon_sym_POUNDfx] = ACTIONS(515),
    [anon_sym_POUNDs] = ACTIONS(515),
    [anon_sym_POUNDhash] = ACTIONS(517),
    [anon_sym_POUNDhasheq] = ACTIONS(517),
    [anon_sym_POUNDhasheqv] = ACTIONS(515),
    [sym_quote] = ACTIONS(515),
    [sym_quasiquote] = ACTIONS(515),
    [sym_syntax] = ACTIONS(515),
    [sym_quasisyntax] = ACTIONS(515),
    [sym_unquote] = ACTIONS(517),
    [sym_unquote_splicing] = ACTIONS(515),
    [sym_unsyntax] = ACTIONS(517),
    [sym_unsyntax_splicing] = ACTIONS(515),
    [anon_sym_POUNDreader] = ACTIONS(515),
    [anon_sym_POUNDlang] = ACTIONS(515),
    [anon_sym_POUND_BANG] = ACTIONS(517),
  },
  [60] = {
    [aux_sym__skip_token1] = ACTIONS(519),
    [sym_dot] = ACTIONS(521),
    [aux_sym_comment_token1] = ACTIONS(519),
    [anon_sym_POUND_PIPE] = ACTIONS(519),
    [anon_sym_POUND_SEMI] = ACTIONS(519),
    [sym__line_comment] = ACTIONS(519),
    [sym_boolean] = ACTIONS(521),
    [anon_sym_POUND] = ACTIONS(521),
    [anon_sym_POUND_LT_LT] = ACTIONS(519),
    [aux_sym_regex_token1] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [aux_sym_number_token1] = ACTIONS(521),
    [sym_character] = ACTIONS(519),
    [aux_sym_symbol_token1] = ACTIONS(521),
    [sym_keyword] = ACTIONS(519),
    [anon_sym_POUND_AMP] = ACTIONS(519),
    [anon_sym_LPAREN] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(519),
    [anon_sym_LBRACE] = ACTIONS(519),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_POUNDfl] = ACTIONS(519),
    [anon_sym_POUNDfx] = ACTIONS(519),
    [anon_sym_POUNDs] = ACTIONS(519),
    [anon_sym_POUNDhash] = ACTIONS(521),
    [anon_sym_POUNDhasheq] = ACTIONS(521),
    [anon_sym_POUNDhasheqv] = ACTIONS(519),
    [sym_quote] = ACTIONS(519),
    [sym_quasiquote] = ACTIONS(519),
    [sym_syntax] = ACTIONS(519),
    [sym_quasisyntax] = ACTIONS(519),
    [sym_unquote] = ACTIONS(521),
    [sym_unquote_splicing] = ACTIONS(519),
    [sym_unsyntax] = ACTIONS(521),
    [sym_unsyntax_splicing] = ACTIONS(519),
    [anon_sym_POUNDreader] = ACTIONS(519),
    [anon_sym_POUNDlang] = ACTIONS(519),
    [anon_sym_POUND_BANG] = ACTIONS(521),
  },
  [61] = {
    [aux_sym__skip_token1] = ACTIONS(523),
    [sym_dot] = ACTIONS(525),
    [aux_sym_comment_token1] = ACTIONS(523),
    [anon_sym_POUND_PIPE] = ACTIONS(523),
    [anon_sym_POUND_SEMI] = ACTIONS(523),
    [sym__line_comment] = ACTIONS(523),
    [sym_boolean] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(525),
    [anon_sym_POUND_LT_LT] = ACTIONS(523),
    [aux_sym_regex_token1] = ACTIONS(523),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [aux_sym_number_token1] = ACTIONS(525),
    [sym_character] = ACTIONS(523),
    [aux_sym_symbol_token1] = ACTIONS(525),
    [sym_keyword] = ACTIONS(523),
    [anon_sym_POUND_AMP] = ACTIONS(523),
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(523),
    [anon_sym_LBRACK] = ACTIONS(523),
    [anon_sym_RBRACK] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(523),
    [anon_sym_RBRACE] = ACTIONS(523),
    [anon_sym_POUNDfl] = ACTIONS(523),
    [anon_sym_POUNDfx] = ACTIONS(523),
    [anon_sym_POUNDs] = ACTIONS(523),
    [anon_sym_POUNDhash] = ACTIONS(525),
    [anon_sym_POUNDhasheq] = ACTIONS(525),
    [anon_sym_POUNDhasheqv] = ACTIONS(523),
    [sym_quote] = ACTIONS(523),
    [sym_quasiquote] = ACTIONS(523),
    [sym_syntax] = ACTIONS(523),
    [sym_quasisyntax] = ACTIONS(523),
    [sym_unquote] = ACTIONS(525),
    [sym_unquote_splicing] = ACTIONS(523),
    [sym_unsyntax] = ACTIONS(525),
    [sym_unsyntax_splicing] = ACTIONS(523),
    [anon_sym_POUNDreader] = ACTIONS(523),
    [anon_sym_POUNDlang] = ACTIONS(523),
    [anon_sym_POUND_BANG] = ACTIONS(525),
  },
  [62] = {
    [aux_sym__skip_token1] = ACTIONS(527),
    [sym_dot] = ACTIONS(529),
    [aux_sym_comment_token1] = ACTIONS(527),
    [anon_sym_POUND_PIPE] = ACTIONS(527),
    [anon_sym_POUND_SEMI] = ACTIONS(527),
    [sym__line_comment] = ACTIONS(527),
    [sym_boolean] = ACTIONS(529),
    [anon_sym_POUND] = ACTIONS(529),
    [anon_sym_POUND_LT_LT] = ACTIONS(527),
    [aux_sym_regex_token1] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(527),
    [aux_sym_number_token1] = ACTIONS(529),
    [sym_character] = ACTIONS(527),
    [aux_sym_symbol_token1] = ACTIONS(529),
    [sym_keyword] = ACTIONS(527),
    [anon_sym_POUND_AMP] = ACTIONS(527),
    [anon_sym_LPAREN] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(527),
    [anon_sym_RBRACK] = ACTIONS(527),
    [anon_sym_LBRACE] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_POUNDfl] = ACTIONS(527),
    [anon_sym_POUNDfx] = ACTIONS(527),
    [anon_sym_POUNDs] = ACTIONS(527),
    [anon_sym_POUNDhash] = ACTIONS(529),
    [anon_sym_POUNDhasheq] = ACTIONS(529),
    [anon_sym_POUNDhasheqv] = ACTIONS(527),
    [sym_quote] = ACTIONS(527),
    [sym_quasiquote] = ACTIONS(527),
    [sym_syntax] = ACTIONS(527),
    [sym_quasisyntax] = ACTIONS(527),
    [sym_unquote] = ACTIONS(529),
    [sym_unquote_splicing] = ACTIONS(527),
    [sym_unsyntax] = ACTIONS(529),
    [sym_unsyntax_splicing] = ACTIONS(527),
    [anon_sym_POUNDreader] = ACTIONS(527),
    [anon_sym_POUNDlang] = ACTIONS(527),
    [anon_sym_POUND_BANG] = ACTIONS(529),
  },
  [63] = {
    [aux_sym__skip_token1] = ACTIONS(531),
    [sym_dot] = ACTIONS(533),
    [aux_sym_comment_token1] = ACTIONS(531),
    [anon_sym_POUND_PIPE] = ACTIONS(531),
    [anon_sym_POUND_SEMI] = ACTIONS(531),
    [sym__line_comment] = ACTIONS(531),
    [sym_boolean] = ACTIONS(533),
    [anon_sym_POUND] = ACTIONS(533),
    [anon_sym_POUND_LT_LT] = ACTIONS(531),
    [aux_sym_regex_token1] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [aux_sym_number_token1] = ACTIONS(533),
    [sym_character] = ACTIONS(531),
    [aux_sym_symbol_token1] = ACTIONS(533),
    [sym_keyword] = ACTIONS(531),
    [anon_sym_POUND_AMP] = ACTIONS(531),
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_RBRACK] = ACTIONS(531),
    [anon_sym_LBRACE] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_POUNDfl] = ACTIONS(531),
    [anon_sym_POUNDfx] = ACTIONS(531),
    [anon_sym_POUNDs] = ACTIONS(531),
    [anon_sym_POUNDhash] = ACTIONS(533),
    [anon_sym_POUNDhasheq] = ACTIONS(533),
    [anon_sym_POUNDhasheqv] = ACTIONS(531),
    [sym_quote] = ACTIONS(531),
    [sym_quasiquote] = ACTIONS(531),
    [sym_syntax] = ACTIONS(531),
    [sym_quasisyntax] = ACTIONS(531),
    [sym_unquote] = ACTIONS(533),
    [sym_unquote_splicing] = ACTIONS(531),
    [sym_unsyntax] = ACTIONS(533),
    [sym_unsyntax_splicing] = ACTIONS(531),
    [anon_sym_POUNDreader] = ACTIONS(531),
    [anon_sym_POUNDlang] = ACTIONS(531),
    [anon_sym_POUND_BANG] = ACTIONS(533),
  },
  [64] = {
    [aux_sym__skip_token1] = ACTIONS(535),
    [sym_dot] = ACTIONS(537),
    [aux_sym_comment_token1] = ACTIONS(535),
    [anon_sym_POUND_PIPE] = ACTIONS(535),
    [anon_sym_POUND_SEMI] = ACTIONS(535),
    [sym__line_comment] = ACTIONS(535),
    [sym_boolean] = ACTIONS(537),
    [anon_sym_POUND] = ACTIONS(537),
    [anon_sym_POUND_LT_LT] = ACTIONS(535),
    [aux_sym_regex_token1] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(535),
    [aux_sym_number_token1] = ACTIONS(537),
    [sym_character] = ACTIONS(535),
    [aux_sym_symbol_token1] = ACTIONS(537),
    [sym_keyword] = ACTIONS(535),
    [anon_sym_POUND_AMP] = ACTIONS(535),
    [anon_sym_LPAREN] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_POUNDfl] = ACTIONS(535),
    [anon_sym_POUNDfx] = ACTIONS(535),
    [anon_sym_POUNDs] = ACTIONS(535),
    [anon_sym_POUNDhash] = ACTIONS(537),
    [anon_sym_POUNDhasheq] = ACTIONS(537),
    [anon_sym_POUNDhasheqv] = ACTIONS(535),
    [sym_quote] = ACTIONS(535),
    [sym_quasiquote] = ACTIONS(535),
    [sym_syntax] = ACTIONS(535),
    [sym_quasisyntax] = ACTIONS(535),
    [sym_unquote] = ACTIONS(537),
    [sym_unquote_splicing] = ACTIONS(535),
    [sym_unsyntax] = ACTIONS(537),
    [sym_unsyntax_splicing] = ACTIONS(535),
    [anon_sym_POUNDreader] = ACTIONS(535),
    [anon_sym_POUNDlang] = ACTIONS(535),
    [anon_sym_POUND_BANG] = ACTIONS(537),
  },
  [65] = {
    [aux_sym__skip_token1] = ACTIONS(539),
    [sym_dot] = ACTIONS(541),
    [aux_sym_comment_token1] = ACTIONS(539),
    [anon_sym_POUND_PIPE] = ACTIONS(539),
    [anon_sym_POUND_SEMI] = ACTIONS(539),
    [sym__line_comment] = ACTIONS(539),
    [sym_boolean] = ACTIONS(541),
    [anon_sym_POUND] = ACTIONS(541),
    [anon_sym_POUND_LT_LT] = ACTIONS(539),
    [aux_sym_regex_token1] = ACTIONS(539),
    [anon_sym_DQUOTE] = ACTIONS(539),
    [aux_sym_number_token1] = ACTIONS(541),
    [sym_character] = ACTIONS(539),
    [aux_sym_symbol_token1] = ACTIONS(541),
    [sym_keyword] = ACTIONS(539),
    [anon_sym_POUND_AMP] = ACTIONS(539),
    [anon_sym_LPAREN] = ACTIONS(539),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_RBRACK] = ACTIONS(539),
    [anon_sym_LBRACE] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(539),
    [anon_sym_POUNDfl] = ACTIONS(539),
    [anon_sym_POUNDfx] = ACTIONS(539),
    [anon_sym_POUNDs] = ACTIONS(539),
    [anon_sym_POUNDhash] = ACTIONS(541),
    [anon_sym_POUNDhasheq] = ACTIONS(541),
    [anon_sym_POUNDhasheqv] = ACTIONS(539),
    [sym_quote] = ACTIONS(539),
    [sym_quasiquote] = ACTIONS(539),
    [sym_syntax] = ACTIONS(539),
    [sym_quasisyntax] = ACTIONS(539),
    [sym_unquote] = ACTIONS(541),
    [sym_unquote_splicing] = ACTIONS(539),
    [sym_unsyntax] = ACTIONS(541),
    [sym_unsyntax_splicing] = ACTIONS(539),
    [anon_sym_POUNDreader] = ACTIONS(539),
    [anon_sym_POUNDlang] = ACTIONS(539),
    [anon_sym_POUND_BANG] = ACTIONS(541),
  },
  [66] = {
    [aux_sym__skip_token1] = ACTIONS(543),
    [sym_dot] = ACTIONS(545),
    [aux_sym_comment_token1] = ACTIONS(543),
    [anon_sym_POUND_PIPE] = ACTIONS(543),
    [anon_sym_POUND_SEMI] = ACTIONS(543),
    [sym__line_comment] = ACTIONS(543),
    [sym_boolean] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_POUND_LT_LT] = ACTIONS(543),
    [aux_sym_regex_token1] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [aux_sym_number_token1] = ACTIONS(545),
    [sym_character] = ACTIONS(543),
    [aux_sym_symbol_token1] = ACTIONS(545),
    [sym_keyword] = ACTIONS(543),
    [anon_sym_POUND_AMP] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_POUNDfl] = ACTIONS(543),
    [anon_sym_POUNDfx] = ACTIONS(543),
    [anon_sym_POUNDs] = ACTIONS(543),
    [anon_sym_POUNDhash] = ACTIONS(545),
    [anon_sym_POUNDhasheq] = ACTIONS(545),
    [anon_sym_POUNDhasheqv] = ACTIONS(543),
    [sym_quote] = ACTIONS(543),
    [sym_quasiquote] = ACTIONS(543),
    [sym_syntax] = ACTIONS(543),
    [sym_quasisyntax] = ACTIONS(543),
    [sym_unquote] = ACTIONS(545),
    [sym_unquote_splicing] = ACTIONS(543),
    [sym_unsyntax] = ACTIONS(545),
    [sym_unsyntax_splicing] = ACTIONS(543),
    [anon_sym_POUNDreader] = ACTIONS(543),
    [anon_sym_POUNDlang] = ACTIONS(543),
    [anon_sym_POUND_BANG] = ACTIONS(545),
  },
  [67] = {
    [aux_sym__skip_token1] = ACTIONS(547),
    [sym_dot] = ACTIONS(549),
    [aux_sym_comment_token1] = ACTIONS(547),
    [anon_sym_POUND_PIPE] = ACTIONS(547),
    [anon_sym_POUND_SEMI] = ACTIONS(547),
    [sym__line_comment] = ACTIONS(547),
    [sym_boolean] = ACTIONS(549),
    [anon_sym_POUND] = ACTIONS(549),
    [anon_sym_POUND_LT_LT] = ACTIONS(547),
    [aux_sym_regex_token1] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [aux_sym_number_token1] = ACTIONS(549),
    [sym_character] = ACTIONS(547),
    [aux_sym_symbol_token1] = ACTIONS(549),
    [sym_keyword] = ACTIONS(547),
    [anon_sym_POUND_AMP] = ACTIONS(547),
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_RBRACK] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(547),
    [anon_sym_POUNDfl] = ACTIONS(547),
    [anon_sym_POUNDfx] = ACTIONS(547),
    [anon_sym_POUNDs] = ACTIONS(547),
    [anon_sym_POUNDhash] = ACTIONS(549),
    [anon_sym_POUNDhasheq] = ACTIONS(549),
    [anon_sym_POUNDhasheqv] = ACTIONS(547),
    [sym_quote] = ACTIONS(547),
    [sym_quasiquote] = ACTIONS(547),
    [sym_syntax] = ACTIONS(547),
    [sym_quasisyntax] = ACTIONS(547),
    [sym_unquote] = ACTIONS(549),
    [sym_unquote_splicing] = ACTIONS(547),
    [sym_unsyntax] = ACTIONS(549),
    [sym_unsyntax_splicing] = ACTIONS(547),
    [anon_sym_POUNDreader] = ACTIONS(547),
    [anon_sym_POUNDlang] = ACTIONS(547),
    [anon_sym_POUND_BANG] = ACTIONS(549),
  },
  [68] = {
    [aux_sym__skip_token1] = ACTIONS(551),
    [sym_dot] = ACTIONS(553),
    [aux_sym_comment_token1] = ACTIONS(551),
    [anon_sym_POUND_PIPE] = ACTIONS(551),
    [anon_sym_POUND_SEMI] = ACTIONS(551),
    [sym__line_comment] = ACTIONS(551),
    [sym_boolean] = ACTIONS(553),
    [anon_sym_POUND] = ACTIONS(553),
    [anon_sym_POUND_LT_LT] = ACTIONS(551),
    [aux_sym_regex_token1] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [aux_sym_number_token1] = ACTIONS(553),
    [sym_character] = ACTIONS(551),
    [aux_sym_symbol_token1] = ACTIONS(553),
    [sym_keyword] = ACTIONS(551),
    [anon_sym_POUND_AMP] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_POUNDfl] = ACTIONS(551),
    [anon_sym_POUNDfx] = ACTIONS(551),
    [anon_sym_POUNDs] = ACTIONS(551),
    [anon_sym_POUNDhash] = ACTIONS(553),
    [anon_sym_POUNDhasheq] = ACTIONS(553),
    [anon_sym_POUNDhasheqv] = ACTIONS(551),
    [sym_quote] = ACTIONS(551),
    [sym_quasiquote] = ACTIONS(551),
    [sym_syntax] = ACTIONS(551),
    [sym_quasisyntax] = ACTIONS(551),
    [sym_unquote] = ACTIONS(553),
    [sym_unquote_splicing] = ACTIONS(551),
    [sym_unsyntax] = ACTIONS(553),
    [sym_unsyntax_splicing] = ACTIONS(551),
    [anon_sym_POUNDreader] = ACTIONS(551),
    [anon_sym_POUNDlang] = ACTIONS(551),
    [anon_sym_POUND_BANG] = ACTIONS(553),
  },
  [69] = {
    [aux_sym__skip_token1] = ACTIONS(555),
    [sym_dot] = ACTIONS(557),
    [aux_sym_comment_token1] = ACTIONS(555),
    [anon_sym_POUND_PIPE] = ACTIONS(555),
    [anon_sym_POUND_SEMI] = ACTIONS(555),
    [sym__line_comment] = ACTIONS(555),
    [sym_boolean] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(557),
    [anon_sym_POUND_LT_LT] = ACTIONS(555),
    [aux_sym_regex_token1] = ACTIONS(555),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [aux_sym_number_token1] = ACTIONS(557),
    [sym_character] = ACTIONS(555),
    [aux_sym_symbol_token1] = ACTIONS(557),
    [sym_keyword] = ACTIONS(555),
    [anon_sym_POUND_AMP] = ACTIONS(555),
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(555),
    [anon_sym_RBRACK] = ACTIONS(555),
    [anon_sym_LBRACE] = ACTIONS(555),
    [anon_sym_RBRACE] = ACTIONS(555),
    [anon_sym_POUNDfl] = ACTIONS(555),
    [anon_sym_POUNDfx] = ACTIONS(555),
    [anon_sym_POUNDs] = ACTIONS(555),
    [anon_sym_POUNDhash] = ACTIONS(557),
    [anon_sym_POUNDhasheq] = ACTIONS(557),
    [anon_sym_POUNDhasheqv] = ACTIONS(555),
    [sym_quote] = ACTIONS(555),
    [sym_quasiquote] = ACTIONS(555),
    [sym_syntax] = ACTIONS(555),
    [sym_quasisyntax] = ACTIONS(555),
    [sym_unquote] = ACTIONS(557),
    [sym_unquote_splicing] = ACTIONS(555),
    [sym_unsyntax] = ACTIONS(557),
    [sym_unsyntax_splicing] = ACTIONS(555),
    [anon_sym_POUNDreader] = ACTIONS(555),
    [anon_sym_POUNDlang] = ACTIONS(555),
    [anon_sym_POUND_BANG] = ACTIONS(557),
  },
  [70] = {
    [aux_sym__skip_token1] = ACTIONS(559),
    [sym_dot] = ACTIONS(561),
    [aux_sym_comment_token1] = ACTIONS(559),
    [anon_sym_POUND_PIPE] = ACTIONS(559),
    [anon_sym_POUND_SEMI] = ACTIONS(559),
    [sym__line_comment] = ACTIONS(559),
    [sym_boolean] = ACTIONS(561),
    [anon_sym_POUND] = ACTIONS(561),
    [anon_sym_POUND_LT_LT] = ACTIONS(559),
    [aux_sym_regex_token1] = ACTIONS(559),
    [anon_sym_DQUOTE] = ACTIONS(559),
    [aux_sym_number_token1] = ACTIONS(561),
    [sym_character] = ACTIONS(559),
    [aux_sym_symbol_token1] = ACTIONS(561),
    [sym_keyword] = ACTIONS(559),
    [anon_sym_POUND_AMP] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(559),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_LBRACK] = ACTIONS(559),
    [anon_sym_RBRACK] = ACTIONS(559),
    [anon_sym_LBRACE] = ACTIONS(559),
    [anon_sym_RBRACE] = ACTIONS(559),
    [anon_sym_POUNDfl] = ACTIONS(559),
    [anon_sym_POUNDfx] = ACTIONS(559),
    [anon_sym_POUNDs] = ACTIONS(559),
    [anon_sym_POUNDhash] = ACTIONS(561),
    [anon_sym_POUNDhasheq] = ACTIONS(561),
    [anon_sym_POUNDhasheqv] = ACTIONS(559),
    [sym_quote] = ACTIONS(559),
    [sym_quasiquote] = ACTIONS(559),
    [sym_syntax] = ACTIONS(559),
    [sym_quasisyntax] = ACTIONS(559),
    [sym_unquote] = ACTIONS(561),
    [sym_unquote_splicing] = ACTIONS(559),
    [sym_unsyntax] = ACTIONS(561),
    [sym_unsyntax_splicing] = ACTIONS(559),
    [anon_sym_POUNDreader] = ACTIONS(559),
    [anon_sym_POUNDlang] = ACTIONS(559),
    [anon_sym_POUND_BANG] = ACTIONS(561),
  },
  [71] = {
    [aux_sym__skip_token1] = ACTIONS(563),
    [sym_dot] = ACTIONS(565),
    [aux_sym_comment_token1] = ACTIONS(563),
    [anon_sym_POUND_PIPE] = ACTIONS(563),
    [anon_sym_POUND_SEMI] = ACTIONS(563),
    [sym__line_comment] = ACTIONS(563),
    [sym_boolean] = ACTIONS(565),
    [anon_sym_POUND] = ACTIONS(565),
    [anon_sym_POUND_LT_LT] = ACTIONS(563),
    [aux_sym_regex_token1] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [aux_sym_number_token1] = ACTIONS(565),
    [sym_character] = ACTIONS(563),
    [aux_sym_symbol_token1] = ACTIONS(565),
    [sym_keyword] = ACTIONS(563),
    [anon_sym_POUND_AMP] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_RBRACK] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_RBRACE] = ACTIONS(563),
    [anon_sym_POUNDfl] = ACTIONS(563),
    [anon_sym_POUNDfx] = ACTIONS(563),
    [anon_sym_POUNDs] = ACTIONS(563),
    [anon_sym_POUNDhash] = ACTIONS(565),
    [anon_sym_POUNDhasheq] = ACTIONS(565),
    [anon_sym_POUNDhasheqv] = ACTIONS(563),
    [sym_quote] = ACTIONS(563),
    [sym_quasiquote] = ACTIONS(563),
    [sym_syntax] = ACTIONS(563),
    [sym_quasisyntax] = ACTIONS(563),
    [sym_unquote] = ACTIONS(565),
    [sym_unquote_splicing] = ACTIONS(563),
    [sym_unsyntax] = ACTIONS(565),
    [sym_unsyntax_splicing] = ACTIONS(563),
    [anon_sym_POUNDreader] = ACTIONS(563),
    [anon_sym_POUNDlang] = ACTIONS(563),
    [anon_sym_POUND_BANG] = ACTIONS(565),
  },
  [72] = {
    [aux_sym__skip_token1] = ACTIONS(567),
    [sym_dot] = ACTIONS(569),
    [aux_sym_comment_token1] = ACTIONS(567),
    [anon_sym_POUND_PIPE] = ACTIONS(567),
    [anon_sym_POUND_SEMI] = ACTIONS(567),
    [sym__line_comment] = ACTIONS(567),
    [sym_boolean] = ACTIONS(569),
    [anon_sym_POUND] = ACTIONS(569),
    [anon_sym_POUND_LT_LT] = ACTIONS(567),
    [aux_sym_regex_token1] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(567),
    [aux_sym_number_token1] = ACTIONS(569),
    [sym_character] = ACTIONS(567),
    [aux_sym_symbol_token1] = ACTIONS(569),
    [sym_keyword] = ACTIONS(567),
    [anon_sym_POUND_AMP] = ACTIONS(567),
    [anon_sym_LPAREN] = ACTIONS(567),
    [anon_sym_RPAREN] = ACTIONS(567),
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(567),
    [anon_sym_LBRACE] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(567),
    [anon_sym_POUNDfl] = ACTIONS(567),
    [anon_sym_POUNDfx] = ACTIONS(567),
    [anon_sym_POUNDs] = ACTIONS(567),
    [anon_sym_POUNDhash] = ACTIONS(569),
    [anon_sym_POUNDhasheq] = ACTIONS(569),
    [anon_sym_POUNDhasheqv] = ACTIONS(567),
    [sym_quote] = ACTIONS(567),
    [sym_quasiquote] = ACTIONS(567),
    [sym_syntax] = ACTIONS(567),
    [sym_quasisyntax] = ACTIONS(567),
    [sym_unquote] = ACTIONS(569),
    [sym_unquote_splicing] = ACTIONS(567),
    [sym_unsyntax] = ACTIONS(569),
    [sym_unsyntax_splicing] = ACTIONS(567),
    [anon_sym_POUNDreader] = ACTIONS(567),
    [anon_sym_POUNDlang] = ACTIONS(567),
    [anon_sym_POUND_BANG] = ACTIONS(569),
  },
  [73] = {
    [aux_sym__skip_token1] = ACTIONS(571),
    [sym_dot] = ACTIONS(573),
    [aux_sym_comment_token1] = ACTIONS(571),
    [anon_sym_POUND_PIPE] = ACTIONS(571),
    [anon_sym_POUND_SEMI] = ACTIONS(571),
    [sym__line_comment] = ACTIONS(571),
    [sym_boolean] = ACTIONS(573),
    [anon_sym_POUND] = ACTIONS(573),
    [anon_sym_POUND_LT_LT] = ACTIONS(571),
    [aux_sym_regex_token1] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [aux_sym_number_token1] = ACTIONS(573),
    [sym_character] = ACTIONS(571),
    [aux_sym_symbol_token1] = ACTIONS(573),
    [sym_keyword] = ACTIONS(571),
    [anon_sym_POUND_AMP] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(571),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(571),
    [anon_sym_LBRACE] = ACTIONS(571),
    [anon_sym_RBRACE] = ACTIONS(571),
    [anon_sym_POUNDfl] = ACTIONS(571),
    [anon_sym_POUNDfx] = ACTIONS(571),
    [anon_sym_POUNDs] = ACTIONS(571),
    [anon_sym_POUNDhash] = ACTIONS(573),
    [anon_sym_POUNDhasheq] = ACTIONS(573),
    [anon_sym_POUNDhasheqv] = ACTIONS(571),
    [sym_quote] = ACTIONS(571),
    [sym_quasiquote] = ACTIONS(571),
    [sym_syntax] = ACTIONS(571),
    [sym_quasisyntax] = ACTIONS(571),
    [sym_unquote] = ACTIONS(573),
    [sym_unquote_splicing] = ACTIONS(571),
    [sym_unsyntax] = ACTIONS(573),
    [sym_unsyntax_splicing] = ACTIONS(571),
    [anon_sym_POUNDreader] = ACTIONS(571),
    [anon_sym_POUNDlang] = ACTIONS(571),
    [anon_sym_POUND_BANG] = ACTIONS(573),
  },
  [74] = {
    [aux_sym__skip_token1] = ACTIONS(575),
    [sym_dot] = ACTIONS(577),
    [aux_sym_comment_token1] = ACTIONS(575),
    [anon_sym_POUND_PIPE] = ACTIONS(575),
    [anon_sym_POUND_SEMI] = ACTIONS(575),
    [sym__line_comment] = ACTIONS(575),
    [sym_boolean] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(577),
    [anon_sym_POUND_LT_LT] = ACTIONS(575),
    [aux_sym_regex_token1] = ACTIONS(575),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [aux_sym_number_token1] = ACTIONS(577),
    [sym_character] = ACTIONS(575),
    [aux_sym_symbol_token1] = ACTIONS(577),
    [sym_keyword] = ACTIONS(575),
    [anon_sym_POUND_AMP] = ACTIONS(575),
    [anon_sym_LPAREN] = ACTIONS(575),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_POUNDfl] = ACTIONS(575),
    [anon_sym_POUNDfx] = ACTIONS(575),
    [anon_sym_POUNDs] = ACTIONS(575),
    [anon_sym_POUNDhash] = ACTIONS(577),
    [anon_sym_POUNDhasheq] = ACTIONS(577),
    [anon_sym_POUNDhasheqv] = ACTIONS(575),
    [sym_quote] = ACTIONS(575),
    [sym_quasiquote] = ACTIONS(575),
    [sym_syntax] = ACTIONS(575),
    [sym_quasisyntax] = ACTIONS(575),
    [sym_unquote] = ACTIONS(577),
    [sym_unquote_splicing] = ACTIONS(575),
    [sym_unsyntax] = ACTIONS(577),
    [sym_unsyntax_splicing] = ACTIONS(575),
    [anon_sym_POUNDreader] = ACTIONS(575),
    [anon_sym_POUNDlang] = ACTIONS(575),
    [anon_sym_POUND_BANG] = ACTIONS(577),
  },
  [75] = {
    [aux_sym__skip_token1] = ACTIONS(579),
    [sym_dot] = ACTIONS(581),
    [aux_sym_comment_token1] = ACTIONS(579),
    [anon_sym_POUND_PIPE] = ACTIONS(579),
    [anon_sym_POUND_SEMI] = ACTIONS(579),
    [sym__line_comment] = ACTIONS(579),
    [sym_boolean] = ACTIONS(581),
    [anon_sym_POUND] = ACTIONS(581),
    [anon_sym_POUND_LT_LT] = ACTIONS(579),
    [aux_sym_regex_token1] = ACTIONS(579),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [aux_sym_number_token1] = ACTIONS(581),
    [sym_character] = ACTIONS(579),
    [aux_sym_symbol_token1] = ACTIONS(581),
    [sym_keyword] = ACTIONS(579),
    [anon_sym_POUND_AMP] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_RBRACK] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_POUNDfl] = ACTIONS(579),
    [anon_sym_POUNDfx] = ACTIONS(579),
    [anon_sym_POUNDs] = ACTIONS(579),
    [anon_sym_POUNDhash] = ACTIONS(581),
    [anon_sym_POUNDhasheq] = ACTIONS(581),
    [anon_sym_POUNDhasheqv] = ACTIONS(579),
    [sym_quote] = ACTIONS(579),
    [sym_quasiquote] = ACTIONS(579),
    [sym_syntax] = ACTIONS(579),
    [sym_quasisyntax] = ACTIONS(579),
    [sym_unquote] = ACTIONS(581),
    [sym_unquote_splicing] = ACTIONS(579),
    [sym_unsyntax] = ACTIONS(581),
    [sym_unsyntax_splicing] = ACTIONS(579),
    [anon_sym_POUNDreader] = ACTIONS(579),
    [anon_sym_POUNDlang] = ACTIONS(579),
    [anon_sym_POUND_BANG] = ACTIONS(581),
  },
  [76] = {
    [aux_sym__skip_token1] = ACTIONS(583),
    [sym_dot] = ACTIONS(585),
    [aux_sym_comment_token1] = ACTIONS(583),
    [anon_sym_POUND_PIPE] = ACTIONS(583),
    [anon_sym_POUND_SEMI] = ACTIONS(583),
    [sym__line_comment] = ACTIONS(583),
    [sym_boolean] = ACTIONS(585),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_POUND_LT_LT] = ACTIONS(583),
    [aux_sym_regex_token1] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [aux_sym_number_token1] = ACTIONS(585),
    [sym_character] = ACTIONS(583),
    [aux_sym_symbol_token1] = ACTIONS(585),
    [sym_keyword] = ACTIONS(583),
    [anon_sym_POUND_AMP] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_LBRACK] = ACTIONS(583),
    [anon_sym_RBRACK] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_POUNDfl] = ACTIONS(583),
    [anon_sym_POUNDfx] = ACTIONS(583),
    [anon_sym_POUNDs] = ACTIONS(583),
    [anon_sym_POUNDhash] = ACTIONS(585),
    [anon_sym_POUNDhasheq] = ACTIONS(585),
    [anon_sym_POUNDhasheqv] = ACTIONS(583),
    [sym_quote] = ACTIONS(583),
    [sym_quasiquote] = ACTIONS(583),
    [sym_syntax] = ACTIONS(583),
    [sym_quasisyntax] = ACTIONS(583),
    [sym_unquote] = ACTIONS(585),
    [sym_unquote_splicing] = ACTIONS(583),
    [sym_unsyntax] = ACTIONS(585),
    [sym_unsyntax_splicing] = ACTIONS(583),
    [anon_sym_POUNDreader] = ACTIONS(583),
    [anon_sym_POUNDlang] = ACTIONS(583),
    [anon_sym_POUND_BANG] = ACTIONS(585),
  },
  [77] = {
    [aux_sym__skip_token1] = ACTIONS(587),
    [sym_dot] = ACTIONS(589),
    [aux_sym_comment_token1] = ACTIONS(587),
    [anon_sym_POUND_PIPE] = ACTIONS(587),
    [anon_sym_POUND_SEMI] = ACTIONS(587),
    [sym__line_comment] = ACTIONS(587),
    [sym_boolean] = ACTIONS(589),
    [anon_sym_POUND] = ACTIONS(589),
    [anon_sym_POUND_LT_LT] = ACTIONS(587),
    [aux_sym_regex_token1] = ACTIONS(587),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [aux_sym_number_token1] = ACTIONS(589),
    [sym_character] = ACTIONS(587),
    [aux_sym_symbol_token1] = ACTIONS(589),
    [sym_keyword] = ACTIONS(587),
    [anon_sym_POUND_AMP] = ACTIONS(587),
    [anon_sym_LPAREN] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_LBRACK] = ACTIONS(587),
    [anon_sym_RBRACK] = ACTIONS(587),
    [anon_sym_LBRACE] = ACTIONS(587),
    [anon_sym_RBRACE] = ACTIONS(587),
    [anon_sym_POUNDfl] = ACTIONS(587),
    [anon_sym_POUNDfx] = ACTIONS(587),
    [anon_sym_POUNDs] = ACTIONS(587),
    [anon_sym_POUNDhash] = ACTIONS(589),
    [anon_sym_POUNDhasheq] = ACTIONS(589),
    [anon_sym_POUNDhasheqv] = ACTIONS(587),
    [sym_quote] = ACTIONS(587),
    [sym_quasiquote] = ACTIONS(587),
    [sym_syntax] = ACTIONS(587),
    [sym_quasisyntax] = ACTIONS(587),
    [sym_unquote] = ACTIONS(589),
    [sym_unquote_splicing] = ACTIONS(587),
    [sym_unsyntax] = ACTIONS(589),
    [sym_unsyntax_splicing] = ACTIONS(587),
    [anon_sym_POUNDreader] = ACTIONS(587),
    [anon_sym_POUNDlang] = ACTIONS(587),
    [anon_sym_POUND_BANG] = ACTIONS(589),
  },
  [78] = {
    [aux_sym__skip_token1] = ACTIONS(591),
    [sym_dot] = ACTIONS(593),
    [aux_sym_comment_token1] = ACTIONS(591),
    [anon_sym_POUND_PIPE] = ACTIONS(591),
    [anon_sym_POUND_SEMI] = ACTIONS(591),
    [sym__line_comment] = ACTIONS(591),
    [sym_boolean] = ACTIONS(593),
    [anon_sym_POUND] = ACTIONS(593),
    [anon_sym_POUND_LT_LT] = ACTIONS(591),
    [aux_sym_regex_token1] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [aux_sym_number_token1] = ACTIONS(593),
    [sym_character] = ACTIONS(591),
    [aux_sym_symbol_token1] = ACTIONS(593),
    [sym_keyword] = ACTIONS(591),
    [anon_sym_POUND_AMP] = ACTIONS(591),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_RBRACK] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(591),
    [anon_sym_POUNDfl] = ACTIONS(591),
    [anon_sym_POUNDfx] = ACTIONS(591),
    [anon_sym_POUNDs] = ACTIONS(591),
    [anon_sym_POUNDhash] = ACTIONS(593),
    [anon_sym_POUNDhasheq] = ACTIONS(593),
    [anon_sym_POUNDhasheqv] = ACTIONS(591),
    [sym_quote] = ACTIONS(591),
    [sym_quasiquote] = ACTIONS(591),
    [sym_syntax] = ACTIONS(591),
    [sym_quasisyntax] = ACTIONS(591),
    [sym_unquote] = ACTIONS(593),
    [sym_unquote_splicing] = ACTIONS(591),
    [sym_unsyntax] = ACTIONS(593),
    [sym_unsyntax_splicing] = ACTIONS(591),
    [anon_sym_POUNDreader] = ACTIONS(591),
    [anon_sym_POUNDlang] = ACTIONS(591),
    [anon_sym_POUND_BANG] = ACTIONS(593),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(595), 1,
      aux_sym__skip_token1,
    ACTIONS(601), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(604), 1,
      anon_sym_POUND_SEMI,
    ACTIONS(598), 2,
      aux_sym_comment_token1,
      sym__line_comment,
    STATE(79), 5,
      sym__skip,
      sym_comment,
      sym_block_comment,
      sym_sexp_comment,
      aux_sym_sexp_comment_repeat1,
    ACTIONS(607), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(609), 19,
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
    ACTIONS(541), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(539), 27,
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
    ACTIONS(561), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(559), 27,
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
    ACTIONS(521), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(519), 27,
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
    ACTIONS(525), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(523), 27,
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
    ACTIONS(537), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(535), 27,
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
    ACTIONS(557), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(555), 27,
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
    ACTIONS(549), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(547), 27,
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
    ACTIONS(553), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(551), 27,
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
    ACTIONS(569), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(567), 27,
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
    ACTIONS(565), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(563), 27,
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
    ACTIONS(513), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(511), 27,
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
    ACTIONS(573), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(571), 27,
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
    ACTIONS(505), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(503), 27,
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
    ACTIONS(497), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(495), 27,
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
    ACTIONS(485), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(483), 27,
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
    ACTIONS(501), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(499), 27,
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
    ACTIONS(509), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(507), 27,
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
    ACTIONS(581), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(579), 27,
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
    ACTIONS(585), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(583), 27,
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
    ACTIONS(493), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(491), 27,
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
    ACTIONS(577), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(575), 27,
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
    ACTIONS(489), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(487), 27,
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
    ACTIONS(533), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(531), 27,
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
    ACTIONS(589), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(587), 27,
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
    ACTIONS(545), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(543), 27,
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
    ACTIONS(593), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(591), 27,
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
    ACTIONS(529), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(527), 27,
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
  [1159] = 2,
    ACTIONS(517), 9,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
      anon_sym_POUND_BANG,
    ACTIONS(515), 27,
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
  [1200] = 2,
    ACTIONS(485), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(483), 24,
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
  [1237] = 2,
    ACTIONS(557), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(555), 24,
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
  [1274] = 2,
    ACTIONS(553), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(551), 24,
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
  [1311] = 2,
    ACTIONS(569), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(567), 24,
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
  [1348] = 2,
    ACTIONS(513), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(511), 24,
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
  [1385] = 2,
    ACTIONS(549), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(547), 24,
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
  [1422] = 2,
    ACTIONS(585), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(583), 24,
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
  [1459] = 2,
    ACTIONS(589), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(587), 24,
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
  [1496] = 2,
    ACTIONS(593), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(591), 24,
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
  [1533] = 2,
    ACTIONS(545), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(543), 24,
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
  [1570] = 2,
    ACTIONS(561), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(559), 24,
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
  [1607] = 2,
    ACTIONS(517), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(515), 24,
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
  [1644] = 2,
    ACTIONS(529), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(527), 24,
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
  [1681] = 2,
    ACTIONS(533), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(531), 24,
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
  [1718] = 2,
    ACTIONS(541), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(539), 24,
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
  [1755] = 2,
    ACTIONS(489), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(487), 24,
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
  [1792] = 2,
    ACTIONS(493), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(491), 24,
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
  [1829] = 2,
    ACTIONS(565), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(563), 24,
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
  [1866] = 2,
    ACTIONS(509), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(507), 24,
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
  [1903] = 2,
    ACTIONS(573), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(571), 24,
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
  [1940] = 2,
    ACTIONS(501), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(499), 24,
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
  [1977] = 2,
    ACTIONS(581), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(579), 24,
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
  [2014] = 2,
    ACTIONS(505), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(503), 24,
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
  [2051] = 2,
    ACTIONS(497), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(495), 24,
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
  [2088] = 2,
    ACTIONS(521), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(519), 24,
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
  [2125] = 2,
    ACTIONS(537), 8,
      sym_boolean,
      anon_sym_POUND,
      aux_sym_number_token1,
      aux_sym_symbol_token1,
      anon_sym_POUNDhash,
      anon_sym_POUNDhasheq,
      sym_unquote,
      sym_unsyntax,
    ACTIONS(535), 24,
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
  [2162] = 7,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    ACTIONS(611), 1,
      sym_decimal,
    STATE(114), 1,
      sym__real_string,
    STATE(115), 1,
      sym_list,
  [2184] = 7,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(613), 1,
      sym_decimal,
    STATE(76), 1,
      sym__real_string,
    STATE(77), 1,
      sym_list,
  [2206] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(615), 1,
      sym_decimal,
    STATE(98), 1,
      sym__real_string,
    STATE(103), 1,
      sym_list,
  [2228] = 6,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(617), 1,
      anon_sym_POUND,
    ACTIONS(619), 1,
      anon_sym_EQ,
    STATE(55), 1,
      sym_list,
  [2247] = 6,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    ACTIONS(621), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      anon_sym_EQ,
    STATE(128), 1,
      sym_list,
  [2266] = 6,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(625), 1,
      anon_sym_POUND,
    ACTIONS(627), 1,
      anon_sym_EQ,
    STATE(95), 1,
      sym_list,
  [2285] = 4,
    ACTIONS(629), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(631), 1,
      aux_sym_block_comment_token1,
    ACTIONS(633), 1,
      anon_sym_PIPE_POUND,
    STATE(148), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2299] = 4,
    ACTIONS(629), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(631), 1,
      aux_sym_block_comment_token1,
    ACTIONS(635), 1,
      anon_sym_PIPE_POUND,
    STATE(148), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2313] = 4,
    ACTIONS(629), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(637), 1,
      aux_sym_block_comment_token1,
    ACTIONS(639), 1,
      anon_sym_PIPE_POUND,
    STATE(151), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2327] = 4,
    ACTIONS(629), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(641), 1,
      aux_sym_block_comment_token1,
    ACTIONS(643), 1,
      anon_sym_PIPE_POUND,
    STATE(140), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2341] = 4,
    ACTIONS(629), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(645), 1,
      aux_sym_block_comment_token1,
    ACTIONS(647), 1,
      anon_sym_PIPE_POUND,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2355] = 4,
    ACTIONS(629), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(631), 1,
      aux_sym_block_comment_token1,
    ACTIONS(649), 1,
      anon_sym_PIPE_POUND,
    STATE(148), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2369] = 5,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    ACTIONS(651), 1,
      sym_decimal,
    STATE(115), 1,
      sym_list,
  [2385] = 5,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(653), 1,
      sym_decimal,
    STATE(77), 1,
      sym_list,
  [2401] = 4,
    ACTIONS(655), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(658), 1,
      aux_sym_block_comment_token1,
    ACTIONS(661), 1,
      anon_sym_PIPE_POUND,
    STATE(148), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2415] = 4,
    ACTIONS(629), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(663), 1,
      aux_sym_block_comment_token1,
    ACTIONS(665), 1,
      anon_sym_PIPE_POUND,
    STATE(145), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2429] = 5,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(667), 1,
      sym_decimal,
    STATE(103), 1,
      sym_list,
  [2445] = 4,
    ACTIONS(629), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(631), 1,
      aux_sym_block_comment_token1,
    ACTIONS(669), 1,
      anon_sym_PIPE_POUND,
    STATE(148), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2459] = 4,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      sym_list,
  [2472] = 3,
    ACTIONS(671), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(673), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2483] = 3,
    ACTIONS(675), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(677), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2494] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_list,
  [2507] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_list,
  [2520] = 4,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_list,
  [2533] = 3,
    ACTIONS(679), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(681), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2544] = 4,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_list,
  [2557] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_list,
  [2570] = 3,
    ACTIONS(684), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(677), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2581] = 4,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_list,
  [2594] = 3,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(688), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2605] = 3,
    ACTIONS(690), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(692), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2616] = 3,
    ACTIONS(694), 1,
      anon_sym_DQUOTE,
    STATE(158), 1,
      aux_sym__real_string_repeat1,
    ACTIONS(677), 2,
      aux_sym__real_string_token1,
      sym_escape_sequence,
  [2627] = 4,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_list,
  [2640] = 4,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_list,
  [2653] = 2,
    ACTIONS(493), 1,
      aux_sym_block_comment_token1,
    ACTIONS(491), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2661] = 2,
    ACTIONS(513), 1,
      aux_sym_block_comment_token1,
    ACTIONS(511), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [2669] = 2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym__real_string,
  [2676] = 2,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym__real_string,
  [2683] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym__real_string,
  [2690] = 1,
    ACTIONS(447), 1,
      sym_lang_name,
  [2694] = 1,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
  [2698] = 1,
    ACTIONS(393), 1,
      sym_lang_name,
  [2702] = 1,
    ACTIONS(698), 1,
      sym__here_string_body,
  [2706] = 1,
    ACTIONS(700), 1,
      sym__here_string_body,
  [2710] = 1,
    ACTIONS(702), 1,
      sym__here_string_body,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(79)] = 0,
  [SMALL_STATE(80)] = 52,
  [SMALL_STATE(81)] = 93,
  [SMALL_STATE(82)] = 134,
  [SMALL_STATE(83)] = 175,
  [SMALL_STATE(84)] = 216,
  [SMALL_STATE(85)] = 257,
  [SMALL_STATE(86)] = 298,
  [SMALL_STATE(87)] = 339,
  [SMALL_STATE(88)] = 380,
  [SMALL_STATE(89)] = 421,
  [SMALL_STATE(90)] = 462,
  [SMALL_STATE(91)] = 503,
  [SMALL_STATE(92)] = 544,
  [SMALL_STATE(93)] = 585,
  [SMALL_STATE(94)] = 626,
  [SMALL_STATE(95)] = 667,
  [SMALL_STATE(96)] = 708,
  [SMALL_STATE(97)] = 749,
  [SMALL_STATE(98)] = 790,
  [SMALL_STATE(99)] = 831,
  [SMALL_STATE(100)] = 872,
  [SMALL_STATE(101)] = 913,
  [SMALL_STATE(102)] = 954,
  [SMALL_STATE(103)] = 995,
  [SMALL_STATE(104)] = 1036,
  [SMALL_STATE(105)] = 1077,
  [SMALL_STATE(106)] = 1118,
  [SMALL_STATE(107)] = 1159,
  [SMALL_STATE(108)] = 1200,
  [SMALL_STATE(109)] = 1237,
  [SMALL_STATE(110)] = 1274,
  [SMALL_STATE(111)] = 1311,
  [SMALL_STATE(112)] = 1348,
  [SMALL_STATE(113)] = 1385,
  [SMALL_STATE(114)] = 1422,
  [SMALL_STATE(115)] = 1459,
  [SMALL_STATE(116)] = 1496,
  [SMALL_STATE(117)] = 1533,
  [SMALL_STATE(118)] = 1570,
  [SMALL_STATE(119)] = 1607,
  [SMALL_STATE(120)] = 1644,
  [SMALL_STATE(121)] = 1681,
  [SMALL_STATE(122)] = 1718,
  [SMALL_STATE(123)] = 1755,
  [SMALL_STATE(124)] = 1792,
  [SMALL_STATE(125)] = 1829,
  [SMALL_STATE(126)] = 1866,
  [SMALL_STATE(127)] = 1903,
  [SMALL_STATE(128)] = 1940,
  [SMALL_STATE(129)] = 1977,
  [SMALL_STATE(130)] = 2014,
  [SMALL_STATE(131)] = 2051,
  [SMALL_STATE(132)] = 2088,
  [SMALL_STATE(133)] = 2125,
  [SMALL_STATE(134)] = 2162,
  [SMALL_STATE(135)] = 2184,
  [SMALL_STATE(136)] = 2206,
  [SMALL_STATE(137)] = 2228,
  [SMALL_STATE(138)] = 2247,
  [SMALL_STATE(139)] = 2266,
  [SMALL_STATE(140)] = 2285,
  [SMALL_STATE(141)] = 2299,
  [SMALL_STATE(142)] = 2313,
  [SMALL_STATE(143)] = 2327,
  [SMALL_STATE(144)] = 2341,
  [SMALL_STATE(145)] = 2355,
  [SMALL_STATE(146)] = 2369,
  [SMALL_STATE(147)] = 2385,
  [SMALL_STATE(148)] = 2401,
  [SMALL_STATE(149)] = 2415,
  [SMALL_STATE(150)] = 2429,
  [SMALL_STATE(151)] = 2445,
  [SMALL_STATE(152)] = 2459,
  [SMALL_STATE(153)] = 2472,
  [SMALL_STATE(154)] = 2483,
  [SMALL_STATE(155)] = 2494,
  [SMALL_STATE(156)] = 2507,
  [SMALL_STATE(157)] = 2520,
  [SMALL_STATE(158)] = 2533,
  [SMALL_STATE(159)] = 2544,
  [SMALL_STATE(160)] = 2557,
  [SMALL_STATE(161)] = 2570,
  [SMALL_STATE(162)] = 2581,
  [SMALL_STATE(163)] = 2594,
  [SMALL_STATE(164)] = 2605,
  [SMALL_STATE(165)] = 2616,
  [SMALL_STATE(166)] = 2627,
  [SMALL_STATE(167)] = 2640,
  [SMALL_STATE(168)] = 2653,
  [SMALL_STATE(169)] = 2661,
  [SMALL_STATE(170)] = 2669,
  [SMALL_STATE(171)] = 2676,
  [SMALL_STATE(172)] = 2683,
  [SMALL_STATE(173)] = 2690,
  [SMALL_STATE(174)] = 2694,
  [SMALL_STATE(175)] = 2698,
  [SMALL_STATE(176)] = 2702,
  [SMALL_STATE(177)] = 2706,
  [SMALL_STATE(178)] = 2710,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(71),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(143),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(38),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(135),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(177),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(171),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(164),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(67),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(68),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(40),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(18),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(147),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(167),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(159),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(159),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(37),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(37),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(33),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(175),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(175),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(144),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(136),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(176),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(170),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(153),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(86),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(11),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(150),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(156),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(155),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(155),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(173),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(173),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 3),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_box, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_box, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 3),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure, 2),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 4),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hash, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graph, 5),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_graph, 5),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_string, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_string, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extension, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extension, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexp_comment, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexp_comment, 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte_string, 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_byte_string, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_here_string, 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_here_string, 2),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(79),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(125),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(149),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2), SHIFT_REPEAT(39),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexp_comment_repeat1, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(142),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(148),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__real_string_repeat1, 2), SHIFT_REPEAT(158),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [696] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
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
