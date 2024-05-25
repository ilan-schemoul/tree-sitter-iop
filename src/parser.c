#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 186
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  anon_sym_static = 26,
  anon_sym_int = 27,
  anon_sym_string = 28,
  anon_sym_uint = 29,
  anon_sym_long = 30,
  anon_sym_ulong = 31,
  anon_sym_byte = 32,
  anon_sym_ubyte = 33,
  anon_sym_short = 34,
  anon_sym_ushort = 35,
  anon_sym_bool = 36,
  anon_sym_double = 37,
  anon_sym_bytes = 38,
  anon_sym_xml = 39,
  anon_sym_QMARK = 40,
  anon_sym_AMP = 41,
  anon_sym_LBRACK_RBRACK = 42,
  anon_sym_DQUOTE = 43,
  sym_string_content = 44,
  aux_sym_number_token1 = 45,
  aux_sym_number_token2 = 46,
  aux_sym_number_token3 = 47,
  anon_sym_LT_LT = 48,
  anon_sym_GT_GT = 49,
  anon_sym_STAR_STAR = 50,
  anon_sym_STAR = 51,
  anon_sym_PLUS = 52,
  anon_sym_DASH = 53,
  anon_sym_SLASH = 54,
  anon_sym_true = 55,
  anon_sym_false = 56,
  sym_tag_number = 57,
  sym_identifier = 58,
  anon_sym_AT = 59,
  sym_attribute_identifier = 60,
  sym_comment = 61,
  sym_source_file = 62,
  sym_package_definition = 63,
  sym_typedef_definition = 64,
  sym_import_definition = 65,
  sym_module_definition = 66,
  sym_module_inheritance = 67,
  sym_module_block = 68,
  sym_module_field = 69,
  sym_enum_definition = 70,
  sym_enum_block = 71,
  sym_enum_field = 72,
  sym_default_value = 73,
  sym_interface_definition = 74,
  sym_rpcs = 75,
  sym_rpc = 76,
  sym_rpc_in = 77,
  sym_rpc_out = 78,
  sym_rpc_throw = 79,
  sym_argument_list = 80,
  sym_class_definition = 81,
  sym_class_modifier = 82,
  sym_class_inheritance = 83,
  sym_data_structure_definition = 84,
  sym_data_structure_type = 85,
  sym_data_structure_block = 86,
  sym_field = 87,
  sym_field_qualifier = 88,
  sym_variable = 89,
  sym_primitive_type = 90,
  sym_type_specifier = 91,
  sym_value = 92,
  sym_string = 93,
  sym_number = 94,
  sym_operator = 95,
  sym_constant = 96,
  sym_tag = 97,
  sym_attribute = 98,
  sym_attribute_argument_list = 99,
  sym_attribute_argument = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_module_inheritance_repeat1 = 102,
  aux_sym_module_block_repeat1 = 103,
  aux_sym_enum_block_repeat1 = 104,
  aux_sym_rpcs_repeat1 = 105,
  aux_sym_rpc_repeat1 = 106,
  aux_sym_argument_list_repeat1 = 107,
  aux_sym_class_definition_repeat1 = 108,
  aux_sym_class_definition_repeat2 = 109,
  aux_sym_data_structure_block_repeat1 = 110,
  aux_sym_value_repeat1 = 111,
  aux_sym_attribute_argument_list_repeat1 = 112,
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
  [anon_sym_static] = "static",
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
  [sym_class_definition] = "class_definition",
  [sym_class_modifier] = "class_modifier",
  [sym_class_inheritance] = "class_inheritance",
  [sym_data_structure_definition] = "data_structure_definition",
  [sym_data_structure_type] = "data_structure_type",
  [sym_data_structure_block] = "data_structure_block",
  [sym_field] = "field",
  [sym_field_qualifier] = "field_qualifier",
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
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
  [aux_sym_class_definition_repeat2] = "class_definition_repeat2",
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
  [anon_sym_static] = anon_sym_static,
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
  [sym_class_definition] = sym_class_definition,
  [sym_class_modifier] = sym_class_modifier,
  [sym_class_inheritance] = sym_class_inheritance,
  [sym_data_structure_definition] = sym_data_structure_definition,
  [sym_data_structure_type] = sym_data_structure_type,
  [sym_data_structure_block] = sym_data_structure_block,
  [sym_field] = sym_field,
  [sym_field_qualifier] = sym_field_qualifier,
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
  [aux_sym_class_definition_repeat1] = aux_sym_class_definition_repeat1,
  [aux_sym_class_definition_repeat2] = aux_sym_class_definition_repeat2,
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
  [anon_sym_static] = {
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
  [sym_class_definition] = {
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
  [sym_field_qualifier] = {
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
  [aux_sym_class_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_definition_repeat2] = {
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
  [63] = 26,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 64,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 65,
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
  [86] = 55,
  [87] = 50,
  [88] = 40,
  [89] = 89,
  [90] = 90,
  [91] = 52,
  [92] = 48,
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
  [110] = 106,
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
  [128] = 121,
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
  [143] = 142,
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
  [180] = 20,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 156,
  [185] = 185,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(152);
      ADVANCE_MAP(
        '"', 211,
        '&', 209,
        '(', 173,
        ')', 174,
        '*', 234,
        '+', 235,
        ',', 160,
        '-', 236,
        '.', 144,
        '/', 237,
        '0', 227,
        ':', 159,
        ';', 154,
        '<', 25,
        '=', 164,
        '>', 26,
        '?', 208,
        '@', 288,
        '[', 27,
      );
      if (lookahead == '\\') SKIP(148);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'v') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(86);
      if (lookahead == '{') ADVANCE(161);
      if (lookahead == '}') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(22);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(16);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(15);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(14);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(23);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '\r') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(24);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24);
      if (lookahead == '\r') SKIP(11);
      END_STATE();
    case 13:
      if (lookahead == '\r') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(291);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(209);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '?') ADVANCE(208);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == '}') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == 'b') ADVANCE(273);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 's') ADVANCE(253);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == 'v') ADVANCE(268);
      if (lookahead == 'x') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'b') ADVANCE(273);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == 'v') ADVANCE(268);
      if (lookahead == 'x') ADVANCE(261);
      if (lookahead == '}') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(10);
      if (lookahead == 'i') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 25:
      if (lookahead == '<') ADVANCE(231);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(232);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(210);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(117);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(155);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(188);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(97);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 140:
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 142:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 143:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 147:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 148:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(147);
      END_STATE();
    case 149:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(151);
      END_STATE();
    case 150:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(151);
      if (lookahead == '\r') SKIP(149);
      END_STATE();
    case 151:
      if (eof) ADVANCE(152);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(154);
      if (lookahead == '@') ADVANCE(288);
      if (lookahead == '\\') SKIP(150);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(220);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\r') ADVANCE(218);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(215);
      if (lookahead != 0) ADVANCE(214);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == '/') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'x') ADVANCE(229);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '0') ADVANCE(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(292);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_tag_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(260);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(269);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(269);
      if (lookahead == 't') ADVANCE(275);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(274);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(258);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == 'y') ADVANCE(278);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(283);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_attribute_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(293);
      if (lookahead == '\\') ADVANCE(291);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 151},
  [2] = {.lex_state = 151},
  [3] = {.lex_state = 151},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 151},
  [27] = {.lex_state = 151},
  [28] = {.lex_state = 151},
  [29] = {.lex_state = 151},
  [30] = {.lex_state = 151},
  [31] = {.lex_state = 151},
  [32] = {.lex_state = 151},
  [33] = {.lex_state = 151},
  [34] = {.lex_state = 151},
  [35] = {.lex_state = 151},
  [36] = {.lex_state = 151},
  [37] = {.lex_state = 151},
  [38] = {.lex_state = 151},
  [39] = {.lex_state = 151},
  [40] = {.lex_state = 151},
  [41] = {.lex_state = 151},
  [42] = {.lex_state = 151},
  [43] = {.lex_state = 151},
  [44] = {.lex_state = 151},
  [45] = {.lex_state = 151},
  [46] = {.lex_state = 151},
  [47] = {.lex_state = 151},
  [48] = {.lex_state = 151},
  [49] = {.lex_state = 151},
  [50] = {.lex_state = 151},
  [51] = {.lex_state = 151},
  [52] = {.lex_state = 151},
  [53] = {.lex_state = 151},
  [54] = {.lex_state = 151},
  [55] = {.lex_state = 151},
  [56] = {.lex_state = 151},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 15},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 15},
  [87] = {.lex_state = 15},
  [88] = {.lex_state = 15},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 15},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 15},
  [97] = {.lex_state = 15},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 15},
  [100] = {.lex_state = 14},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 23},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 15},
  [134] = {.lex_state = 220},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 15},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 15},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 15},
  [150] = {.lex_state = 15},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 15},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 15},
  [180] = {.lex_state = 15},
  [181] = {.lex_state = 15},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 24},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
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
    [anon_sym_static] = ACTIONS(1),
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
    [sym_source_file] = STATE(173),
    [sym_package_definition] = STATE(3),
    [sym_typedef_definition] = STATE(3),
    [sym_import_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [sym_enum_definition] = STATE(3),
    [sym_interface_definition] = STATE(3),
    [sym_class_definition] = STATE(3),
    [sym_class_modifier] = STATE(82),
    [sym_data_structure_definition] = STATE(3),
    [sym_data_structure_type] = STATE(167),
    [sym_attribute] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_class_definition_repeat1] = STATE(82),
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
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_package,
    ACTIONS(32), 1,
      anon_sym_typedef,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(38), 1,
      anon_sym_module,
    ACTIONS(41), 1,
      anon_sym_enum,
    ACTIONS(44), 1,
      anon_sym_interface,
    ACTIONS(47), 1,
      anon_sym_class,
    ACTIONS(56), 1,
      anon_sym_AT,
    STATE(167), 1,
      sym_data_structure_type,
    ACTIONS(50), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(53), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(82), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
    STATE(2), 10,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_class_definition,
      sym_data_structure_definition,
      sym_attribute,
      aux_sym_source_file_repeat1,
  [58] = 15,
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
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_data_structure_type,
    ACTIONS(21), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(23), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(82), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
    STATE(2), 10,
      sym_package_definition,
      sym_typedef_definition,
      sym_import_definition,
      sym_module_definition,
      sym_enum_definition,
      sym_interface_definition,
      sym_class_definition,
      sym_data_structure_definition,
      sym_attribute,
      aux_sym_source_file_repeat1,
  [116] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      anon_sym_static,
    ACTIONS(69), 1,
      sym_tag_number,
    STATE(11), 1,
      sym_tag,
    STATE(19), 1,
      sym_field_qualifier,
    STATE(74), 1,
      sym_primitive_type,
    STATE(172), 1,
      sym_variable,
    STATE(4), 2,
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
  [162] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      anon_sym_static,
    ACTIONS(78), 1,
      sym_tag_number,
    STATE(11), 1,
      sym_tag,
    STATE(19), 1,
      sym_field_qualifier,
    STATE(74), 1,
      sym_primitive_type,
    STATE(172), 1,
      sym_variable,
    STATE(4), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(74), 15,
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
  [208] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_static,
    ACTIONS(78), 1,
      sym_tag_number,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_tag,
    STATE(19), 1,
      sym_field_qualifier,
    STATE(74), 1,
      sym_primitive_type,
    STATE(172), 1,
      sym_variable,
    STATE(5), 2,
      sym_field,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(74), 15,
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
  [254] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_argument_list_repeat1,
    STATE(74), 1,
      sym_primitive_type,
    STATE(132), 1,
      sym_variable,
    ACTIONS(74), 15,
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
  [287] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    ACTIONS(89), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(98), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(84), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(95), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(92), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(8), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [324] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_argument_list_repeat1,
    STATE(74), 1,
      sym_primitive_type,
    STATE(124), 1,
      sym_variable,
    ACTIONS(74), 15,
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
  [357] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_number_token1,
    ACTIONS(107), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(111), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(109), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(8), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_static,
    STATE(17), 1,
      sym_field_qualifier,
    STATE(74), 1,
      sym_primitive_type,
    STATE(155), 1,
      sym_variable,
    ACTIONS(74), 15,
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
  [427] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_number_token1,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_value,
    STATE(103), 1,
      sym_string,
    ACTIONS(107), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(109), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(10), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [468] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      aux_sym_argument_list_repeat1,
    STATE(74), 1,
      sym_primitive_type,
    STATE(171), 1,
      sym_variable,
    ACTIONS(117), 15,
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
  [501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      sym_tag_number,
    ACTIONS(124), 16,
      anon_sym_void,
      anon_sym_static,
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
  [527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      sym_tag_number,
    ACTIONS(128), 16,
      anon_sym_void,
      anon_sym_static,
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
  [553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_RBRACE,
      sym_tag_number,
    ACTIONS(132), 16,
      anon_sym_void,
      anon_sym_static,
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
  [579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 1,
      sym_primitive_type,
    STATE(152), 1,
      sym_variable,
    ACTIONS(74), 15,
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
  [606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 1,
      sym_primitive_type,
    STATE(163), 1,
      sym_variable,
    ACTIONS(74), 15,
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
  [633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 1,
      sym_primitive_type,
    STATE(155), 1,
      sym_variable,
    ACTIONS(74), 15,
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
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 16,
      anon_sym_void,
      anon_sym_static,
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
  [682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(136), 15,
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
  [706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 15,
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
  [727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(140), 10,
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
  [750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(144), 10,
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
  [773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(148), 10,
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
  [796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_attribute_argument_list,
    ACTIONS(152), 13,
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
  [821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 14,
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
  [841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 14,
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
  [861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 14,
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
  [881] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(162), 13,
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
    ACTIONS(166), 14,
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
    ACTIONS(170), 1,
      anon_sym_SEMI,
    ACTIONS(168), 13,
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
  [945] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    ACTIONS(172), 13,
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
  [967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(176), 13,
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
  [989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 14,
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
  [1009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    ACTIONS(182), 13,
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
  [1031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(186), 13,
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
  [1053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 14,
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
  [1073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 13,
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
  [1092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 13,
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
  [1111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 13,
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
  [1130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 13,
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
  [1149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 13,
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
  [1168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 13,
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
  [1187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 13,
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
  [1206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 13,
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
  [1225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 13,
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
  [1244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 13,
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
  [1263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 13,
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
  [1282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 13,
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
  [1301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 13,
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
  [1320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 13,
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
  [1339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 13,
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
  [1358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 13,
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
  [1377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 13,
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
  [1396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 13,
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
  [1415] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      sym_tag_number,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_AT,
    STATE(165), 1,
      sym_enum_field,
    STATE(166), 1,
      sym_tag,
    STATE(59), 2,
      sym_attribute,
      aux_sym_enum_block_repeat1,
  [1441] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_tag_number,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_AT,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_enum_field,
    STATE(166), 1,
      sym_tag,
    STATE(57), 2,
      sym_attribute,
      aux_sym_enum_block_repeat1,
  [1467] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 1,
      sym_tag_number,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(240), 1,
      anon_sym_AT,
    STATE(165), 1,
      sym_enum_field,
    STATE(166), 1,
      sym_tag,
    STATE(59), 2,
      sym_attribute,
      aux_sym_enum_block_repeat1,
  [1493] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(61), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
    STATE(89), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1514] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_AT,
    STATE(61), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
    STATE(89), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_AT,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(60), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
    STATE(89), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_attribute_argument_list,
    ACTIONS(152), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1572] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 1,
      sym_attribute_identifier,
    STATE(68), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(129), 1,
      sym_string,
    STATE(143), 1,
      sym_attribute_argument,
  [1594] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym_attribute_identifier,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(121), 1,
      sym_attribute_argument,
    STATE(129), 1,
      sym_string,
  [1616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(267), 1,
      sym_tag_number,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(162), 1,
      sym_tag,
    STATE(66), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1636] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym_attribute_identifier,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(129), 1,
      sym_string,
    STATE(142), 1,
      sym_attribute_argument,
  [1658] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      sym_attribute_identifier,
    STATE(68), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(129), 1,
      sym_string,
    STATE(154), 1,
      sym_attribute_argument,
  [1680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_tag_number,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(162), 1,
      sym_tag,
    STATE(66), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1700] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_tag_number,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_tag,
    STATE(69), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [1720] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(261), 1,
      sym_attribute_identifier,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(128), 1,
      sym_attribute_argument,
    STATE(129), 1,
      sym_string,
  [1742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_class,
    ACTIONS(293), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(72), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [1757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_EQ,
    STATE(105), 1,
      sym_default_value,
    ACTIONS(296), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_identifier,
    STATE(147), 1,
      sym_type_specifier,
    ACTIONS(300), 3,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
  [1787] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(306), 1,
      anon_sym_out,
    ACTIONS(308), 1,
      anon_sym_throw,
    STATE(98), 1,
      sym_rpc_out,
    STATE(161), 1,
      sym_rpc_throw,
  [1806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_EQ,
    STATE(107), 1,
      sym_default_value,
    ACTIONS(310), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COLON,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_data_structure_block,
    STATE(90), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [1838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COLON,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_data_structure_block,
    STATE(90), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [1855] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_out,
    ACTIONS(308), 1,
      anon_sym_throw,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(120), 1,
      sym_rpc_out,
    STATE(148), 1,
      sym_rpc_throw,
  [1874] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COLON,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_data_structure_block,
    STATE(78), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [1891] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COLON,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_data_structure_block,
    STATE(77), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [1908] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_class,
    ACTIONS(21), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(72), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [1923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 4,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [1933] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_AT,
    STATE(84), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_COLON,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_module_block,
    STATE(137), 1,
      sym_module_inheritance,
  [1963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [1993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(84), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [2007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COLON,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(90), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [2031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [2041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_argument_list,
    ACTIONS(338), 2,
      anon_sym_null,
      anon_sym_void,
  [2055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_EQ,
    STATE(141), 1,
      sym_default_value,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_argument_list,
    ACTIONS(344), 2,
      anon_sym_null,
      anon_sym_void,
  [2083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [2093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [2102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_throw,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_rpc_throw,
  [2115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_attribute_identifier,
  [2133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2178] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(86), 1,
      sym_attribute_argument_list,
  [2191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [2209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 3,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
  [2218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(55), 1,
      sym_attribute_argument_list,
  [2231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      sym_default_value,
  [2298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_EQ,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      sym_default_value,
  [2311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    ACTIONS(308), 1,
      anon_sym_throw,
    STATE(161), 1,
      sym_rpc_throw,
  [2333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      anon_sym_COMMA,
  [2343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_LBRACE,
  [2353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_throw,
  [2361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
    ACTIONS(394), 1,
      anon_sym_COMMA,
  [2371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_in,
    STATE(75), 1,
      sym_rpc_in,
  [2381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [2389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      sym_identifier,
    STATE(133), 1,
      aux_sym_module_inheritance_repeat1,
  [2399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      anon_sym_COMMA,
  [2409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_LBRACE,
  [2427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_in,
    STATE(79), 1,
      sym_rpc_in,
  [2437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
  [2447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym_identifier,
    STATE(133), 1,
      aux_sym_module_inheritance_repeat1,
  [2457] = 3,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    ACTIONS(411), 1,
      sym_string_content,
    ACTIONS(413), 1,
      sym_comment,
  [2467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_enum_block,
  [2477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      sym_tag_number,
      sym_identifier,
  [2485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_module_block,
  [2495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_rpcs,
  [2505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(127), 1,
      aux_sym_module_inheritance_repeat1,
  [2515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_data_structure_block,
  [2525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
  [2543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
  [2553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
  [2560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      sym_identifier,
  [2567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      sym_identifier,
  [2574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
  [2581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SEMI,
  [2588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_identifier,
  [2595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
  [2602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_SEMI,
  [2609] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [2616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
  [2623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
  [2630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_SEMI,
  [2637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_COLON,
  [2644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SEMI,
  [2651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_identifier,
  [2658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_SEMI,
  [2665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_SEMI,
  [2672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SEMI,
  [2679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [2686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SEMI,
  [2693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [2700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_COMMA,
  [2707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_identifier,
  [2714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
  [2721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_SEMI,
  [2728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_SEMI,
  [2735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COMMA,
  [2742] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COMMA,
  [2749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_SEMI,
  [2756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
  [2763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym_identifier,
  [2770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
  [2777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_SEMI,
  [2784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
  [2791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_identifier,
  [2798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_identifier,
  [2805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
  [2812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym_identifier,
  [2819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
  [2826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym_path,
  [2833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_COLON,
  [2840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 254,
  [SMALL_STATE(8)] = 287,
  [SMALL_STATE(9)] = 324,
  [SMALL_STATE(10)] = 357,
  [SMALL_STATE(11)] = 394,
  [SMALL_STATE(12)] = 427,
  [SMALL_STATE(13)] = 468,
  [SMALL_STATE(14)] = 501,
  [SMALL_STATE(15)] = 527,
  [SMALL_STATE(16)] = 553,
  [SMALL_STATE(17)] = 579,
  [SMALL_STATE(18)] = 606,
  [SMALL_STATE(19)] = 633,
  [SMALL_STATE(20)] = 660,
  [SMALL_STATE(21)] = 682,
  [SMALL_STATE(22)] = 706,
  [SMALL_STATE(23)] = 727,
  [SMALL_STATE(24)] = 750,
  [SMALL_STATE(25)] = 773,
  [SMALL_STATE(26)] = 796,
  [SMALL_STATE(27)] = 821,
  [SMALL_STATE(28)] = 841,
  [SMALL_STATE(29)] = 861,
  [SMALL_STATE(30)] = 881,
  [SMALL_STATE(31)] = 903,
  [SMALL_STATE(32)] = 923,
  [SMALL_STATE(33)] = 945,
  [SMALL_STATE(34)] = 967,
  [SMALL_STATE(35)] = 989,
  [SMALL_STATE(36)] = 1009,
  [SMALL_STATE(37)] = 1031,
  [SMALL_STATE(38)] = 1053,
  [SMALL_STATE(39)] = 1073,
  [SMALL_STATE(40)] = 1092,
  [SMALL_STATE(41)] = 1111,
  [SMALL_STATE(42)] = 1130,
  [SMALL_STATE(43)] = 1149,
  [SMALL_STATE(44)] = 1168,
  [SMALL_STATE(45)] = 1187,
  [SMALL_STATE(46)] = 1206,
  [SMALL_STATE(47)] = 1225,
  [SMALL_STATE(48)] = 1244,
  [SMALL_STATE(49)] = 1263,
  [SMALL_STATE(50)] = 1282,
  [SMALL_STATE(51)] = 1301,
  [SMALL_STATE(52)] = 1320,
  [SMALL_STATE(53)] = 1339,
  [SMALL_STATE(54)] = 1358,
  [SMALL_STATE(55)] = 1377,
  [SMALL_STATE(56)] = 1396,
  [SMALL_STATE(57)] = 1415,
  [SMALL_STATE(58)] = 1441,
  [SMALL_STATE(59)] = 1467,
  [SMALL_STATE(60)] = 1493,
  [SMALL_STATE(61)] = 1514,
  [SMALL_STATE(62)] = 1535,
  [SMALL_STATE(63)] = 1556,
  [SMALL_STATE(64)] = 1572,
  [SMALL_STATE(65)] = 1594,
  [SMALL_STATE(66)] = 1616,
  [SMALL_STATE(67)] = 1636,
  [SMALL_STATE(68)] = 1658,
  [SMALL_STATE(69)] = 1680,
  [SMALL_STATE(70)] = 1700,
  [SMALL_STATE(71)] = 1720,
  [SMALL_STATE(72)] = 1742,
  [SMALL_STATE(73)] = 1757,
  [SMALL_STATE(74)] = 1772,
  [SMALL_STATE(75)] = 1787,
  [SMALL_STATE(76)] = 1806,
  [SMALL_STATE(77)] = 1821,
  [SMALL_STATE(78)] = 1838,
  [SMALL_STATE(79)] = 1855,
  [SMALL_STATE(80)] = 1874,
  [SMALL_STATE(81)] = 1891,
  [SMALL_STATE(82)] = 1908,
  [SMALL_STATE(83)] = 1923,
  [SMALL_STATE(84)] = 1933,
  [SMALL_STATE(85)] = 1947,
  [SMALL_STATE(86)] = 1963,
  [SMALL_STATE(87)] = 1973,
  [SMALL_STATE(88)] = 1983,
  [SMALL_STATE(89)] = 1993,
  [SMALL_STATE(90)] = 2007,
  [SMALL_STATE(91)] = 2021,
  [SMALL_STATE(92)] = 2031,
  [SMALL_STATE(93)] = 2041,
  [SMALL_STATE(94)] = 2055,
  [SMALL_STATE(95)] = 2069,
  [SMALL_STATE(96)] = 2083,
  [SMALL_STATE(97)] = 2093,
  [SMALL_STATE(98)] = 2102,
  [SMALL_STATE(99)] = 2115,
  [SMALL_STATE(100)] = 2124,
  [SMALL_STATE(101)] = 2133,
  [SMALL_STATE(102)] = 2142,
  [SMALL_STATE(103)] = 2151,
  [SMALL_STATE(104)] = 2160,
  [SMALL_STATE(105)] = 2169,
  [SMALL_STATE(106)] = 2178,
  [SMALL_STATE(107)] = 2191,
  [SMALL_STATE(108)] = 2200,
  [SMALL_STATE(109)] = 2209,
  [SMALL_STATE(110)] = 2218,
  [SMALL_STATE(111)] = 2231,
  [SMALL_STATE(112)] = 2240,
  [SMALL_STATE(113)] = 2249,
  [SMALL_STATE(114)] = 2258,
  [SMALL_STATE(115)] = 2267,
  [SMALL_STATE(116)] = 2276,
  [SMALL_STATE(117)] = 2285,
  [SMALL_STATE(118)] = 2298,
  [SMALL_STATE(119)] = 2311,
  [SMALL_STATE(120)] = 2320,
  [SMALL_STATE(121)] = 2333,
  [SMALL_STATE(122)] = 2343,
  [SMALL_STATE(123)] = 2353,
  [SMALL_STATE(124)] = 2361,
  [SMALL_STATE(125)] = 2371,
  [SMALL_STATE(126)] = 2381,
  [SMALL_STATE(127)] = 2389,
  [SMALL_STATE(128)] = 2399,
  [SMALL_STATE(129)] = 2409,
  [SMALL_STATE(130)] = 2417,
  [SMALL_STATE(131)] = 2427,
  [SMALL_STATE(132)] = 2437,
  [SMALL_STATE(133)] = 2447,
  [SMALL_STATE(134)] = 2457,
  [SMALL_STATE(135)] = 2467,
  [SMALL_STATE(136)] = 2477,
  [SMALL_STATE(137)] = 2485,
  [SMALL_STATE(138)] = 2495,
  [SMALL_STATE(139)] = 2505,
  [SMALL_STATE(140)] = 2515,
  [SMALL_STATE(141)] = 2525,
  [SMALL_STATE(142)] = 2533,
  [SMALL_STATE(143)] = 2543,
  [SMALL_STATE(144)] = 2553,
  [SMALL_STATE(145)] = 2560,
  [SMALL_STATE(146)] = 2567,
  [SMALL_STATE(147)] = 2574,
  [SMALL_STATE(148)] = 2581,
  [SMALL_STATE(149)] = 2588,
  [SMALL_STATE(150)] = 2595,
  [SMALL_STATE(151)] = 2602,
  [SMALL_STATE(152)] = 2609,
  [SMALL_STATE(153)] = 2616,
  [SMALL_STATE(154)] = 2623,
  [SMALL_STATE(155)] = 2630,
  [SMALL_STATE(156)] = 2637,
  [SMALL_STATE(157)] = 2644,
  [SMALL_STATE(158)] = 2651,
  [SMALL_STATE(159)] = 2658,
  [SMALL_STATE(160)] = 2665,
  [SMALL_STATE(161)] = 2672,
  [SMALL_STATE(162)] = 2679,
  [SMALL_STATE(163)] = 2686,
  [SMALL_STATE(164)] = 2693,
  [SMALL_STATE(165)] = 2700,
  [SMALL_STATE(166)] = 2707,
  [SMALL_STATE(167)] = 2714,
  [SMALL_STATE(168)] = 2721,
  [SMALL_STATE(169)] = 2728,
  [SMALL_STATE(170)] = 2735,
  [SMALL_STATE(171)] = 2742,
  [SMALL_STATE(172)] = 2749,
  [SMALL_STATE(173)] = 2756,
  [SMALL_STATE(174)] = 2763,
  [SMALL_STATE(175)] = 2770,
  [SMALL_STATE(176)] = 2777,
  [SMALL_STATE(177)] = 2784,
  [SMALL_STATE(178)] = 2791,
  [SMALL_STATE(179)] = 2798,
  [SMALL_STATE(180)] = 2805,
  [SMALL_STATE(181)] = 2812,
  [SMALL_STATE(182)] = 2819,
  [SMALL_STATE(183)] = 2826,
  [SMALL_STATE(184)] = 2833,
  [SMALL_STATE(185)] = 2840,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_qualifier, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 4, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 5, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2, 0, 0),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(136),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_in, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_modifier, 1, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 6, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 5, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 4, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 2, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_out, 2, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inheritance, 2, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 3, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_throw, 2, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [475] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_type, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
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
