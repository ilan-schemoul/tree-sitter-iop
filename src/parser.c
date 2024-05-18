#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_union = 2,
  anon_sym_enum = 3,
  anon_sym_class = 4,
  anon_sym_struct = 5,
  sym_identifier = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_int = 9,
  anon_sym_string = 10,
  anon_sym_uint = 11,
  anon_sym_long = 12,
  anon_sym_ulong = 13,
  anon_sym_byte = 14,
  anon_sym_ubyte = 15,
  anon_sym_short = 16,
  anon_sym_ushort = 17,
  anon_sym_bool = 18,
  anon_sym_double = 19,
  anon_sym_bytes = 20,
  anon_sym_xml = 21,
  anon_sym_void = 22,
  sym_source_file = 23,
  sym_data_structure_definition = 24,
  sym_data_structure_type = 25,
  sym_block = 26,
  sym_field = 27,
  sym_field_type = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_block_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_union] = "union",
  [anon_sym_enum] = "enum",
  [anon_sym_class] = "class",
  [anon_sym_struct] = "struct",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_int] = "int",
  [anon_sym_string] = "string",
  [anon_sym_uint] = "uint",
  [anon_sym_long] = "long",
  [anon_sym_ulong] = "ulong",
  [anon_sym_byte] = "byte",
  [anon_sym_ubyte] = "ubyte",
  [anon_sym_short] = "short",
  [anon_sym_ushort] = "ushort",
  [anon_sym_bool] = "bool",
  [anon_sym_double] = "double",
  [anon_sym_bytes] = "bytes",
  [anon_sym_xml] = "xml",
  [anon_sym_void] = "void",
  [sym_source_file] = "source_file",
  [sym_data_structure_definition] = "data_structure_definition",
  [sym_data_structure_type] = "data_structure_type",
  [sym_block] = "block",
  [sym_field] = "field",
  [sym_field_type] = "field_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_struct] = anon_sym_struct,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_ulong] = anon_sym_ulong,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_ubyte] = anon_sym_ubyte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_ushort] = anon_sym_ushort,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_xml] = anon_sym_xml,
  [anon_sym_void] = anon_sym_void,
  [sym_source_file] = sym_source_file,
  [sym_data_structure_definition] = sym_data_structure_definition,
  [sym_data_structure_type] = sym_data_structure_type,
  [sym_block] = sym_block,
  [sym_field] = sym_field,
  [sym_field_type] = sym_field_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ubyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        ';', 57,
        'b', 36,
        'c', 18,
        'd', 31,
        'e', 27,
        'i', 26,
        'l', 35,
        's', 13,
        'u', 2,
        'v', 33,
        'x', 23,
        '{', 104,
        '}', 105,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        'b', 90,
        'd', 84,
        'i', 80,
        'l', 86,
        's', 71,
        'u', 62,
        'v', 85,
        'x', 78,
        '}', 105,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 10:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(1);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 55:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 'y') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_xml);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_ulong] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_ubyte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_ushort] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(19),
    [sym_data_structure_definition] = STATE(6),
    [sym_data_structure_type] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_union] = ACTIONS(5),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(5),
  },
  [2] = {
    [sym_field] = STATE(2),
    [sym_field_type] = STATE(12),
    [aux_sym_block_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(10),
    [anon_sym_int] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_uint] = ACTIONS(7),
    [anon_sym_long] = ACTIONS(7),
    [anon_sym_ulong] = ACTIONS(7),
    [anon_sym_byte] = ACTIONS(7),
    [anon_sym_ubyte] = ACTIONS(7),
    [anon_sym_short] = ACTIONS(7),
    [anon_sym_ushort] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_double] = ACTIONS(7),
    [anon_sym_bytes] = ACTIONS(7),
    [anon_sym_xml] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(7),
  },
  [3] = {
    [sym_field] = STATE(4),
    [sym_field_type] = STATE(12),
    [aux_sym_block_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(14),
    [anon_sym_int] = ACTIONS(12),
    [anon_sym_string] = ACTIONS(12),
    [anon_sym_uint] = ACTIONS(12),
    [anon_sym_long] = ACTIONS(12),
    [anon_sym_ulong] = ACTIONS(12),
    [anon_sym_byte] = ACTIONS(12),
    [anon_sym_ubyte] = ACTIONS(12),
    [anon_sym_short] = ACTIONS(12),
    [anon_sym_ushort] = ACTIONS(12),
    [anon_sym_bool] = ACTIONS(12),
    [anon_sym_double] = ACTIONS(12),
    [anon_sym_bytes] = ACTIONS(12),
    [anon_sym_xml] = ACTIONS(12),
    [anon_sym_void] = ACTIONS(12),
  },
  [4] = {
    [sym_field] = STATE(2),
    [sym_field_type] = STATE(12),
    [aux_sym_block_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(16),
    [anon_sym_int] = ACTIONS(12),
    [anon_sym_string] = ACTIONS(12),
    [anon_sym_uint] = ACTIONS(12),
    [anon_sym_long] = ACTIONS(12),
    [anon_sym_ulong] = ACTIONS(12),
    [anon_sym_byte] = ACTIONS(12),
    [anon_sym_ubyte] = ACTIONS(12),
    [anon_sym_short] = ACTIONS(12),
    [anon_sym_ushort] = ACTIONS(12),
    [anon_sym_bool] = ACTIONS(12),
    [anon_sym_double] = ACTIONS(12),
    [anon_sym_bytes] = ACTIONS(12),
    [anon_sym_xml] = ACTIONS(12),
    [anon_sym_void] = ACTIONS(12),
  },
  [5] = {
    [sym_identifier] = ACTIONS(18),
    [anon_sym_RBRACE] = ACTIONS(20),
    [anon_sym_int] = ACTIONS(18),
    [anon_sym_string] = ACTIONS(18),
    [anon_sym_uint] = ACTIONS(18),
    [anon_sym_long] = ACTIONS(18),
    [anon_sym_ulong] = ACTIONS(18),
    [anon_sym_byte] = ACTIONS(18),
    [anon_sym_ubyte] = ACTIONS(18),
    [anon_sym_short] = ACTIONS(18),
    [anon_sym_ushort] = ACTIONS(18),
    [anon_sym_bool] = ACTIONS(18),
    [anon_sym_double] = ACTIONS(18),
    [anon_sym_bytes] = ACTIONS(18),
    [anon_sym_xml] = ACTIONS(18),
    [anon_sym_void] = ACTIONS(18),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_data_structure_type,
    STATE(7), 2,
      sym_data_structure_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 4,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_struct,
  [17] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_data_structure_type,
    STATE(7), 2,
      sym_data_structure_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(26), 4,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_struct,
  [34] = 1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_union,
      anon_sym_enum,
      anon_sym_class,
      anon_sym_struct,
  [42] = 2,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [49] = 1,
    ACTIONS(33), 1,
      sym_identifier,
  [53] = 1,
    ACTIONS(35), 1,
      anon_sym_SEMI,
  [57] = 1,
    ACTIONS(37), 1,
      sym_identifier,
  [61] = 1,
    ACTIONS(39), 1,
      sym_identifier,
  [65] = 1,
    ACTIONS(41), 1,
      anon_sym_SEMI,
  [69] = 1,
    ACTIONS(43), 1,
      anon_sym_SEMI,
  [73] = 1,
    ACTIONS(45), 1,
      anon_sym_SEMI,
  [77] = 1,
    ACTIONS(47), 1,
      anon_sym_SEMI,
  [81] = 1,
    ACTIONS(49), 1,
      sym_identifier,
  [85] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
  [89] = 1,
    ACTIONS(53), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 17,
  [SMALL_STATE(8)] = 34,
  [SMALL_STATE(9)] = 42,
  [SMALL_STATE(10)] = 49,
  [SMALL_STATE(11)] = 53,
  [SMALL_STATE(12)] = 57,
  [SMALL_STATE(13)] = 61,
  [SMALL_STATE(14)] = 65,
  [SMALL_STATE(15)] = 69,
  [SMALL_STATE(16)] = 73,
  [SMALL_STATE(17)] = 77,
  [SMALL_STATE(18)] = 81,
  [SMALL_STATE(19)] = 85,
  [SMALL_STATE(20)] = 89,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [10] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [12] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 4, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_type, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_type, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_iop(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
