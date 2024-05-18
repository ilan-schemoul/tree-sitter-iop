#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_import = 1,
  anon_sym_SEMI = 2,
  sym_path = 3,
  anon_sym_module = 4,
  anon_sym_COLON = 5,
  anon_sym_COMMA = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_comment = 9,
  anon_sym_enum = 10,
  anon_sym_EQ = 11,
  aux_sym_number_token1 = 12,
  aux_sym_number_token2 = 13,
  aux_sym_number_token3 = 14,
  anon_sym_LT_LT = 15,
  anon_sym_GT_GT = 16,
  anon_sym_STAR_STAR = 17,
  anon_sym_STAR = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_SLASH = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_typedef = 24,
  anon_sym_interface = 25,
  anon_sym_in = 26,
  anon_sym_out = 27,
  anon_sym_null = 28,
  anon_sym_void = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_throw = 32,
  anon_sym_package = 33,
  anon_sym_union = 34,
  anon_sym_class = 35,
  anon_sym_struct = 36,
  sym_identifier = 37,
  anon_sym_int = 38,
  anon_sym_string = 39,
  anon_sym_uint = 40,
  anon_sym_long = 41,
  anon_sym_ulong = 42,
  anon_sym_byte = 43,
  anon_sym_ubyte = 44,
  anon_sym_short = 45,
  anon_sym_ushort = 46,
  anon_sym_bool = 47,
  anon_sym_double = 48,
  anon_sym_bytes = 49,
  anon_sym_xml = 50,
  anon_sym_QMARK = 51,
  anon_sym_AMP = 52,
  anon_sym_LBRACK_RBRACK = 53,
  sym_source_file = 54,
  sym_import_statement = 55,
  sym_module_declaration = 56,
  sym_module_inheritance = 57,
  sym_module_block = 58,
  sym_module_field = 59,
  sym_enum_definition = 60,
  sym_default_value = 61,
  sym_value = 62,
  sym_number = 63,
  sym_operator = 64,
  sym_enum_block = 65,
  sym_enum_field = 66,
  sym_typedef_declaration = 67,
  sym_interface_declaration = 68,
  sym_rpcs = 69,
  sym_rpc = 70,
  sym_rpc_in = 71,
  sym_rpc_out = 72,
  sym_argument_list = 73,
  sym_argument = 74,
  sym_rpc_throw = 75,
  sym_data_structure_definition = 76,
  sym_package_statement = 77,
  sym_data_structure_type = 78,
  sym_data_structure_block = 79,
  sym_field = 80,
  sym_variable = 81,
  sym_primitive_type = 82,
  sym_type_specifier = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_module_inheritance_repeat1 = 85,
  aux_sym_module_block_repeat1 = 86,
  aux_sym_value_repeat1 = 87,
  aux_sym_enum_block_repeat1 = 88,
  aux_sym_rpcs_repeat1 = 89,
  aux_sym_argument_list_repeat1 = 90,
  aux_sym_data_structure_block_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_SEMI] = ";",
  [sym_path] = "path",
  [anon_sym_module] = "module",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [anon_sym_enum] = "enum",
  [anon_sym_EQ] = "=",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_typedef] = "typedef",
  [anon_sym_interface] = "interface",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_null] = "null",
  [anon_sym_void] = "void",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_throw] = "throw",
  [anon_sym_package] = "package",
  [anon_sym_union] = "union",
  [anon_sym_class] = "class",
  [anon_sym_struct] = "struct",
  [sym_identifier] = "identifier",
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
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [sym_source_file] = "source_file",
  [sym_import_statement] = "import_statement",
  [sym_module_declaration] = "module_declaration",
  [sym_module_inheritance] = "module_inheritance",
  [sym_module_block] = "module_block",
  [sym_module_field] = "module_field",
  [sym_enum_definition] = "enum_definition",
  [sym_default_value] = "default_value",
  [sym_value] = "value",
  [sym_number] = "number",
  [sym_operator] = "operator",
  [sym_enum_block] = "enum_block",
  [sym_enum_field] = "enum_field",
  [sym_typedef_declaration] = "typedef_declaration",
  [sym_interface_declaration] = "interface_declaration",
  [sym_rpcs] = "rpcs",
  [sym_rpc] = "rpc",
  [sym_rpc_in] = "rpc_in",
  [sym_rpc_out] = "rpc_out",
  [sym_argument_list] = "argument_list",
  [sym_argument] = "argument",
  [sym_rpc_throw] = "rpc_throw",
  [sym_data_structure_definition] = "data_structure_definition",
  [sym_package_statement] = "package_statement",
  [sym_data_structure_type] = "data_structure_type",
  [sym_data_structure_block] = "data_structure_block",
  [sym_field] = "field",
  [sym_variable] = "variable",
  [sym_primitive_type] = "primitive_type",
  [sym_type_specifier] = "type_specifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_inheritance_repeat1] = "module_inheritance_repeat1",
  [aux_sym_module_block_repeat1] = "module_block_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_enum_block_repeat1] = "enum_block_repeat1",
  [aux_sym_rpcs_repeat1] = "rpcs_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_data_structure_block_repeat1] = "data_structure_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_path] = sym_path,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_struct] = anon_sym_struct,
  [sym_identifier] = sym_identifier,
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
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym_import_statement] = sym_import_statement,
  [sym_module_declaration] = sym_module_declaration,
  [sym_module_inheritance] = sym_module_inheritance,
  [sym_module_block] = sym_module_block,
  [sym_module_field] = sym_module_field,
  [sym_enum_definition] = sym_enum_definition,
  [sym_default_value] = sym_default_value,
  [sym_value] = sym_value,
  [sym_number] = sym_number,
  [sym_operator] = sym_operator,
  [sym_enum_block] = sym_enum_block,
  [sym_enum_field] = sym_enum_field,
  [sym_typedef_declaration] = sym_typedef_declaration,
  [sym_interface_declaration] = sym_interface_declaration,
  [sym_rpcs] = sym_rpcs,
  [sym_rpc] = sym_rpc,
  [sym_rpc_in] = sym_rpc_in,
  [sym_rpc_out] = sym_rpc_out,
  [sym_argument_list] = sym_argument_list,
  [sym_argument] = sym_argument,
  [sym_rpc_throw] = sym_rpc_throw,
  [sym_data_structure_definition] = sym_data_structure_definition,
  [sym_package_statement] = sym_package_statement,
  [sym_data_structure_type] = sym_data_structure_type,
  [sym_data_structure_block] = sym_data_structure_block,
  [sym_field] = sym_field,
  [sym_variable] = sym_variable,
  [sym_primitive_type] = sym_primitive_type,
  [sym_type_specifier] = sym_type_specifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_inheritance_repeat1] = aux_sym_module_inheritance_repeat1,
  [aux_sym_module_block_repeat1] = aux_sym_module_block_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_enum_block_repeat1] = aux_sym_enum_block_repeat1,
  [aux_sym_rpcs_repeat1] = aux_sym_rpcs_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_data_structure_block_repeat1] = aux_sym_data_structure_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
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
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
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
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_inheritance] = {
    .visible = true,
    .named = true,
  },
  [sym_module_block] = {
    .visible = true,
    .named = true,
  },
  [sym_module_field] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_block] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_rpcs] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_in] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_out] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_throw] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_package_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_type] = {
    .visible = true,
    .named = true,
  },
  [sym_data_structure_block] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_inheritance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpcs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_structure_block_repeat1] = {
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
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
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
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(132);
      ADVANCE_MAP(
        '&', 249,
        '(', 173,
        ')', 174,
        '*', 159,
        '+', 160,
        ',', 138,
        '-', 161,
        '.', 124,
        '/', 162,
        '0', 152,
        ':', 137,
        ';', 134,
        '<', 19,
        '=', 146,
        '>', 20,
        '?', 248,
        '[', 21,
      );
      if (lookahead == '\\') SKIP(128);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'v') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '{') ADVANCE(139);
      if (lookahead == '}') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(10);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(18);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\r') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(249);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == '}') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'b') ADVANCE(208);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == 'v') ADVANCE(203);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == '}') ADVANCE(140);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == 'i') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(156);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(250);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(224);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 120:
      if (lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 123:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 127:
      if (eof) ADVANCE(132);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 128:
      if (eof) ADVANCE(132);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(127);
      END_STATE();
    case 129:
      if (eof) ADVANCE(132);
      if (lookahead == '\n') SKIP(131);
      END_STATE();
    case 130:
      if (eof) ADVANCE(132);
      if (lookahead == '\n') SKIP(131);
      if (lookahead == '\r') SKIP(129);
      END_STATE();
    case 131:
      if (eof) ADVANCE(132);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(130);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(154);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '0') ADVANCE(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(205);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'y') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(244);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_xml);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 131},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 131},
  [9] = {.lex_state = 131},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 131},
  [20] = {.lex_state = 131},
  [21] = {.lex_state = 131},
  [22] = {.lex_state = 131},
  [23] = {.lex_state = 131},
  [24] = {.lex_state = 131},
  [25] = {.lex_state = 131},
  [26] = {.lex_state = 131},
  [27] = {.lex_state = 131},
  [28] = {.lex_state = 131},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 18},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
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
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(106),
    [sym_import_statement] = STATE(9),
    [sym_module_declaration] = STATE(9),
    [sym_enum_definition] = STATE(9),
    [sym_typedef_declaration] = STATE(9),
    [sym_interface_declaration] = STATE(9),
    [sym_data_structure_definition] = STATE(9),
    [sym_package_statement] = STATE(9),
    [sym_data_structure_type] = STATE(105),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_typedef] = ACTIONS(13),
    [anon_sym_interface] = ACTIONS(15),
    [anon_sym_package] = ACTIONS(17),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_struct] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_primitive_type,
    STATE(82), 1,
      sym_variable,
    STATE(2), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(23), 15,
      anon_sym_void,
      sym_identifier,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
  [34] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_argument_list_repeat1,
    STATE(29), 1,
      sym_primitive_type,
    STATE(98), 1,
      sym_variable,
    STATE(112), 1,
      sym_argument,
    ACTIONS(26), 15,
      anon_sym_void,
      sym_identifier,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
  [70] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_primitive_type,
    STATE(82), 1,
      sym_variable,
    STATE(7), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(33), 15,
      anon_sym_void,
      sym_identifier,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
  [104] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_argument_list_repeat1,
    STATE(29), 1,
      sym_primitive_type,
    STATE(59), 1,
      sym_argument,
    STATE(98), 1,
      sym_variable,
    ACTIONS(33), 15,
      anon_sym_void,
      sym_identifier,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
  [140] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_argument_list_repeat1,
    STATE(29), 1,
      sym_primitive_type,
    STATE(67), 1,
      sym_argument,
    STATE(98), 1,
      sym_variable,
    ACTIONS(33), 15,
      anon_sym_void,
      sym_identifier,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
  [176] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_primitive_type,
    STATE(82), 1,
      sym_variable,
    STATE(2), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(33), 15,
      anon_sym_void,
      sym_identifier,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
  [210] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_import,
    ACTIONS(46), 1,
      anon_sym_module,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(52), 1,
      anon_sym_typedef,
    ACTIONS(55), 1,
      anon_sym_interface,
    ACTIONS(58), 1,
      anon_sym_package,
    STATE(105), 1,
      sym_data_structure_type,
    ACTIONS(61), 3,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
    STATE(8), 8,
      sym_import_statement,
      sym_module_declaration,
      sym_enum_definition,
      sym_typedef_declaration,
      sym_interface_declaration,
      sym_data_structure_definition,
      sym_package_statement,
      aux_sym_source_file_repeat1,
  [253] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_module,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_typedef,
    ACTIONS(15), 1,
      anon_sym_interface,
    ACTIONS(17), 1,
      anon_sym_package,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym_data_structure_type,
    ACTIONS(19), 3,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
    STATE(8), 8,
      sym_import_statement,
      sym_module_declaration,
      sym_enum_definition,
      sym_typedef_declaration,
      sym_interface_declaration,
      sym_data_structure_definition,
      sym_package_statement,
      aux_sym_source_file_repeat1,
  [296] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_number_token1,
    ACTIONS(66), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(70), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(74), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(11), 3,
      sym_number,
      sym_operator,
      aux_sym_value_repeat1,
    ACTIONS(72), 6,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
  [329] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_number_token1,
    ACTIONS(76), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(81), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(11), 3,
      sym_number,
      sym_operator,
      aux_sym_value_repeat1,
    ACTIONS(84), 6,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
  [362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(29), 1,
      sym_primitive_type,
    STATE(102), 1,
      sym_variable,
    ACTIONS(33), 15,
      anon_sym_void,
      sym_identifier,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
  [389] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_number_token1,
    STATE(54), 1,
      sym_value,
    ACTIONS(70), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(74), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    STATE(10), 3,
      sym_number,
      sym_operator,
      aux_sym_value_repeat1,
    ACTIONS(72), 6,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
  [421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 15,
      anon_sym_void,
      sym_identifier,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
  [445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(94), 15,
      anon_sym_void,
      sym_identifier,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
  [469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 15,
      anon_sym_void,
      sym_identifier,
      anon_sym_int,
      anon_sym_string,
      anon_sym_uint,
      anon_sym_long,
      anon_sym_ulong,
      anon_sym_byte,
      anon_sym_ubyte,
      anon_sym_short,
      anon_sym_ushort,
      anon_sym_bool,
      anon_sym_double,
      anon_sym_bytes,
      anon_sym_xml,
  [493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(100), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
  [515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(104), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
  [537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 10,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_typedef,
      anon_sym_interface,
      anon_sym_package,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_identifier,
    STATE(95), 1,
      sym_type_specifier,
    ACTIONS(130), 3,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
  [712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    ACTIONS(134), 1,
      anon_sym_out,
    ACTIONS(136), 1,
      anon_sym_throw,
    STATE(47), 1,
      sym_rpc_out,
    STATE(90), 1,
      sym_rpc_throw,
  [731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(34), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(32), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [759] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_enum_block_repeat1,
    STATE(85), 1,
      sym_enum_field,
  [775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(34), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(31), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym_enum_block_repeat1,
    STATE(85), 1,
      sym_enum_field,
  [819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_COLON,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_module_inheritance,
    STATE(99), 1,
      sym_module_block,
  [835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      sym_identifier,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
  [845] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_enum_block_repeat1,
    STATE(85), 1,
      sym_enum_field,
  [861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(171), 2,
      anon_sym_null,
      anon_sym_void,
  [875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(32), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_EQ,
    STATE(80), 1,
      sym_default_value,
  [934] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_EQ,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      sym_default_value,
  [947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_throw,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      sym_rpc_throw,
  [960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
  [988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_in,
    STATE(30), 1,
      sym_rpc_in,
  [998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_SEMI,
      anon_sym_throw,
  [1006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_module_inheritance_repeat1,
  [1016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_enum_block,
  [1034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
  [1044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_module_block,
  [1054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_module_inheritance_repeat1,
  [1064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      anon_sym_COMMA,
  [1074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_rpcs,
  [1108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_argument_list,
  [1118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_data_structure_block,
  [1136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
  [1146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_module_inheritance_repeat1,
  [1156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SEMI,
  [1179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SEMI,
  [1186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_identifier,
  [1193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_SEMI,
  [1200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SEMI,
  [1207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_SEMI,
  [1214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SEMI,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_COMMA,
  [1228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_SEMI,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COMMA,
  [1242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_path,
  [1249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
  [1256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_SEMI,
  [1263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_SEMI,
  [1270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
  [1277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SEMI,
  [1284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SEMI,
  [1291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_identifier,
  [1298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
  [1305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SEMI,
  [1312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_SEMI,
  [1319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_SEMI,
  [1326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SEMI,
  [1333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
  [1340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_identifier,
  [1347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_identifier,
  [1354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_SEMI,
  [1361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_identifier,
  [1368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_SEMI,
  [1375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_SEMI,
  [1382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_SEMI,
  [1389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_identifier,
  [1396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SEMI,
  [1403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
  [1410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_identifier,
  [1417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
  [1424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_identifier,
  [1431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
  [1438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_identifier,
  [1445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_identifier,
  [1452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_identifier,
  [1459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 176,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 253,
  [SMALL_STATE(10)] = 296,
  [SMALL_STATE(11)] = 329,
  [SMALL_STATE(12)] = 362,
  [SMALL_STATE(13)] = 389,
  [SMALL_STATE(14)] = 421,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 469,
  [SMALL_STATE(17)] = 493,
  [SMALL_STATE(18)] = 515,
  [SMALL_STATE(19)] = 537,
  [SMALL_STATE(20)] = 553,
  [SMALL_STATE(21)] = 569,
  [SMALL_STATE(22)] = 585,
  [SMALL_STATE(23)] = 601,
  [SMALL_STATE(24)] = 617,
  [SMALL_STATE(25)] = 633,
  [SMALL_STATE(26)] = 649,
  [SMALL_STATE(27)] = 665,
  [SMALL_STATE(28)] = 681,
  [SMALL_STATE(29)] = 697,
  [SMALL_STATE(30)] = 712,
  [SMALL_STATE(31)] = 731,
  [SMALL_STATE(32)] = 745,
  [SMALL_STATE(33)] = 759,
  [SMALL_STATE(34)] = 775,
  [SMALL_STATE(35)] = 789,
  [SMALL_STATE(36)] = 803,
  [SMALL_STATE(37)] = 819,
  [SMALL_STATE(38)] = 835,
  [SMALL_STATE(39)] = 845,
  [SMALL_STATE(40)] = 861,
  [SMALL_STATE(41)] = 875,
  [SMALL_STATE(42)] = 889,
  [SMALL_STATE(43)] = 903,
  [SMALL_STATE(44)] = 912,
  [SMALL_STATE(45)] = 921,
  [SMALL_STATE(46)] = 934,
  [SMALL_STATE(47)] = 947,
  [SMALL_STATE(48)] = 960,
  [SMALL_STATE(49)] = 969,
  [SMALL_STATE(50)] = 978,
  [SMALL_STATE(51)] = 988,
  [SMALL_STATE(52)] = 998,
  [SMALL_STATE(53)] = 1006,
  [SMALL_STATE(54)] = 1016,
  [SMALL_STATE(55)] = 1024,
  [SMALL_STATE(56)] = 1034,
  [SMALL_STATE(57)] = 1044,
  [SMALL_STATE(58)] = 1054,
  [SMALL_STATE(59)] = 1064,
  [SMALL_STATE(60)] = 1074,
  [SMALL_STATE(61)] = 1082,
  [SMALL_STATE(62)] = 1090,
  [SMALL_STATE(63)] = 1098,
  [SMALL_STATE(64)] = 1108,
  [SMALL_STATE(65)] = 1118,
  [SMALL_STATE(66)] = 1126,
  [SMALL_STATE(67)] = 1136,
  [SMALL_STATE(68)] = 1146,
  [SMALL_STATE(69)] = 1156,
  [SMALL_STATE(70)] = 1164,
  [SMALL_STATE(71)] = 1172,
  [SMALL_STATE(72)] = 1179,
  [SMALL_STATE(73)] = 1186,
  [SMALL_STATE(74)] = 1193,
  [SMALL_STATE(75)] = 1200,
  [SMALL_STATE(76)] = 1207,
  [SMALL_STATE(77)] = 1214,
  [SMALL_STATE(78)] = 1221,
  [SMALL_STATE(79)] = 1228,
  [SMALL_STATE(80)] = 1235,
  [SMALL_STATE(81)] = 1242,
  [SMALL_STATE(82)] = 1249,
  [SMALL_STATE(83)] = 1256,
  [SMALL_STATE(84)] = 1263,
  [SMALL_STATE(85)] = 1270,
  [SMALL_STATE(86)] = 1277,
  [SMALL_STATE(87)] = 1284,
  [SMALL_STATE(88)] = 1291,
  [SMALL_STATE(89)] = 1298,
  [SMALL_STATE(90)] = 1305,
  [SMALL_STATE(91)] = 1312,
  [SMALL_STATE(92)] = 1319,
  [SMALL_STATE(93)] = 1326,
  [SMALL_STATE(94)] = 1333,
  [SMALL_STATE(95)] = 1340,
  [SMALL_STATE(96)] = 1347,
  [SMALL_STATE(97)] = 1354,
  [SMALL_STATE(98)] = 1361,
  [SMALL_STATE(99)] = 1368,
  [SMALL_STATE(100)] = 1375,
  [SMALL_STATE(101)] = 1382,
  [SMALL_STATE(102)] = 1389,
  [SMALL_STATE(103)] = 1396,
  [SMALL_STATE(104)] = 1403,
  [SMALL_STATE(105)] = 1410,
  [SMALL_STATE(106)] = 1417,
  [SMALL_STATE(107)] = 1424,
  [SMALL_STATE(108)] = 1431,
  [SMALL_STATE(109)] = 1438,
  [SMALL_STATE(110)] = 1445,
  [SMALL_STATE(111)] = 1452,
  [SMALL_STATE(112)] = 1459,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_declaration, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_declaration, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 5, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_statement, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_in, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_out, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 2, 0, 0),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 5, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 4, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_throw, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [302] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_type, 1, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
