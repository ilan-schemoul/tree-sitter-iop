#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 183
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 111
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
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
  anon_sym_class = 21,
  anon_sym_abstract = 22,
  anon_sym_local = 23,
  anon_sym_union = 24,
  anon_sym_struct = 25,
  anon_sym_int = 26,
  anon_sym_string = 27,
  anon_sym_uint = 28,
  anon_sym_long = 29,
  anon_sym_ulong = 30,
  anon_sym_byte = 31,
  anon_sym_ubyte = 32,
  anon_sym_short = 33,
  anon_sym_ushort = 34,
  anon_sym_bool = 35,
  anon_sym_double = 36,
  anon_sym_bytes = 37,
  anon_sym_xml = 38,
  anon_sym_QMARK = 39,
  anon_sym_AMP = 40,
  anon_sym_LBRACK_RBRACK = 41,
  anon_sym_DQUOTE = 42,
  sym_string_content = 43,
  aux_sym_number_token1 = 44,
  aux_sym_number_token2 = 45,
  aux_sym_number_token3 = 46,
  anon_sym_LT_LT = 47,
  anon_sym_GT_GT = 48,
  anon_sym_STAR_STAR = 49,
  anon_sym_STAR = 50,
  anon_sym_PLUS = 51,
  anon_sym_DASH = 52,
  anon_sym_SLASH = 53,
  anon_sym_true = 54,
  anon_sym_false = 55,
  sym_tag_number = 56,
  sym_identifier = 57,
  anon_sym_AT = 58,
  sym_attribute_identifier = 59,
  sym_comment = 60,
  sym_source_file = 61,
  sym_package_definition = 62,
  sym_typedef_definition = 63,
  sym_import_definition = 64,
  sym_module_definition = 65,
  sym_module_inheritance = 66,
  sym_module_block = 67,
  sym_module_field = 68,
  sym_enum_definition = 69,
  sym_enum_block = 70,
  sym_enum_field = 71,
  sym_default_value = 72,
  sym_interface_definition = 73,
  sym_rpcs = 74,
  sym_rpc = 75,
  sym_rpc_in = 76,
  sym_rpc_out = 77,
  sym_rpc_throw = 78,
  sym_argument_list = 79,
  sym_class = 80,
  sym_class_modifier = 81,
  sym_class_inheritance = 82,
  sym_data_structure_definition = 83,
  sym_data_structure_type = 84,
  sym_data_structure_block = 85,
  sym_field = 86,
  sym_variable = 87,
  sym_primitive_type = 88,
  sym_type_specifier = 89,
  sym_value = 90,
  sym_string = 91,
  sym_number = 92,
  sym_operator = 93,
  sym_constant = 94,
  sym_tag = 95,
  sym_attribute = 96,
  sym_attribute_argument_list = 97,
  sym_attribute_argument = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_module_inheritance_repeat1 = 100,
  aux_sym_module_block_repeat1 = 101,
  aux_sym_enum_block_repeat1 = 102,
  aux_sym_rpcs_repeat1 = 103,
  aux_sym_rpc_repeat1 = 104,
  aux_sym_argument_list_repeat1 = 105,
  aux_sym_class_repeat1 = 106,
  aux_sym_class_repeat2 = 107,
  aux_sym_data_structure_block_repeat1 = 108,
  aux_sym_value_repeat1 = 109,
  aux_sym_attribute_argument_list_repeat1 = 110,
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
  [anon_sym_class] = "class",
  [anon_sym_abstract] = "abstract",
  [anon_sym_local] = "local",
  [anon_sym_union] = "union",
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
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
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
  [sym_attribute_identifier] = "attribute_identifier",
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
  [sym_class] = "class",
  [sym_class_modifier] = "class_modifier",
  [sym_class_inheritance] = "class_inheritance",
  [sym_data_structure_definition] = "data_structure_definition",
  [sym_data_structure_type] = "data_structure_type",
  [sym_data_structure_block] = "data_structure_block",
  [sym_field] = "field",
  [sym_variable] = "variable",
  [sym_primitive_type] = "primitive_type",
  [sym_type_specifier] = "type_specifier",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_operator] = "operator",
  [sym_constant] = "constant",
  [sym_tag] = "tag",
  [sym_attribute] = "attribute",
  [sym_attribute_argument_list] = "attribute_argument_list",
  [sym_attribute_argument] = "attribute_argument",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_inheritance_repeat1] = "module_inheritance_repeat1",
  [aux_sym_module_block_repeat1] = "module_block_repeat1",
  [aux_sym_enum_block_repeat1] = "enum_block_repeat1",
  [aux_sym_rpcs_repeat1] = "rpcs_repeat1",
  [aux_sym_rpc_repeat1] = "rpc_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_class_repeat1] = "class_repeat1",
  [aux_sym_class_repeat2] = "class_repeat2",
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
  [anon_sym_class] = anon_sym_class,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_union] = anon_sym_union,
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
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
  [sym_attribute_identifier] = sym_attribute_identifier,
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
  [sym_class] = sym_class,
  [sym_class_modifier] = sym_class_modifier,
  [sym_class_inheritance] = sym_class_inheritance,
  [sym_data_structure_definition] = sym_data_structure_definition,
  [sym_data_structure_type] = sym_data_structure_type,
  [sym_data_structure_block] = sym_data_structure_block,
  [sym_field] = sym_field,
  [sym_variable] = sym_variable,
  [sym_primitive_type] = sym_primitive_type,
  [sym_type_specifier] = sym_type_specifier,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_operator] = sym_operator,
  [sym_constant] = sym_constant,
  [sym_tag] = sym_tag,
  [sym_attribute] = sym_attribute,
  [sym_attribute_argument_list] = sym_attribute_argument_list,
  [sym_attribute_argument] = sym_attribute_argument,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_inheritance_repeat1] = aux_sym_module_inheritance_repeat1,
  [aux_sym_module_block_repeat1] = aux_sym_module_block_repeat1,
  [aux_sym_enum_block_repeat1] = aux_sym_enum_block_repeat1,
  [aux_sym_rpcs_repeat1] = aux_sym_rpcs_repeat1,
  [aux_sym_rpc_repeat1] = aux_sym_rpc_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_class_repeat1] = aux_sym_class_repeat1,
  [aux_sym_class_repeat2] = aux_sym_class_repeat2,
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
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
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
  [sym_attribute_identifier] = {
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
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_class_inheritance] = {
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
  [sym_string] = {
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
  [sym_attribute_argument] = {
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
  [aux_sym_rpc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_repeat2] = {
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
  [62] = 19,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 50,
  [73] = 47,
  [74] = 44,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 77,
  [80] = 49,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 42,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 91,
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
  [104] = 97,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
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
  [126] = 20,
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
  [138] = 132,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 171,
  [182] = 182,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(146);
      ADVANCE_MAP(
        '"', 203,
        '&', 201,
        '(', 167,
        ')', 168,
        '*', 218,
        '+', 219,
        ',', 154,
        '-', 220,
        '.', 138,
        '/', 221,
        '0', 211,
        ':', 153,
        ';', 148,
        '<', 22,
        '=', 158,
        '>', 23,
        '?', 200,
        '@', 267,
        '[', 24,
      );
      if (lookahead == '\\') SKIP(142);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == 'v') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(80);
      if (lookahead == '{') ADVANCE(155);
      if (lookahead == '}') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
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
      if (lookahead == '\r') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(201);
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(153);
      if (lookahead == '?') ADVANCE(200);
      if (lookahead == '@') ADVANCE(267);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == '}') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(168);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == 'v') ADVANCE(248);
      if (lookahead == 'x') ADVANCE(241);
      if (lookahead == '}') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(168);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(271);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(269);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(8);
      if (lookahead == 'i') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') SKIP(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(215);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(216);
      END_STATE();
    case 24:
      if (lookahead == ']') ADVANCE(202);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 134:
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 137:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 141:
      if (eof) ADVANCE(146);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 142:
      if (eof) ADVANCE(146);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(141);
      END_STATE();
    case 143:
      if (eof) ADVANCE(146);
      if (lookahead == '\n') SKIP(145);
      END_STATE();
    case 144:
      if (eof) ADVANCE(146);
      if (lookahead == '\n') SKIP(145);
      if (lookahead == '\r') SKIP(143);
      END_STATE();
    case 145:
      if (eof) ADVANCE(146);
      if (lookahead == '(') ADVANCE(167);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '@') ADVANCE(267);
      if (lookahead == '\\') SKIP(144);
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(213);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '0') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(271);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_tag_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 's') ADVANCE(235);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(183);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(250);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(254);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(246);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(256);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'y') ADVANCE(258);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_attribute_identifier);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(270);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 145},
  [2] = {.lex_state = 145},
  [3] = {.lex_state = 145},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 145},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 145},
  [24] = {.lex_state = 145},
  [25] = {.lex_state = 145},
  [26] = {.lex_state = 145},
  [27] = {.lex_state = 145},
  [28] = {.lex_state = 145},
  [29] = {.lex_state = 145},
  [30] = {.lex_state = 145},
  [31] = {.lex_state = 145},
  [32] = {.lex_state = 145},
  [33] = {.lex_state = 145},
  [34] = {.lex_state = 145},
  [35] = {.lex_state = 145},
  [36] = {.lex_state = 145},
  [37] = {.lex_state = 145},
  [38] = {.lex_state = 145},
  [39] = {.lex_state = 145},
  [40] = {.lex_state = 145},
  [41] = {.lex_state = 145},
  [42] = {.lex_state = 145},
  [43] = {.lex_state = 145},
  [44] = {.lex_state = 145},
  [45] = {.lex_state = 145},
  [46] = {.lex_state = 145},
  [47] = {.lex_state = 145},
  [48] = {.lex_state = 145},
  [49] = {.lex_state = 145},
  [50] = {.lex_state = 145},
  [51] = {.lex_state = 145},
  [52] = {.lex_state = 145},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 14},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 20},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 204},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 12},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 21},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 12},
  [178] = {.lex_state = 12},
  [179] = {.lex_state = 12},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
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
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
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
    [anon_sym_DQUOTE] = ACTIONS(1),
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
    [sym_source_file] = STATE(149),
    [sym_package_definition] = STATE(2),
    [sym_typedef_definition] = STATE(2),
    [sym_import_definition] = STATE(2),
    [sym_module_definition] = STATE(2),
    [sym_enum_definition] = STATE(2),
    [sym_interface_definition] = STATE(2),
    [sym_class] = STATE(2),
    [sym_class_modifier] = STATE(69),
    [sym_data_structure_definition] = STATE(2),
    [sym_data_structure_type] = STATE(153),
    [sym_attribute] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_class_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_typedef] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_interface] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_abstract] = ACTIONS(21),
    [anon_sym_local] = ACTIONS(21),
    [anon_sym_union] = ACTIONS(23),
    [anon_sym_struct] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
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
    ACTIONS(19), 1,
      anon_sym_class,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(153), 1,
      sym_data_structure_type,
    ACTIONS(21), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(23), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(69), 2,
      sym_class_modifier,
      aux_sym_class_repeat1,
    STATE(3), 10,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_class,
      sym_data_structure_definition,
      sym_attribute,
      aux_sym_source_file_repeat1,
  [58] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_package,
    ACTIONS(34), 1,
      anon_sym_typedef,
    ACTIONS(37), 1,
      anon_sym_import,
    ACTIONS(40), 1,
      anon_sym_module,
    ACTIONS(43), 1,
      anon_sym_enum,
    ACTIONS(46), 1,
      anon_sym_interface,
    ACTIONS(49), 1,
      anon_sym_class,
    ACTIONS(58), 1,
      anon_sym_AT,
    STATE(153), 1,
      sym_data_structure_type,
    ACTIONS(52), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(55), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(69), 2,
      sym_class_modifier,
      aux_sym_class_repeat1,
    STATE(3), 10,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_class,
      sym_data_structure_definition,
      sym_attribute,
      aux_sym_source_file_repeat1,
  [116] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym_tag_number,
    STATE(15), 1,
      sym_tag,
    STATE(66), 1,
      sym_primitive_type,
    STATE(182), 1,
      sym_variable,
    STATE(6), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(63), 15,
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
  [156] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      sym_tag_number,
    STATE(15), 1,
      sym_tag,
    STATE(66), 1,
      sym_primitive_type,
    STATE(182), 1,
      sym_variable,
    STATE(5), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(69), 15,
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
  [196] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_tag_number,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_tag,
    STATE(66), 1,
      sym_primitive_type,
    STATE(182), 1,
      sym_variable,
    STATE(5), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(63), 15,
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
  [236] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_number_token1,
    ACTIONS(81), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(85), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(83), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(12), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [273] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_argument_list_repeat1,
    STATE(66), 1,
      sym_primitive_type,
    STATE(168), 1,
      sym_variable,
    ACTIONS(89), 15,
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
  [306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_argument_list_repeat1,
    STATE(66), 1,
      sym_primitive_type,
    STATE(125), 1,
      sym_variable,
    ACTIONS(63), 15,
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
  [339] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_number_token1,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_value,
    STATE(106), 1,
      sym_string,
    ACTIONS(81), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(83), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(7), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [380] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_argument_list_repeat1,
    STATE(66), 1,
      sym_primitive_type,
    STATE(118), 1,
      sym_variable,
    ACTIONS(63), 15,
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
  [413] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      aux_sym_number_token1,
    ACTIONS(105), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(114), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(111), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(108), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(12), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(66), 1,
      sym_primitive_type,
    STATE(163), 1,
      sym_variable,
    ACTIONS(63), 15,
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
  [477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_RBRACE,
      sym_tag_number,
    ACTIONS(119), 15,
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
  [502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(66), 1,
      sym_primitive_type,
    STATE(160), 1,
      sym_variable,
    ACTIONS(63), 15,
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
  [529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_RBRACE,
      sym_tag_number,
    ACTIONS(123), 15,
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
  [554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 15,
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
  [578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(127), 10,
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
  [601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_attribute_argument_list,
    ACTIONS(131), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 15,
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
  [647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(137), 10,
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
  [670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(141), 10,
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
  [693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    ACTIONS(145), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 14,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 14,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 14,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 14,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(157), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 14,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    ACTIONS(163), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(167), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    ACTIONS(171), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 14,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_SEMI,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_SEMI,
    ACTIONS(177), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      anon_sym_package,
      anon_sym_typedef,
      anon_sym_import,
      anon_sym_module,
      anon_sym_enum,
      anon_sym_interface,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
      anon_sym_union,
      anon_sym_struct,
      anon_sym_AT,
  [1287] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      sym_tag_number,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_AT,
    STATE(156), 1,
      sym_enum_field,
    STATE(162), 1,
      sym_tag,
    STATE(55), 2,
      sym_attribute,
      aux_sym_enum_block_repeat1,
  [1313] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 1,
      sym_tag_number,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_AT,
    STATE(156), 1,
      sym_enum_field,
    STATE(162), 1,
      sym_tag,
    STATE(54), 2,
      sym_attribute,
      aux_sym_enum_block_repeat1,
  [1339] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_tag_number,
    ACTIONS(215), 1,
      sym_identifier,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_enum_field,
    STATE(162), 1,
      sym_tag,
    STATE(54), 2,
      sym_attribute,
      aux_sym_enum_block_repeat1,
  [1365] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(57), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
    STATE(71), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(58), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
    STATE(71), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1407] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(240), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_AT,
    STATE(58), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
    STATE(71), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_tag_number,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(147), 1,
      sym_tag,
    STATE(61), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1448] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_tag_number,
    ACTIONS(248), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_tag,
    STATE(59), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1468] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(254), 1,
      sym_tag_number,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(147), 1,
      sym_tag,
    STATE(61), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym_attribute_argument_list,
    ACTIONS(131), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_default_value,
    ACTIONS(262), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1519] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      anon_sym_out,
    ACTIONS(270), 1,
      anon_sym_throw,
    STATE(94), 1,
      sym_rpc_out,
    STATE(145), 1,
      sym_rpc_throw,
  [1538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_class,
    ACTIONS(274), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(65), 2,
      sym_class_modifier,
      aux_sym_class_repeat1,
  [1553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(180), 1,
      sym_type_specifier,
    ACTIONS(277), 3,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
  [1568] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_out,
    ACTIONS(270), 1,
      anon_sym_throw,
    ACTIONS(281), 1,
      anon_sym_SEMI,
    STATE(110), 1,
      sym_rpc_out,
    STATE(159), 1,
      sym_rpc_throw,
  [1587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    STATE(108), 1,
      sym_default_value,
    ACTIONS(283), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_class,
    ACTIONS(21), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(65), 2,
      sym_class_modifier,
      aux_sym_class_repeat1,
  [1617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(81), 2,
      sym_class_inheritance,
      aux_sym_class_repeat2,
  [1631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_AT,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(78), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1675] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_argument_list,
    ACTIONS(293), 2,
      anon_sym_null,
      anon_sym_void,
  [1689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 4,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(301), 1,
      sym_attribute_identifier,
    STATE(88), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(139), 1,
      sym_attribute_argument,
  [1715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_identifier,
    ACTIONS(305), 1,
      anon_sym_AT,
    STATE(78), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_attribute_identifier,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(140), 1,
      sym_attribute_argument,
  [1745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(310), 1,
      sym_identifier,
    STATE(84), 2,
      sym_class_inheritance,
      aux_sym_class_repeat2,
  [1769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    STATE(142), 1,
      sym_default_value,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(314), 1,
      sym_identifier,
    STATE(85), 2,
      sym_class_inheritance,
      aux_sym_class_repeat2,
  [1797] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COLON,
    ACTIONS(319), 1,
      sym_identifier,
    STATE(84), 2,
      sym_class_inheritance,
      aux_sym_class_repeat2,
  [1811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COLON,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(84), 2,
      sym_class_inheritance,
      aux_sym_class_repeat2,
  [1825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1845] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(323), 1,
      sym_attribute_identifier,
    STATE(88), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(165), 1,
      sym_attribute_argument,
  [1861] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_COLON,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_module_block,
    STATE(120), 1,
      sym_module_inheritance,
  [1877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_argument_list,
    ACTIONS(330), 2,
      anon_sym_null,
      anon_sym_void,
  [1891] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_attribute_identifier,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(132), 1,
      sym_attribute_argument,
  [1907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym_attribute_identifier,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(138), 1,
      sym_attribute_argument,
  [1923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_throw,
    ACTIONS(281), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      sym_rpc_throw,
  [1945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_default_value,
  [1958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [1967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      sym_identifier,
    STATE(44), 1,
      sym_attribute_argument_list,
  [1980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [1989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 3,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
  [1998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_tag_number,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(137), 1,
      sym_tag,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [2020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [2029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(74), 1,
      sym_attribute_argument_list,
  [2051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_throw,
    ACTIONS(366), 1,
      anon_sym_SEMI,
    STATE(166), 1,
      sym_rpc_throw,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_EQ,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      sym_default_value,
  [2167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_enum_block,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(380), 1,
      anon_sym_COMMA,
  [2187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_data_structure_block,
  [2197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_module_block,
  [2207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_in,
    STATE(67), 1,
      sym_rpc_in,
  [2217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_in,
    STATE(64), 1,
      sym_rpc_in,
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(127), 1,
      aux_sym_module_inheritance_repeat1,
  [2237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
  [2247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
  [2257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_COLON,
      sym_identifier,
  [2265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      sym_identifier,
    STATE(127), 1,
      aux_sym_module_inheritance_repeat1,
  [2275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
  [2285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_SEMI,
      anon_sym_throw,
  [2293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_rpcs,
  [2303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_data_structure_block,
  [2313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_COMMA,
  [2323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_data_structure_block,
  [2333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_data_structure_block,
  [2343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym_module_inheritance_repeat1,
  [2353] = 3,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    ACTIONS(411), 1,
      sym_string_content,
    ACTIONS(413), 1,
      sym_comment,
  [2363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_COLON,
      sym_identifier,
  [2371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_COMMA,
  [2381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
  [2391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_RPAREN,
      sym_attribute_identifier,
  [2409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SEMI,
  [2424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_identifier,
  [2431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_SEMI,
  [2438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_identifier,
  [2445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_identifier,
  [2452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_identifier,
  [2459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
  [2473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COMMA,
  [2480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
  [2487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
  [2494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
  [2501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_identifier,
  [2508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_COMMA,
  [2515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SEMI,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SEMI,
  [2529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_SEMI,
  [2536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SEMI,
  [2543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym_identifier,
  [2550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
  [2557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_SEMI,
  [2564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_identifier,
  [2571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_COMMA,
  [2578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [2585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SEMI,
  [2592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
  [2599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SEMI,
  [2606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [2613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON,
  [2620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SEMI,
  [2627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
  [2634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
  [2641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_path,
  [2648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_SEMI,
  [2655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
  [2662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym_identifier,
  [2669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
  [2676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_identifier,
  [2683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COLON,
  [2690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 236,
  [SMALL_STATE(8)] = 273,
  [SMALL_STATE(9)] = 306,
  [SMALL_STATE(10)] = 339,
  [SMALL_STATE(11)] = 380,
  [SMALL_STATE(12)] = 413,
  [SMALL_STATE(13)] = 450,
  [SMALL_STATE(14)] = 477,
  [SMALL_STATE(15)] = 502,
  [SMALL_STATE(16)] = 529,
  [SMALL_STATE(17)] = 554,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 601,
  [SMALL_STATE(20)] = 626,
  [SMALL_STATE(21)] = 647,
  [SMALL_STATE(22)] = 670,
  [SMALL_STATE(23)] = 693,
  [SMALL_STATE(24)] = 715,
  [SMALL_STATE(25)] = 735,
  [SMALL_STATE(26)] = 755,
  [SMALL_STATE(27)] = 775,
  [SMALL_STATE(28)] = 795,
  [SMALL_STATE(29)] = 817,
  [SMALL_STATE(30)] = 837,
  [SMALL_STATE(31)] = 859,
  [SMALL_STATE(32)] = 881,
  [SMALL_STATE(33)] = 903,
  [SMALL_STATE(34)] = 923,
  [SMALL_STATE(35)] = 945,
  [SMALL_STATE(36)] = 964,
  [SMALL_STATE(37)] = 983,
  [SMALL_STATE(38)] = 1002,
  [SMALL_STATE(39)] = 1021,
  [SMALL_STATE(40)] = 1040,
  [SMALL_STATE(41)] = 1059,
  [SMALL_STATE(42)] = 1078,
  [SMALL_STATE(43)] = 1097,
  [SMALL_STATE(44)] = 1116,
  [SMALL_STATE(45)] = 1135,
  [SMALL_STATE(46)] = 1154,
  [SMALL_STATE(47)] = 1173,
  [SMALL_STATE(48)] = 1192,
  [SMALL_STATE(49)] = 1211,
  [SMALL_STATE(50)] = 1230,
  [SMALL_STATE(51)] = 1249,
  [SMALL_STATE(52)] = 1268,
  [SMALL_STATE(53)] = 1287,
  [SMALL_STATE(54)] = 1313,
  [SMALL_STATE(55)] = 1339,
  [SMALL_STATE(56)] = 1365,
  [SMALL_STATE(57)] = 1386,
  [SMALL_STATE(58)] = 1407,
  [SMALL_STATE(59)] = 1428,
  [SMALL_STATE(60)] = 1448,
  [SMALL_STATE(61)] = 1468,
  [SMALL_STATE(62)] = 1488,
  [SMALL_STATE(63)] = 1504,
  [SMALL_STATE(64)] = 1519,
  [SMALL_STATE(65)] = 1538,
  [SMALL_STATE(66)] = 1553,
  [SMALL_STATE(67)] = 1568,
  [SMALL_STATE(68)] = 1587,
  [SMALL_STATE(69)] = 1602,
  [SMALL_STATE(70)] = 1617,
  [SMALL_STATE(71)] = 1631,
  [SMALL_STATE(72)] = 1645,
  [SMALL_STATE(73)] = 1655,
  [SMALL_STATE(74)] = 1665,
  [SMALL_STATE(75)] = 1675,
  [SMALL_STATE(76)] = 1689,
  [SMALL_STATE(77)] = 1699,
  [SMALL_STATE(78)] = 1715,
  [SMALL_STATE(79)] = 1729,
  [SMALL_STATE(80)] = 1745,
  [SMALL_STATE(81)] = 1755,
  [SMALL_STATE(82)] = 1769,
  [SMALL_STATE(83)] = 1783,
  [SMALL_STATE(84)] = 1797,
  [SMALL_STATE(85)] = 1811,
  [SMALL_STATE(86)] = 1825,
  [SMALL_STATE(87)] = 1835,
  [SMALL_STATE(88)] = 1845,
  [SMALL_STATE(89)] = 1861,
  [SMALL_STATE(90)] = 1877,
  [SMALL_STATE(91)] = 1891,
  [SMALL_STATE(92)] = 1907,
  [SMALL_STATE(93)] = 1923,
  [SMALL_STATE(94)] = 1932,
  [SMALL_STATE(95)] = 1945,
  [SMALL_STATE(96)] = 1958,
  [SMALL_STATE(97)] = 1967,
  [SMALL_STATE(98)] = 1980,
  [SMALL_STATE(99)] = 1989,
  [SMALL_STATE(100)] = 1998,
  [SMALL_STATE(101)] = 2011,
  [SMALL_STATE(102)] = 2020,
  [SMALL_STATE(103)] = 2029,
  [SMALL_STATE(104)] = 2038,
  [SMALL_STATE(105)] = 2051,
  [SMALL_STATE(106)] = 2060,
  [SMALL_STATE(107)] = 2069,
  [SMALL_STATE(108)] = 2078,
  [SMALL_STATE(109)] = 2087,
  [SMALL_STATE(110)] = 2096,
  [SMALL_STATE(111)] = 2109,
  [SMALL_STATE(112)] = 2118,
  [SMALL_STATE(113)] = 2127,
  [SMALL_STATE(114)] = 2136,
  [SMALL_STATE(115)] = 2145,
  [SMALL_STATE(116)] = 2154,
  [SMALL_STATE(117)] = 2167,
  [SMALL_STATE(118)] = 2177,
  [SMALL_STATE(119)] = 2187,
  [SMALL_STATE(120)] = 2197,
  [SMALL_STATE(121)] = 2207,
  [SMALL_STATE(122)] = 2217,
  [SMALL_STATE(123)] = 2227,
  [SMALL_STATE(124)] = 2237,
  [SMALL_STATE(125)] = 2247,
  [SMALL_STATE(126)] = 2257,
  [SMALL_STATE(127)] = 2265,
  [SMALL_STATE(128)] = 2275,
  [SMALL_STATE(129)] = 2285,
  [SMALL_STATE(130)] = 2293,
  [SMALL_STATE(131)] = 2303,
  [SMALL_STATE(132)] = 2313,
  [SMALL_STATE(133)] = 2323,
  [SMALL_STATE(134)] = 2333,
  [SMALL_STATE(135)] = 2343,
  [SMALL_STATE(136)] = 2353,
  [SMALL_STATE(137)] = 2363,
  [SMALL_STATE(138)] = 2371,
  [SMALL_STATE(139)] = 2381,
  [SMALL_STATE(140)] = 2391,
  [SMALL_STATE(141)] = 2401,
  [SMALL_STATE(142)] = 2409,
  [SMALL_STATE(143)] = 2417,
  [SMALL_STATE(144)] = 2424,
  [SMALL_STATE(145)] = 2431,
  [SMALL_STATE(146)] = 2438,
  [SMALL_STATE(147)] = 2445,
  [SMALL_STATE(148)] = 2452,
  [SMALL_STATE(149)] = 2459,
  [SMALL_STATE(150)] = 2466,
  [SMALL_STATE(151)] = 2473,
  [SMALL_STATE(152)] = 2480,
  [SMALL_STATE(153)] = 2487,
  [SMALL_STATE(154)] = 2494,
  [SMALL_STATE(155)] = 2501,
  [SMALL_STATE(156)] = 2508,
  [SMALL_STATE(157)] = 2515,
  [SMALL_STATE(158)] = 2522,
  [SMALL_STATE(159)] = 2529,
  [SMALL_STATE(160)] = 2536,
  [SMALL_STATE(161)] = 2543,
  [SMALL_STATE(162)] = 2550,
  [SMALL_STATE(163)] = 2557,
  [SMALL_STATE(164)] = 2564,
  [SMALL_STATE(165)] = 2571,
  [SMALL_STATE(166)] = 2578,
  [SMALL_STATE(167)] = 2585,
  [SMALL_STATE(168)] = 2592,
  [SMALL_STATE(169)] = 2599,
  [SMALL_STATE(170)] = 2606,
  [SMALL_STATE(171)] = 2613,
  [SMALL_STATE(172)] = 2620,
  [SMALL_STATE(173)] = 2627,
  [SMALL_STATE(174)] = 2634,
  [SMALL_STATE(175)] = 2641,
  [SMALL_STATE(176)] = 2648,
  [SMALL_STATE(177)] = 2655,
  [SMALL_STATE(178)] = 2662,
  [SMALL_STATE(179)] = 2669,
  [SMALL_STATE(180)] = 2676,
  [SMALL_STATE(181)] = 2683,
  [SMALL_STATE(182)] = 2690,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 5, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 4, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 5, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 6, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2, 0, 0),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2, 0, 0), SHIFT_REPEAT(100),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_repeat2, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_in, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_modifier, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 4, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 2, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 4, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 5, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 6, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_out, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inheritance, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument, 2, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_type, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_throw, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
