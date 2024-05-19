#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
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
  anon_sym_null = 15,
  anon_sym_void = 16,
  anon_sym_out = 17,
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
  sym_tag_number = 52,
  sym_identifier = 53,
  anon_sym_AT = 54,
  sym_comment = 55,
  sym_source_file = 56,
  sym_package_definition = 57,
  sym_typedef_definition = 58,
  sym_import_definition = 59,
  sym_module_definition = 60,
  sym_module_inheritance = 61,
  sym_module_block = 62,
  sym_module_field = 63,
  sym_enum_definition = 64,
  sym_enum_block = 65,
  sym_enum_field = 66,
  sym_default_value = 67,
  sym_interface_definition = 68,
  sym_rpcs = 69,
  sym_rpc = 70,
  sym_rpc_in = 71,
  sym_rpc_out = 72,
  sym_rpc_throw = 73,
  sym_argument_list = 74,
  sym_data_structure_definition = 75,
  sym_data_structure_type = 76,
  sym_data_structure_block = 77,
  sym_field = 78,
  sym_variable = 79,
  sym_primitive_type = 80,
  sym_type_specifier = 81,
  sym_value = 82,
  sym_number = 83,
  sym_operator = 84,
  sym_constant = 85,
  sym_tag = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_module_inheritance_repeat1 = 88,
  aux_sym_module_block_repeat1 = 89,
  aux_sym_enum_block_repeat1 = 90,
  aux_sym_rpcs_repeat1 = 91,
  aux_sym_argument_list_repeat1 = 92,
  aux_sym_data_structure_block_repeat1 = 93,
  aux_sym_value_repeat1 = 94,
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
  [anon_sym_null] = "null",
  [anon_sym_void] = "void",
  [anon_sym_out] = "out",
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
  [sym_tag_number] = "tag_number",
  [sym_identifier] = "identifier",
  [anon_sym_AT] = "@",
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
  [sym_tag] = "tag",
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
  [anon_sym_null] = anon_sym_null,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_out] = anon_sym_out,
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
  [sym_tag_number] = sym_tag_number,
  [sym_identifier] = sym_identifier,
  [anon_sym_AT] = anon_sym_AT,
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
  [sym_tag] = sym_tag,
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
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
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
  [sym_tag_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
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
  [sym_tag] = {
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
  [109] = 18,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 104,
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
        '@', 248,
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
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0) ADVANCE(251);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'v') ADVANCE(229);
      if (lookahead == 'x') ADVANCE(222);
      if (lookahead == '}') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(251);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(249);
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
      if (lookahead == 'd') ADVANCE(149);
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
      if (lookahead == 'l') ADVANCE(148);
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
      if (lookahead == 't') ADVANCE(151);
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
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_out);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_xml);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
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
      if (lookahead == '/') ADVANCE(251);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_tag_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 's') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(231);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'y') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(250);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(251);
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 131},
  [11] = {.lex_state = 131},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
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
  [41] = {.lex_state = 131},
  [42] = {.lex_state = 131},
  [43] = {.lex_state = 131},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
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
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
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
    [anon_sym_AT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(113),
    [sym_package_definition] = STATE(11),
    [sym_typedef_definition] = STATE(11),
    [sym_import_definition] = STATE(11),
    [sym_module_definition] = STATE(11),
    [sym_enum_definition] = STATE(11),
    [sym_interface_definition] = STATE(11),
    [sym_data_structure_definition] = STATE(11),
    [sym_data_structure_type] = STATE(120),
    [aux_sym_source_file_repeat1] = STATE(11),
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
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      sym_tag_number,
    STATE(12), 1,
      sym_tag,
    STATE(52), 1,
      sym_primitive_type,
    STATE(90), 1,
      sym_variable,
    STATE(4), 2,
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
  [40] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      sym_tag_number,
    STATE(12), 1,
      sym_tag,
    STATE(52), 1,
      sym_primitive_type,
    STATE(90), 1,
      sym_variable,
    STATE(3), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(29), 15,
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
  [80] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_tag_number,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_tag,
    STATE(52), 1,
      sym_primitive_type,
    STATE(90), 1,
      sym_variable,
    STATE(3), 2,
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
  [120] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_argument_list_repeat1,
    STATE(52), 1,
      sym_primitive_type,
    STATE(123), 1,
      sym_variable,
    ACTIONS(37), 15,
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
  [153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_argument_list_repeat1,
    STATE(52), 1,
      sym_primitive_type,
    STATE(76), 1,
      sym_variable,
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
  [186] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_argument_list_repeat1,
    STATE(52), 1,
      sym_primitive_type,
    STATE(83), 1,
      sym_variable,
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
  [219] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      aux_sym_number_token1,
    ACTIONS(51), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(60), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(46), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(57), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(54), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(8), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [256] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_number_token1,
    ACTIONS(67), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(63), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(69), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(8), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [293] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_package,
    ACTIONS(80), 1,
      anon_sym_typedef,
    ACTIONS(83), 1,
      anon_sym_import,
    ACTIONS(86), 1,
      anon_sym_module,
    ACTIONS(89), 1,
      anon_sym_enum,
    ACTIONS(92), 1,
      anon_sym_interface,
    STATE(120), 1,
      sym_data_structure_type,
    ACTIONS(95), 3,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
    STATE(10), 8,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_data_structure_definition,
      aux_sym_source_file_repeat1,
  [336] = 11,
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
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(120), 1,
      sym_data_structure_type,
    ACTIONS(19), 3,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
    STATE(10), 8,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_data_structure_definition,
      aux_sym_source_file_repeat1,
  [379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      sym_primitive_type,
    STATE(92), 1,
      sym_variable,
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
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_RBRACE,
      sym_tag_number,
    ACTIONS(102), 15,
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
  [431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      sym_tag_number,
    ACTIONS(106), 15,
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
  [456] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_number_token1,
    STATE(68), 1,
      sym_value,
    ACTIONS(67), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(73), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(71), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(69), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(9), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 1,
      sym_primitive_type,
    STATE(124), 1,
      sym_variable,
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
  [518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 15,
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
  [542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 15,
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
  [563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(112), 10,
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
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(116), 10,
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
  [609] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(120), 10,
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
  [632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 11,
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
  [649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 11,
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
  [666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 11,
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
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 11,
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
  [700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_SEMI,
    ACTIONS(132), 10,
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
  [719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(136), 10,
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
  [738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 11,
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
  [755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 11,
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
  [772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(144), 10,
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
  [791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(148), 10,
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
  [810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(152), 10,
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
  [829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(156), 10,
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
  [848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 10,
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
  [864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 10,
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
  [880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 10,
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
  [896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 10,
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
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 10,
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
  [928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 10,
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
  [944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 10,
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
  [960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 10,
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
  [976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 10,
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
  [992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 10,
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
  [1008] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      sym_tag_number,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(47), 1,
      aux_sym_enum_block_repeat1,
    STATE(106), 1,
      sym_tag,
    STATE(107), 1,
      sym_enum_field,
  [1030] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_tag_number,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(96), 1,
      sym_tag,
    STATE(48), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1050] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      sym_tag_number,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(96), 1,
      sym_tag,
    STATE(46), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1070] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_tag_number,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      aux_sym_enum_block_repeat1,
    STATE(106), 1,
      sym_tag,
    STATE(107), 1,
      sym_enum_field,
  [1092] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_tag_number,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      sym_tag,
    STATE(46), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1112] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 1,
      sym_tag_number,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(49), 1,
      aux_sym_enum_block_repeat1,
    STATE(106), 1,
      sym_tag,
    STATE(107), 1,
      sym_enum_field,
  [1134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_EQ,
    STATE(62), 1,
      sym_default_value,
    ACTIONS(206), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1149] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      anon_sym_out,
    ACTIONS(214), 1,
      anon_sym_throw,
    STATE(61), 1,
      sym_rpc_out,
    STATE(105), 1,
      sym_rpc_throw,
  [1168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(110), 1,
      sym_type_specifier,
    ACTIONS(216), 3,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
  [1183] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_EQ,
    STATE(66), 1,
      sym_default_value,
    ACTIONS(220), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(58), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [1212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(55), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 4,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_argument_list,
    ACTIONS(233), 2,
      anon_sym_null,
      anon_sym_void,
  [1250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [1264] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_module_block,
    STATE(85), 1,
      sym_module_inheritance,
  [1280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_argument_list,
    ACTIONS(243), 2,
      anon_sym_null,
      anon_sym_void,
  [1294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_throw,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      sym_rpc_throw,
  [1307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [1325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [1334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [1379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_data_structure_block,
  [1407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_EQ,
    STATE(119), 1,
      sym_default_value,
  [1417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_enum_block,
  [1435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
  [1445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
  [1455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(78), 1,
      aux_sym_module_inheritance_repeat1,
  [1465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_rpcs,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_EQ,
    STATE(98), 1,
      sym_default_value,
  [1493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_SEMI,
      anon_sym_throw,
  [1501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_COMMA,
  [1511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(88), 1,
      aux_sym_module_inheritance_repeat1,
  [1521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_module_block,
  [1531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_in,
    STATE(51), 1,
      sym_rpc_in,
  [1541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
  [1551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(78), 1,
      aux_sym_module_inheritance_repeat1,
  [1561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SEMI,
  [1576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_SEMI,
  [1583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SEMI,
  [1590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_identifier,
  [1597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_identifier,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
  [1611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
  [1618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SEMI,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COMMA,
  [1632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_identifier,
  [1639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_identifier,
  [1646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SEMI,
  [1653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_identifier,
  [1660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_identifier,
  [1667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COLON,
  [1674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_SEMI,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_identifier,
  [1688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
  [1695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_SEMI,
  [1702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_identifier,
  [1709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_identifier,
  [1716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_identifier,
  [1723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_path,
  [1730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [1737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SEMI,
  [1744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_identifier,
  [1751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
  [1758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym_identifier,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SEMI,
  [1772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_identifier,
  [1786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_identifier,
  [1793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SEMI,
  [1800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_SEMI,
  [1814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 293,
  [SMALL_STATE(11)] = 336,
  [SMALL_STATE(12)] = 379,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 431,
  [SMALL_STATE(15)] = 456,
  [SMALL_STATE(16)] = 491,
  [SMALL_STATE(17)] = 518,
  [SMALL_STATE(18)] = 542,
  [SMALL_STATE(19)] = 563,
  [SMALL_STATE(20)] = 586,
  [SMALL_STATE(21)] = 609,
  [SMALL_STATE(22)] = 632,
  [SMALL_STATE(23)] = 649,
  [SMALL_STATE(24)] = 666,
  [SMALL_STATE(25)] = 683,
  [SMALL_STATE(26)] = 700,
  [SMALL_STATE(27)] = 719,
  [SMALL_STATE(28)] = 738,
  [SMALL_STATE(29)] = 755,
  [SMALL_STATE(30)] = 772,
  [SMALL_STATE(31)] = 791,
  [SMALL_STATE(32)] = 810,
  [SMALL_STATE(33)] = 829,
  [SMALL_STATE(34)] = 848,
  [SMALL_STATE(35)] = 864,
  [SMALL_STATE(36)] = 880,
  [SMALL_STATE(37)] = 896,
  [SMALL_STATE(38)] = 912,
  [SMALL_STATE(39)] = 928,
  [SMALL_STATE(40)] = 944,
  [SMALL_STATE(41)] = 960,
  [SMALL_STATE(42)] = 976,
  [SMALL_STATE(43)] = 992,
  [SMALL_STATE(44)] = 1008,
  [SMALL_STATE(45)] = 1030,
  [SMALL_STATE(46)] = 1050,
  [SMALL_STATE(47)] = 1070,
  [SMALL_STATE(48)] = 1092,
  [SMALL_STATE(49)] = 1112,
  [SMALL_STATE(50)] = 1134,
  [SMALL_STATE(51)] = 1149,
  [SMALL_STATE(52)] = 1168,
  [SMALL_STATE(53)] = 1183,
  [SMALL_STATE(54)] = 1198,
  [SMALL_STATE(55)] = 1212,
  [SMALL_STATE(56)] = 1226,
  [SMALL_STATE(57)] = 1236,
  [SMALL_STATE(58)] = 1250,
  [SMALL_STATE(59)] = 1264,
  [SMALL_STATE(60)] = 1280,
  [SMALL_STATE(61)] = 1294,
  [SMALL_STATE(62)] = 1307,
  [SMALL_STATE(63)] = 1316,
  [SMALL_STATE(64)] = 1325,
  [SMALL_STATE(65)] = 1334,
  [SMALL_STATE(66)] = 1343,
  [SMALL_STATE(67)] = 1352,
  [SMALL_STATE(68)] = 1361,
  [SMALL_STATE(69)] = 1370,
  [SMALL_STATE(70)] = 1379,
  [SMALL_STATE(71)] = 1388,
  [SMALL_STATE(72)] = 1397,
  [SMALL_STATE(73)] = 1407,
  [SMALL_STATE(74)] = 1417,
  [SMALL_STATE(75)] = 1425,
  [SMALL_STATE(76)] = 1435,
  [SMALL_STATE(77)] = 1445,
  [SMALL_STATE(78)] = 1455,
  [SMALL_STATE(79)] = 1465,
  [SMALL_STATE(80)] = 1475,
  [SMALL_STATE(81)] = 1483,
  [SMALL_STATE(82)] = 1493,
  [SMALL_STATE(83)] = 1501,
  [SMALL_STATE(84)] = 1511,
  [SMALL_STATE(85)] = 1521,
  [SMALL_STATE(86)] = 1531,
  [SMALL_STATE(87)] = 1541,
  [SMALL_STATE(88)] = 1551,
  [SMALL_STATE(89)] = 1561,
  [SMALL_STATE(90)] = 1569,
  [SMALL_STATE(91)] = 1576,
  [SMALL_STATE(92)] = 1583,
  [SMALL_STATE(93)] = 1590,
  [SMALL_STATE(94)] = 1597,
  [SMALL_STATE(95)] = 1604,
  [SMALL_STATE(96)] = 1611,
  [SMALL_STATE(97)] = 1618,
  [SMALL_STATE(98)] = 1625,
  [SMALL_STATE(99)] = 1632,
  [SMALL_STATE(100)] = 1639,
  [SMALL_STATE(101)] = 1646,
  [SMALL_STATE(102)] = 1653,
  [SMALL_STATE(103)] = 1660,
  [SMALL_STATE(104)] = 1667,
  [SMALL_STATE(105)] = 1674,
  [SMALL_STATE(106)] = 1681,
  [SMALL_STATE(107)] = 1688,
  [SMALL_STATE(108)] = 1695,
  [SMALL_STATE(109)] = 1702,
  [SMALL_STATE(110)] = 1709,
  [SMALL_STATE(111)] = 1716,
  [SMALL_STATE(112)] = 1723,
  [SMALL_STATE(113)] = 1730,
  [SMALL_STATE(114)] = 1737,
  [SMALL_STATE(115)] = 1744,
  [SMALL_STATE(116)] = 1751,
  [SMALL_STATE(117)] = 1758,
  [SMALL_STATE(118)] = 1765,
  [SMALL_STATE(119)] = 1772,
  [SMALL_STATE(120)] = 1779,
  [SMALL_STATE(121)] = 1786,
  [SMALL_STATE(122)] = 1793,
  [SMALL_STATE(123)] = 1800,
  [SMALL_STATE(124)] = 1807,
  [SMALL_STATE(125)] = 1814,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 3, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 4, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_in, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 5, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 3, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_out, 2, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_type, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [338] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_throw, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
