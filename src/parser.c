#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_package = 1,
  anon_sym_SEMI = 2,
  anon_sym_typedef = 3,
  anon_sym_import = 4,
  sym_path = 5,
  anon_sym_module = 6,
  anon_sym_COLON = 7,
  anon_sym_COMMA = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_enum = 11,
  anon_sym_EQ = 12,
  anon_sym_interface = 13,
  anon_sym_in = 14,
  anon_sym_out = 15,
  anon_sym_null = 16,
  anon_sym_void = 17,
  anon_sym_throw = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_union = 21,
  anon_sym_class = 22,
  anon_sym_struct = 23,
  anon_sym_int = 24,
  anon_sym_string = 25,
  anon_sym_uint = 26,
  anon_sym_long = 27,
  anon_sym_ulong = 28,
  anon_sym_byte = 29,
  anon_sym_ubyte = 30,
  anon_sym_short = 31,
  anon_sym_ushort = 32,
  anon_sym_bool = 33,
  anon_sym_double = 34,
  anon_sym_bytes = 35,
  anon_sym_xml = 36,
  anon_sym_QMARK = 37,
  anon_sym_AMP = 38,
  anon_sym_LBRACK_RBRACK = 39,
  aux_sym_number_token1 = 40,
  aux_sym_number_token2 = 41,
  aux_sym_number_token3 = 42,
  anon_sym_LT_LT = 43,
  anon_sym_GT_GT = 44,
  anon_sym_STAR_STAR = 45,
  anon_sym_STAR = 46,
  anon_sym_PLUS = 47,
  anon_sym_DASH = 48,
  anon_sym_SLASH = 49,
  anon_sym_true = 50,
  anon_sym_false = 51,
  sym_identifier = 52,
  sym_comment = 53,
  sym_source_file = 54,
  sym_package_definition = 55,
  sym_typedef_definition = 56,
  sym_import_definition = 57,
  sym_module_definition = 58,
  sym_module_inheritance = 59,
  sym_module_block = 60,
  sym_module_field = 61,
  sym_enum_definition = 62,
  sym_enum_block = 63,
  sym_enum_field = 64,
  sym_default_value = 65,
  sym_interface_definition = 66,
  sym_rpcs = 67,
  sym_rpc = 68,
  sym_rpc_in = 69,
  sym_rpc_out = 70,
  sym_rpc_throw = 71,
  sym_argument_list = 72,
  sym_data_structure_definition = 73,
  sym_data_structure_type = 74,
  sym_data_structure_block = 75,
  sym_field = 76,
  sym_variable = 77,
  sym_primitive_type = 78,
  sym_type_specifier = 79,
  sym_value = 80,
  sym_number = 81,
  sym_operator = 82,
  sym_constant = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_module_inheritance_repeat1 = 85,
  aux_sym_module_block_repeat1 = 86,
  aux_sym_enum_block_repeat1 = 87,
  aux_sym_rpcs_repeat1 = 88,
  aux_sym_argument_list_repeat1 = 89,
  aux_sym_data_structure_block_repeat1 = 90,
  aux_sym_value_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_SEMI] = ";",
  [anon_sym_typedef] = "typedef",
  [anon_sym_import] = "import",
  [sym_path] = "path",
  [anon_sym_module] = "module",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_enum] = "enum",
  [anon_sym_EQ] = "=",
  [anon_sym_interface] = "interface",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_null] = "null",
  [anon_sym_void] = "void",
  [anon_sym_throw] = "throw",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_union] = "union",
  [anon_sym_class] = "class",
  [anon_sym_struct] = "struct",
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
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_package_definition] = "package_definition",
  [sym_typedef_definition] = "typedef_definition",
  [sym_import_definition] = "import_definition",
  [sym_module_definition] = "module_definition",
  [sym_module_inheritance] = "module_inheritance",
  [sym_module_block] = "module_block",
  [sym_module_field] = "module_field",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_block] = "enum_block",
  [sym_enum_field] = "enum_field",
  [sym_default_value] = "default_value",
  [sym_interface_definition] = "interface_definition",
  [sym_rpcs] = "rpcs",
  [sym_rpc] = "rpc",
  [sym_rpc_in] = "rpc_in",
  [sym_rpc_out] = "rpc_out",
  [sym_rpc_throw] = "rpc_throw",
  [sym_argument_list] = "argument_list",
  [sym_data_structure_definition] = "data_structure_definition",
  [sym_data_structure_type] = "data_structure_type",
  [sym_data_structure_block] = "data_structure_block",
  [sym_field] = "field",
  [sym_variable] = "variable",
  [sym_primitive_type] = "primitive_type",
  [sym_type_specifier] = "type_specifier",
  [sym_value] = "value",
  [sym_number] = "number",
  [sym_operator] = "operator",
  [sym_constant] = "constant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_inheritance_repeat1] = "module_inheritance_repeat1",
  [aux_sym_module_block_repeat1] = "module_block_repeat1",
  [aux_sym_enum_block_repeat1] = "enum_block_repeat1",
  [aux_sym_rpcs_repeat1] = "rpcs_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_data_structure_block_repeat1] = "data_structure_block_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_import] = anon_sym_import,
  [sym_path] = sym_path,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_struct] = anon_sym_struct,
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
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_package_definition] = sym_package_definition,
  [sym_typedef_definition] = sym_typedef_definition,
  [sym_import_definition] = sym_import_definition,
  [sym_module_definition] = sym_module_definition,
  [sym_module_inheritance] = sym_module_inheritance,
  [sym_module_block] = sym_module_block,
  [sym_module_field] = sym_module_field,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_block] = sym_enum_block,
  [sym_enum_field] = sym_enum_field,
  [sym_default_value] = sym_default_value,
  [sym_interface_definition] = sym_interface_definition,
  [sym_rpcs] = sym_rpcs,
  [sym_rpc] = sym_rpc,
  [sym_rpc_in] = sym_rpc_in,
  [sym_rpc_out] = sym_rpc_out,
  [sym_rpc_throw] = sym_rpc_throw,
  [sym_argument_list] = sym_argument_list,
  [sym_data_structure_definition] = sym_data_structure_definition,
  [sym_data_structure_type] = sym_data_structure_type,
  [sym_data_structure_block] = sym_data_structure_block,
  [sym_field] = sym_field,
  [sym_variable] = sym_variable,
  [sym_primitive_type] = sym_primitive_type,
  [sym_type_specifier] = sym_type_specifier,
  [sym_value] = sym_value,
  [sym_number] = sym_number,
  [sym_operator] = sym_operator,
  [sym_constant] = sym_constant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_inheritance_repeat1] = aux_sym_module_inheritance_repeat1,
  [aux_sym_module_block_repeat1] = aux_sym_module_block_repeat1,
  [aux_sym_enum_block_repeat1] = aux_sym_enum_block_repeat1,
  [aux_sym_rpcs_repeat1] = aux_sym_rpcs_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_data_structure_block_repeat1] = aux_sym_data_structure_block_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
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
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_throw] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_typedef_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_import_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
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
  [sym_enum_block] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
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
  [sym_rpc_throw] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
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
  [sym_constant] = {
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
  [aux_sym_value_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(132);
      ADVANCE_MAP(
        '&', 185,
        '(', 153,
        ')', 154,
        '*', 199,
        '+', 200,
        ',', 140,
        '-', 201,
        '.', 124,
        '/', 202,
        '0', 192,
        ':', 139,
        ';', 134,
        '<', 19,
        '=', 144,
        '>', 20,
        '?', 184,
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
      if (lookahead == '{') ADVANCE(141);
      if (lookahead == '}') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(189);
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
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(185);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '?') ADVANCE(184);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == '}') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'b') ADVANCE(233);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(229);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == 'v') ADVANCE(228);
      if (lookahead == 'x') ADVANCE(221);
      if (lookahead == '}') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(249);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(247);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(196);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(197);
      END_STATE();
    case 21:
      if (lookahead == ']') ADVANCE(186);
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
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(160);
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
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(149);
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
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(143);
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
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(146);
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
      if (lookahead == 's') ADVANCE(156);
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
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(174);
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
      if (lookahead == 'w') ADVANCE(152);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 124:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 126:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
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
      if (lookahead == ';') ADVANCE(134);
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
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_xml);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(194);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '0') ADVANCE(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(249);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(230);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 'y') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(249);
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
  [5] = {.lex_state = 131},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 131},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 0},
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
  [29] = {.lex_state = 131},
  [30] = {.lex_state = 131},
  [31] = {.lex_state = 131},
  [32] = {.lex_state = 131},
  [33] = {.lex_state = 131},
  [34] = {.lex_state = 131},
  [35] = {.lex_state = 131},
  [36] = {.lex_state = 131},
  [37] = {.lex_state = 131},
  [38] = {.lex_state = 131},
  [39] = {.lex_state = 131},
  [40] = {.lex_state = 131},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 17},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(97),
    [sym_package_definition] = STATE(9),
    [sym_typedef_definition] = STATE(9),
    [sym_import_definition] = STATE(9),
    [sym_module_definition] = STATE(9),
    [sym_enum_definition] = STATE(9),
    [sym_interface_definition] = STATE(9),
    [sym_data_structure_definition] = STATE(9),
    [sym_data_structure_type] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_typedef] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_union] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_struct] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_primitive_type,
    STATE(91), 1,
      sym_variable,
    STATE(2), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(23), 15,
      anon_sym_void,
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
      sym_identifier,
  [34] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_primitive_type,
    STATE(91), 1,
      sym_variable,
    STATE(4), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(28), 15,
      anon_sym_void,
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
      sym_identifier,
  [68] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_primitive_type,
    STATE(91), 1,
      sym_variable,
    STATE(2), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(28), 15,
      anon_sym_void,
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
      sym_identifier,
  [102] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_package,
    ACTIONS(37), 1,
      anon_sym_typedef,
    ACTIONS(40), 1,
      anon_sym_import,
    ACTIONS(43), 1,
      anon_sym_module,
    ACTIONS(46), 1,
      anon_sym_enum,
    ACTIONS(49), 1,
      anon_sym_interface,
    STATE(98), 1,
      sym_data_structure_type,
    ACTIONS(52), 3,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
    STATE(5), 8,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_data_structure_definition,
      aux_sym_source_file_repeat1,
  [145] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_number_token1,
    ACTIONS(59), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(63), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(61), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(8), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_argument_list_repeat1,
    STATE(43), 1,
      sym_primitive_type,
    STATE(66), 1,
      sym_variable,
    ACTIONS(28), 15,
      anon_sym_void,
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
      sym_identifier,
  [215] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_number_token1,
    ACTIONS(74), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(83), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(80), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(77), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(8), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [252] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(9), 1,
      anon_sym_typedef,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_module,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_interface,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(98), 1,
      sym_data_structure_type,
    ACTIONS(19), 3,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
    STATE(5), 8,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_data_structure_definition,
      aux_sym_source_file_repeat1,
  [295] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_argument_list_repeat1,
    STATE(43), 1,
      sym_primitive_type,
    STATE(111), 1,
      sym_variable,
    ACTIONS(88), 15,
      anon_sym_void,
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
      sym_identifier,
  [328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_argument_list_repeat1,
    STATE(43), 1,
      sym_primitive_type,
    STATE(72), 1,
      sym_variable,
    ACTIONS(28), 15,
      anon_sym_void,
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
      sym_identifier,
  [361] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      aux_sym_number_token1,
    STATE(64), 1,
      sym_value,
    ACTIONS(59), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(61), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(6), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      sym_primitive_type,
    STATE(109), 1,
      sym_variable,
    ACTIONS(28), 15,
      anon_sym_void,
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
      sym_identifier,
  [423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 15,
      anon_sym_void,
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
      sym_identifier,
  [447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 15,
      anon_sym_void,
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
      sym_identifier,
  [471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(101), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
  [494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(105), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
  [517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(109), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_number_token1,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
  [540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 11,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 11,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    ACTIONS(117), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(121), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 11,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 11,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(129), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 11,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    ACTIONS(135), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 11,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(141), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    ACTIONS(145), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 10,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
  [916] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_default_value,
    ACTIONS(165), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [931] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      anon_sym_out,
    ACTIONS(173), 1,
      anon_sym_throw,
    STATE(62), 1,
      sym_rpc_out,
    STATE(95), 1,
      sym_rpc_throw,
  [950] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(101), 1,
      sym_type_specifier,
    ACTIONS(175), 3,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
  [965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
    STATE(57), 1,
      sym_default_value,
    ACTIONS(179), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [980] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(45), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(45), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_argument_list,
    ACTIONS(190), 2,
      anon_sym_null,
      anon_sym_void,
  [1022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_enum_block_repeat1,
    STATE(94), 1,
      sym_enum_field,
  [1038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(52), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [1062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(52), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [1090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [1104] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_enum_block_repeat1,
    STATE(94), 1,
      sym_enum_field,
  [1120] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_enum_block_repeat1,
    STATE(94), 1,
      sym_enum_field,
  [1136] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_module_block,
    STATE(65), 1,
      sym_module_inheritance,
  [1152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1197] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_throw,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_rpc_throw,
  [1210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_module_block,
  [1238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(238), 1,
      anon_sym_COMMA,
  [1248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_enum_block,
  [1258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_module_inheritance_repeat1,
  [1268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
  [1278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(70), 1,
      aux_sym_module_inheritance_repeat1,
  [1288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [1306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_SEMI,
      anon_sym_throw,
  [1322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_rpcs,
  [1332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
    STATE(96), 1,
      sym_default_value,
  [1350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_argument_list,
  [1360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
  [1370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_identifier,
    STATE(68), 1,
      aux_sym_module_inheritance_repeat1,
  [1380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_data_structure_block,
  [1390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_in,
    STATE(42), 1,
      sym_rpc_in,
  [1408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_SEMI,
  [1423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_SEMI,
  [1430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COMMA,
  [1437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_SEMI,
  [1444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
  [1451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_identifier,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_SEMI,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_SEMI,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_identifier,
  [1479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COMMA,
  [1486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SEMI,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
  [1500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_identifier,
  [1514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_identifier,
  [1521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_identifier,
  [1528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_identifier,
  [1535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_SEMI,
  [1542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_identifier,
  [1549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_SEMI,
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_identifier,
  [1563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym_identifier,
  [1570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_SEMI,
  [1577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      sym_path,
  [1584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_SEMI,
  [1591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      sym_identifier,
  [1598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 215,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 328,
  [SMALL_STATE(12)] = 361,
  [SMALL_STATE(13)] = 396,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 447,
  [SMALL_STATE(16)] = 471,
  [SMALL_STATE(17)] = 494,
  [SMALL_STATE(18)] = 517,
  [SMALL_STATE(19)] = 540,
  [SMALL_STATE(20)] = 557,
  [SMALL_STATE(21)] = 574,
  [SMALL_STATE(22)] = 593,
  [SMALL_STATE(23)] = 612,
  [SMALL_STATE(24)] = 629,
  [SMALL_STATE(25)] = 646,
  [SMALL_STATE(26)] = 665,
  [SMALL_STATE(27)] = 682,
  [SMALL_STATE(28)] = 701,
  [SMALL_STATE(29)] = 718,
  [SMALL_STATE(30)] = 737,
  [SMALL_STATE(31)] = 756,
  [SMALL_STATE(32)] = 772,
  [SMALL_STATE(33)] = 788,
  [SMALL_STATE(34)] = 804,
  [SMALL_STATE(35)] = 820,
  [SMALL_STATE(36)] = 836,
  [SMALL_STATE(37)] = 852,
  [SMALL_STATE(38)] = 868,
  [SMALL_STATE(39)] = 884,
  [SMALL_STATE(40)] = 900,
  [SMALL_STATE(41)] = 916,
  [SMALL_STATE(42)] = 931,
  [SMALL_STATE(43)] = 950,
  [SMALL_STATE(44)] = 965,
  [SMALL_STATE(45)] = 980,
  [SMALL_STATE(46)] = 994,
  [SMALL_STATE(47)] = 1008,
  [SMALL_STATE(48)] = 1022,
  [SMALL_STATE(49)] = 1038,
  [SMALL_STATE(50)] = 1048,
  [SMALL_STATE(51)] = 1062,
  [SMALL_STATE(52)] = 1076,
  [SMALL_STATE(53)] = 1090,
  [SMALL_STATE(54)] = 1104,
  [SMALL_STATE(55)] = 1120,
  [SMALL_STATE(56)] = 1136,
  [SMALL_STATE(57)] = 1152,
  [SMALL_STATE(58)] = 1161,
  [SMALL_STATE(59)] = 1170,
  [SMALL_STATE(60)] = 1179,
  [SMALL_STATE(61)] = 1188,
  [SMALL_STATE(62)] = 1197,
  [SMALL_STATE(63)] = 1210,
  [SMALL_STATE(64)] = 1219,
  [SMALL_STATE(65)] = 1228,
  [SMALL_STATE(66)] = 1238,
  [SMALL_STATE(67)] = 1248,
  [SMALL_STATE(68)] = 1258,
  [SMALL_STATE(69)] = 1268,
  [SMALL_STATE(70)] = 1278,
  [SMALL_STATE(71)] = 1288,
  [SMALL_STATE(72)] = 1296,
  [SMALL_STATE(73)] = 1306,
  [SMALL_STATE(74)] = 1314,
  [SMALL_STATE(75)] = 1322,
  [SMALL_STATE(76)] = 1332,
  [SMALL_STATE(77)] = 1340,
  [SMALL_STATE(78)] = 1350,
  [SMALL_STATE(79)] = 1360,
  [SMALL_STATE(80)] = 1370,
  [SMALL_STATE(81)] = 1380,
  [SMALL_STATE(82)] = 1390,
  [SMALL_STATE(83)] = 1398,
  [SMALL_STATE(84)] = 1408,
  [SMALL_STATE(85)] = 1416,
  [SMALL_STATE(86)] = 1423,
  [SMALL_STATE(87)] = 1430,
  [SMALL_STATE(88)] = 1437,
  [SMALL_STATE(89)] = 1444,
  [SMALL_STATE(90)] = 1451,
  [SMALL_STATE(91)] = 1458,
  [SMALL_STATE(92)] = 1465,
  [SMALL_STATE(93)] = 1472,
  [SMALL_STATE(94)] = 1479,
  [SMALL_STATE(95)] = 1486,
  [SMALL_STATE(96)] = 1493,
  [SMALL_STATE(97)] = 1500,
  [SMALL_STATE(98)] = 1507,
  [SMALL_STATE(99)] = 1514,
  [SMALL_STATE(100)] = 1521,
  [SMALL_STATE(101)] = 1528,
  [SMALL_STATE(102)] = 1535,
  [SMALL_STATE(103)] = 1542,
  [SMALL_STATE(104)] = 1549,
  [SMALL_STATE(105)] = 1556,
  [SMALL_STATE(106)] = 1563,
  [SMALL_STATE(107)] = 1570,
  [SMALL_STATE(108)] = 1577,
  [SMALL_STATE(109)] = 1584,
  [SMALL_STATE(110)] = 1591,
  [SMALL_STATE(111)] = 1598,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 5, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_in, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 3, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 5, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 4, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_out, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_type, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_throw, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0),
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
