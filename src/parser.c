#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 157
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  sym_attribute_argument = 55,
  sym_comment = 56,
  sym_source_file = 57,
  sym_package_definition = 58,
  sym_typedef_definition = 59,
  sym_import_definition = 60,
  sym_module_definition = 61,
  sym_module_inheritance = 62,
  sym_module_block = 63,
  sym_module_field = 64,
  sym_enum_definition = 65,
  sym_enum_block = 66,
  sym_enum_field = 67,
  sym_default_value = 68,
  sym_interface_definition = 69,
  sym_rpcs = 70,
  sym_rpc = 71,
  sym_rpc_in = 72,
  sym_rpc_out = 73,
  sym_rpc_throw = 74,
  sym_argument_list = 75,
  sym_data_structure_definition = 76,
  sym_data_structure_type = 77,
  sym_data_structure_block = 78,
  sym_field = 79,
  sym_variable = 80,
  sym_primitive_type = 81,
  sym_type_specifier = 82,
  sym_value = 83,
  sym_number = 84,
  sym_operator = 85,
  sym_constant = 86,
  sym_tag = 87,
  sym_attribute = 88,
  sym_attribute_argument_list = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym_module_inheritance_repeat1 = 91,
  aux_sym_module_block_repeat1 = 92,
  aux_sym_enum_block_repeat1 = 93,
  aux_sym_rpcs_repeat1 = 94,
  aux_sym_argument_list_repeat1 = 95,
  aux_sym_data_structure_block_repeat1 = 96,
  aux_sym_value_repeat1 = 97,
  aux_sym_attribute_argument_list_repeat1 = 98,
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
  [sym_attribute_argument] = "attribute_argument",
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
  [sym_attribute] = "attribute",
  [sym_attribute_argument_list] = "attribute_argument_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_inheritance_repeat1] = "module_inheritance_repeat1",
  [aux_sym_module_block_repeat1] = "module_block_repeat1",
  [aux_sym_enum_block_repeat1] = "enum_block_repeat1",
  [aux_sym_rpcs_repeat1] = "rpcs_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_data_structure_block_repeat1] = "data_structure_block_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_attribute_argument_list_repeat1] = "attribute_argument_list_repeat1",
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
  [sym_attribute_argument] = sym_attribute_argument,
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
  [sym_attribute] = sym_attribute,
  [sym_attribute_argument_list] = sym_attribute_argument_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_inheritance_repeat1] = aux_sym_module_inheritance_repeat1,
  [aux_sym_module_block_repeat1] = aux_sym_module_block_repeat1,
  [aux_sym_enum_block_repeat1] = aux_sym_enum_block_repeat1,
  [aux_sym_rpcs_repeat1] = aux_sym_rpcs_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_data_structure_block_repeat1] = aux_sym_data_structure_block_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_attribute_argument_list_repeat1] = aux_sym_attribute_argument_list_repeat1,
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
  [sym_attribute_argument] = {
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
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_argument_list] = {
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
  [aux_sym_attribute_argument_list_repeat1] = {
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
  [76] = 72,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 74,
  [84] = 84,
  [85] = 85,
  [86] = 22,
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
  [108] = 106,
  [109] = 93,
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
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 40,
  [146] = 35,
  [147] = 36,
  [148] = 44,
  [149] = 149,
  [150] = 49,
  [151] = 18,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 130,
  [156] = 156,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(135);
      ADVANCE_MAP(
        '&', 188,
        '(', 156,
        ')', 157,
        '*', 202,
        '+', 203,
        ',', 143,
        '-', 204,
        '.', 127,
        '/', 205,
        '0', 195,
        ':', 142,
        ';', 137,
        '<', 22,
        '=', 147,
        '>', 23,
        '?', 187,
        '@', 251,
        '[', 24,
      );
      if (lookahead == '\\') SKIP(131);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'v') ADVANCE(85);
      if (lookahead == 'x') ADVANCE(73);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(12);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(21);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '\r') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\r') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(188);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '?') ADVANCE(187);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == '}') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == 'v') ADVANCE(232);
      if (lookahead == 'x') ADVANCE(225);
      if (lookahead == '}') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(255);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(8);
      if (lookahead == 'i') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(199);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(200);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(189);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(163);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'k') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 123:
      if (lookahead == 'w') ADVANCE(155);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 130:
      if (eof) ADVANCE(135);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 131:
      if (eof) ADVANCE(135);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(130);
      END_STATE();
    case 132:
      if (eof) ADVANCE(135);
      if (lookahead == '\n') SKIP(134);
      END_STATE();
    case 133:
      if (eof) ADVANCE(135);
      if (lookahead == '\n') SKIP(134);
      if (lookahead == '\r') SKIP(132);
      END_STATE();
    case 134:
      if (eof) ADVANCE(135);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(137);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == '\\') SKIP(133);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_uint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_xml);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(197);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '0') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(255);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_tag_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(236);
      if (lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(234);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == 'y') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_attribute_argument);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 134},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 134},
  [6] = {.lex_state = 134},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 134},
  [23] = {.lex_state = 134},
  [24] = {.lex_state = 134},
  [25] = {.lex_state = 134},
  [26] = {.lex_state = 134},
  [27] = {.lex_state = 134},
  [28] = {.lex_state = 134},
  [29] = {.lex_state = 134},
  [30] = {.lex_state = 134},
  [31] = {.lex_state = 134},
  [32] = {.lex_state = 134},
  [33] = {.lex_state = 134},
  [34] = {.lex_state = 134},
  [35] = {.lex_state = 134},
  [36] = {.lex_state = 134},
  [37] = {.lex_state = 134},
  [38] = {.lex_state = 134},
  [39] = {.lex_state = 134},
  [40] = {.lex_state = 134},
  [41] = {.lex_state = 134},
  [42] = {.lex_state = 134},
  [43] = {.lex_state = 134},
  [44] = {.lex_state = 134},
  [45] = {.lex_state = 134},
  [46] = {.lex_state = 134},
  [47] = {.lex_state = 134},
  [48] = {.lex_state = 134},
  [49] = {.lex_state = 134},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 14},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 21},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 12},
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
    [sym_source_file] = STATE(116),
    [sym_package_definition] = STATE(6),
    [sym_typedef_definition] = STATE(6),
    [sym_import_definition] = STATE(6),
    [sym_module_definition] = STATE(6),
    [sym_enum_definition] = STATE(6),
    [sym_interface_definition] = STATE(6),
    [sym_data_structure_definition] = STATE(6),
    [sym_data_structure_type] = STATE(120),
    [sym_attribute] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
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
    [anon_sym_AT] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      sym_tag_number,
    STATE(13), 1,
      sym_tag,
    STATE(61), 1,
      sym_primitive_type,
    STATE(154), 1,
      sym_variable,
    STATE(4), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(25), 15,
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
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 1,
      sym_tag_number,
    STATE(13), 1,
      sym_tag,
    STATE(61), 1,
      sym_primitive_type,
    STATE(154), 1,
      sym_variable,
    STATE(3), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(31), 15,
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
    ACTIONS(27), 1,
      sym_tag_number,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_tag,
    STATE(61), 1,
      sym_primitive_type,
    STATE(154), 1,
      sym_variable,
    STATE(3), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(25), 15,
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
  [120] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_package,
    ACTIONS(44), 1,
      anon_sym_typedef,
    ACTIONS(47), 1,
      anon_sym_import,
    ACTIONS(50), 1,
      anon_sym_module,
    ACTIONS(53), 1,
      anon_sym_enum,
    ACTIONS(56), 1,
      anon_sym_interface,
    ACTIONS(62), 1,
      anon_sym_AT,
    STATE(120), 1,
      sym_data_structure_type,
    ACTIONS(59), 3,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
    STATE(5), 9,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_data_structure_definition,
      sym_attribute,
      aux_sym_source_file_repeat1,
  [167] = 12,
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
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(120), 1,
      sym_data_structure_type,
    ACTIONS(19), 3,
      anon_sym_union,
      anon_sym_class,
      anon_sym_struct,
    STATE(5), 9,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_data_structure_definition,
      sym_attribute,
      aux_sym_source_file_repeat1,
  [214] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_number_token1,
    ACTIONS(72), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(78), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(75), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(7), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [251] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_argument_list_repeat1,
    STATE(61), 1,
      sym_primitive_type,
    STATE(98), 1,
      sym_variable,
    ACTIONS(25), 15,
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
  [284] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_argument_list_repeat1,
    STATE(61), 1,
      sym_primitive_type,
    STATE(95), 1,
      sym_variable,
    ACTIONS(25), 15,
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
  [317] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_argument_list_repeat1,
    STATE(61), 1,
      sym_primitive_type,
    STATE(142), 1,
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
  [350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    ACTIONS(97), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(99), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(7), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 2,
      anon_sym_RBRACE,
      sym_tag_number,
    ACTIONS(107), 15,
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
  [412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      sym_primitive_type,
    STATE(123), 1,
      sym_variable,
    ACTIONS(25), 15,
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
  [439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      sym_tag_number,
    ACTIONS(111), 15,
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
  [464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 1,
      sym_primitive_type,
    STATE(126), 1,
      sym_variable,
    ACTIONS(25), 15,
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
  [491] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    STATE(80), 1,
      sym_value,
    ACTIONS(97), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(99), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(11), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 15,
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
  [550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 15,
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
  [571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(117), 10,
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
  [594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(121), 10,
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
  [617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(125), 10,
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
  [640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_attribute_argument_list,
    ACTIONS(129), 11,
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
      anon_sym_AT,
  [663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 12,
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
      anon_sym_AT,
  [681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    ACTIONS(135), 11,
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
      anon_sym_AT,
  [701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 12,
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
      anon_sym_AT,
  [719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(141), 11,
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
      anon_sym_AT,
  [739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    ACTIONS(145), 11,
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
      anon_sym_AT,
  [759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    ACTIONS(149), 11,
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
      anon_sym_AT,
  [779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 12,
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
      anon_sym_AT,
  [797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 12,
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
      anon_sym_AT,
  [815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 12,
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
      anon_sym_AT,
  [833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    ACTIONS(159), 11,
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
      anon_sym_AT,
  [853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    ACTIONS(163), 11,
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
      anon_sym_AT,
  [873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 12,
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
      anon_sym_AT,
  [891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 11,
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
      anon_sym_AT,
  [908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 11,
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
      anon_sym_AT,
  [925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 11,
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
      anon_sym_AT,
  [942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 11,
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
      anon_sym_AT,
  [959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 11,
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
      anon_sym_AT,
  [976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 11,
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
      anon_sym_AT,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 11,
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
      anon_sym_AT,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 11,
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
      anon_sym_AT,
  [1027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 11,
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
      anon_sym_AT,
  [1044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 11,
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
      anon_sym_AT,
  [1061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 11,
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
      anon_sym_AT,
  [1078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 11,
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
      anon_sym_AT,
  [1095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 11,
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
      anon_sym_AT,
  [1112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 11,
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
      anon_sym_AT,
  [1129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 11,
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
      anon_sym_AT,
  [1146] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(195), 1,
      sym_tag_number,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(134), 1,
      sym_tag,
    STATE(54), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1166] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    STATE(156), 1,
      sym_attribute,
    STATE(57), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [1186] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_AT,
    STATE(156), 1,
      sym_attribute,
    STATE(52), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [1206] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      sym_tag_number,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(53), 1,
      aux_sym_enum_block_repeat1,
    STATE(113), 1,
      sym_enum_field,
    STATE(139), 1,
      sym_tag,
  [1228] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_tag_number,
    ACTIONS(197), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_tag,
    STATE(56), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1248] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_tag_number,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      sym_identifier,
    STATE(58), 1,
      aux_sym_enum_block_repeat1,
    STATE(113), 1,
      sym_enum_field,
    STATE(139), 1,
      sym_tag,
  [1270] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 1,
      sym_tag_number,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(134), 1,
      sym_tag,
    STATE(56), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1290] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_identifier,
    ACTIONS(203), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_attribute,
    STATE(52), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
  [1310] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_tag_number,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      aux_sym_enum_block_repeat1,
    STATE(113), 1,
      sym_enum_field,
    STATE(139), 1,
      sym_tag,
  [1332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_EQ,
    STATE(82), 1,
      sym_default_value,
    ACTIONS(239), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1347] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(245), 1,
      anon_sym_out,
    ACTIONS(247), 1,
      anon_sym_throw,
    STATE(73), 1,
      sym_rpc_out,
    STATE(121), 1,
      sym_rpc_throw,
  [1366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(125), 1,
      sym_type_specifier,
    ACTIONS(249), 3,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
  [1381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_EQ,
    STATE(69), 1,
      sym_default_value,
    ACTIONS(253), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1396] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_out,
    ACTIONS(247), 1,
      anon_sym_throw,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_rpc_out,
    STATE(133), 1,
      sym_rpc_throw,
  [1415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_argument_list,
    ACTIONS(257), 2,
      anon_sym_null,
      anon_sym_void,
  [1429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_module_block,
    STATE(110), 1,
      sym_module_inheritance,
  [1445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 4,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_argument_list,
    ACTIONS(267), 2,
      anon_sym_null,
      anon_sym_void,
  [1469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [1478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [1496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [1505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      sym_attribute_argument,
    STATE(75), 1,
      aux_sym_attribute_argument_list_repeat1,
  [1518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_throw,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym_rpc_throw,
  [1531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(40), 1,
      sym_attribute_argument_list,
  [1544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      sym_attribute_argument,
    STATE(75), 1,
      aux_sym_attribute_argument_list_repeat1,
  [1557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(288), 1,
      sym_attribute_argument,
    STATE(75), 1,
      aux_sym_attribute_argument_list_repeat1,
  [1570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    ACTIONS(292), 1,
      sym_attribute_argument,
    STATE(72), 1,
      aux_sym_attribute_argument_list_repeat1,
  [1583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    ACTIONS(296), 1,
      sym_attribute_argument,
    STATE(76), 1,
      aux_sym_attribute_argument_list_repeat1,
  [1596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(145), 1,
      sym_attribute_argument_list,
  [1645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [1654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_throw,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    STATE(140), 1,
      sym_rpc_throw,
  [1667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_attribute_argument_list,
  [1680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [1689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [1707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [1716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_EQ,
    STATE(137), 1,
      sym_default_value,
  [1735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
  [1745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_EQ,
    STATE(114), 1,
      sym_default_value,
  [1755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym_identifier,
    STATE(96), 1,
      aux_sym_module_inheritance_repeat1,
  [1775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_SEMI,
      anon_sym_throw,
  [1783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      anon_sym_COMMA,
  [1793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_identifier,
    STATE(96), 1,
      aux_sym_module_inheritance_repeat1,
  [1803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_in,
    STATE(63), 1,
      sym_rpc_in,
  [1813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
  [1823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
  [1833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_enum_block,
  [1843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_data_structure_block,
  [1853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_rpcs,
  [1863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 1,
      anon_sym_COMMA,
  [1873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_module_inheritance_repeat1,
  [1883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 1,
      anon_sym_COMMA,
  [1893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
  [1903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_module_block,
  [1913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_RPAREN,
      sym_attribute_argument,
  [1921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_in,
    STATE(60), 1,
      sym_rpc_in,
  [1931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
  [1938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_COMMA,
  [1945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_SEMI,
  [1952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
  [1959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_SEMI,
  [1966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_COMMA,
  [1973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
  [1980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_identifier,
  [1987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_SEMI,
  [1994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_SEMI,
  [2001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_SEMI,
  [2008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_identifier,
  [2015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
  [2022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_SEMI,
  [2029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_COMMA,
  [2036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_SEMI,
  [2043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      sym_identifier,
  [2050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_COLON,
  [2057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_SEMI,
  [2064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      sym_identifier,
  [2071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_SEMI,
  [2078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_identifier,
  [2085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_identifier,
  [2092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SEMI,
  [2099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COMMA,
  [2106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_identifier,
  [2113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym_identifier,
  [2120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_SEMI,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
  [2134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COMMA,
  [2141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_identifier,
  [2148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_SEMI,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
  [2162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_identifier,
  [2169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_identifier,
  [2176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_identifier,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym_path,
  [2190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_identifier,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_identifier,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym_identifier,
  [2218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SEMI,
  [2225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COLON,
  [2232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 167,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 251,
  [SMALL_STATE(9)] = 284,
  [SMALL_STATE(10)] = 317,
  [SMALL_STATE(11)] = 350,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 412,
  [SMALL_STATE(14)] = 439,
  [SMALL_STATE(15)] = 464,
  [SMALL_STATE(16)] = 491,
  [SMALL_STATE(17)] = 526,
  [SMALL_STATE(18)] = 550,
  [SMALL_STATE(19)] = 571,
  [SMALL_STATE(20)] = 594,
  [SMALL_STATE(21)] = 617,
  [SMALL_STATE(22)] = 640,
  [SMALL_STATE(23)] = 663,
  [SMALL_STATE(24)] = 681,
  [SMALL_STATE(25)] = 701,
  [SMALL_STATE(26)] = 719,
  [SMALL_STATE(27)] = 739,
  [SMALL_STATE(28)] = 759,
  [SMALL_STATE(29)] = 779,
  [SMALL_STATE(30)] = 797,
  [SMALL_STATE(31)] = 815,
  [SMALL_STATE(32)] = 833,
  [SMALL_STATE(33)] = 853,
  [SMALL_STATE(34)] = 873,
  [SMALL_STATE(35)] = 891,
  [SMALL_STATE(36)] = 908,
  [SMALL_STATE(37)] = 925,
  [SMALL_STATE(38)] = 942,
  [SMALL_STATE(39)] = 959,
  [SMALL_STATE(40)] = 976,
  [SMALL_STATE(41)] = 993,
  [SMALL_STATE(42)] = 1010,
  [SMALL_STATE(43)] = 1027,
  [SMALL_STATE(44)] = 1044,
  [SMALL_STATE(45)] = 1061,
  [SMALL_STATE(46)] = 1078,
  [SMALL_STATE(47)] = 1095,
  [SMALL_STATE(48)] = 1112,
  [SMALL_STATE(49)] = 1129,
  [SMALL_STATE(50)] = 1146,
  [SMALL_STATE(51)] = 1166,
  [SMALL_STATE(52)] = 1186,
  [SMALL_STATE(53)] = 1206,
  [SMALL_STATE(54)] = 1228,
  [SMALL_STATE(55)] = 1248,
  [SMALL_STATE(56)] = 1270,
  [SMALL_STATE(57)] = 1290,
  [SMALL_STATE(58)] = 1310,
  [SMALL_STATE(59)] = 1332,
  [SMALL_STATE(60)] = 1347,
  [SMALL_STATE(61)] = 1366,
  [SMALL_STATE(62)] = 1381,
  [SMALL_STATE(63)] = 1396,
  [SMALL_STATE(64)] = 1415,
  [SMALL_STATE(65)] = 1429,
  [SMALL_STATE(66)] = 1445,
  [SMALL_STATE(67)] = 1455,
  [SMALL_STATE(68)] = 1469,
  [SMALL_STATE(69)] = 1478,
  [SMALL_STATE(70)] = 1487,
  [SMALL_STATE(71)] = 1496,
  [SMALL_STATE(72)] = 1505,
  [SMALL_STATE(73)] = 1518,
  [SMALL_STATE(74)] = 1531,
  [SMALL_STATE(75)] = 1544,
  [SMALL_STATE(76)] = 1557,
  [SMALL_STATE(77)] = 1570,
  [SMALL_STATE(78)] = 1583,
  [SMALL_STATE(79)] = 1596,
  [SMALL_STATE(80)] = 1605,
  [SMALL_STATE(81)] = 1614,
  [SMALL_STATE(82)] = 1623,
  [SMALL_STATE(83)] = 1632,
  [SMALL_STATE(84)] = 1645,
  [SMALL_STATE(85)] = 1654,
  [SMALL_STATE(86)] = 1667,
  [SMALL_STATE(87)] = 1680,
  [SMALL_STATE(88)] = 1689,
  [SMALL_STATE(89)] = 1698,
  [SMALL_STATE(90)] = 1707,
  [SMALL_STATE(91)] = 1716,
  [SMALL_STATE(92)] = 1725,
  [SMALL_STATE(93)] = 1735,
  [SMALL_STATE(94)] = 1745,
  [SMALL_STATE(95)] = 1755,
  [SMALL_STATE(96)] = 1765,
  [SMALL_STATE(97)] = 1775,
  [SMALL_STATE(98)] = 1783,
  [SMALL_STATE(99)] = 1793,
  [SMALL_STATE(100)] = 1803,
  [SMALL_STATE(101)] = 1813,
  [SMALL_STATE(102)] = 1823,
  [SMALL_STATE(103)] = 1833,
  [SMALL_STATE(104)] = 1843,
  [SMALL_STATE(105)] = 1853,
  [SMALL_STATE(106)] = 1863,
  [SMALL_STATE(107)] = 1873,
  [SMALL_STATE(108)] = 1883,
  [SMALL_STATE(109)] = 1893,
  [SMALL_STATE(110)] = 1903,
  [SMALL_STATE(111)] = 1913,
  [SMALL_STATE(112)] = 1921,
  [SMALL_STATE(113)] = 1931,
  [SMALL_STATE(114)] = 1938,
  [SMALL_STATE(115)] = 1945,
  [SMALL_STATE(116)] = 1952,
  [SMALL_STATE(117)] = 1959,
  [SMALL_STATE(118)] = 1966,
  [SMALL_STATE(119)] = 1973,
  [SMALL_STATE(120)] = 1980,
  [SMALL_STATE(121)] = 1987,
  [SMALL_STATE(122)] = 1994,
  [SMALL_STATE(123)] = 2001,
  [SMALL_STATE(124)] = 2008,
  [SMALL_STATE(125)] = 2015,
  [SMALL_STATE(126)] = 2022,
  [SMALL_STATE(127)] = 2029,
  [SMALL_STATE(128)] = 2036,
  [SMALL_STATE(129)] = 2043,
  [SMALL_STATE(130)] = 2050,
  [SMALL_STATE(131)] = 2057,
  [SMALL_STATE(132)] = 2064,
  [SMALL_STATE(133)] = 2071,
  [SMALL_STATE(134)] = 2078,
  [SMALL_STATE(135)] = 2085,
  [SMALL_STATE(136)] = 2092,
  [SMALL_STATE(137)] = 2099,
  [SMALL_STATE(138)] = 2106,
  [SMALL_STATE(139)] = 2113,
  [SMALL_STATE(140)] = 2120,
  [SMALL_STATE(141)] = 2127,
  [SMALL_STATE(142)] = 2134,
  [SMALL_STATE(143)] = 2141,
  [SMALL_STATE(144)] = 2148,
  [SMALL_STATE(145)] = 2155,
  [SMALL_STATE(146)] = 2162,
  [SMALL_STATE(147)] = 2169,
  [SMALL_STATE(148)] = 2176,
  [SMALL_STATE(149)] = 2183,
  [SMALL_STATE(150)] = 2190,
  [SMALL_STATE(151)] = 2197,
  [SMALL_STATE(152)] = 2204,
  [SMALL_STATE(153)] = 2211,
  [SMALL_STATE(154)] = 2218,
  [SMALL_STATE(155)] = 2225,
  [SMALL_STATE(156)] = 2232,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 4, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 5, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 2, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 6, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 5, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_in, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_out, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 2, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [361] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_type, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_throw, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
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
