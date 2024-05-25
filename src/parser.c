#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 200
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
  sym_type = 90,
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
  [sym_type] = "type",
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
  [sym_type] = sym_type,
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
  [sym_type] = {
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
  [31] = 7,
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
  [50] = 22,
  [51] = 12,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 14,
  [57] = 11,
  [58] = 58,
  [59] = 59,
  [60] = 13,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 65,
  [67] = 63,
  [68] = 65,
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
  [79] = 7,
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
  [100] = 13,
  [101] = 12,
  [102] = 102,
  [103] = 103,
  [104] = 11,
  [105] = 105,
  [106] = 14,
  [107] = 22,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 112,
  [115] = 115,
  [116] = 112,
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
  [140] = 135,
  [141] = 138,
  [142] = 135,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 138,
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
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 26,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 171,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(155);
      ADVANCE_MAP(
        '"', 213,
        '&', 211,
        '(', 176,
        ')', 177,
        '*', 236,
        '+', 237,
        ',', 163,
        '-', 238,
        '.', 147,
        '/', 239,
        '0', 229,
        ':', 162,
        ';', 157,
        '<', 29,
        '=', 167,
        '>', 30,
        '?', 210,
        '@', 302,
        '[', 31,
      );
      if (lookahead == '\\') SKIP(151);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'v') ADVANCE(101);
      if (lookahead == 'x') ADVANCE(90);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(21);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(16);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(18);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '\r') SKIP(11);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(28);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(28);
      if (lookahead == '\r') SKIP(13);
      END_STATE();
    case 15:
      if (lookahead == '\r') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '0') ADVANCE(229);
      if (lookahead == '\\') SKIP(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '"', 213,
        '*', 236,
        '+', 237,
        '-', 238,
        '.', 147,
        '/', 239,
        '0', 229,
        '<', 29,
        '>', 30,
      );
      if (lookahead == '\\') SKIP(4);
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead == 't') ADVANCE(285);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 18:
      if (lookahead == '&') ADVANCE(211);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '?') ADVANCE(210);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') SKIP(10);
      if (lookahead == '}') ADVANCE(165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'b') ADVANCE(283);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == 'v') ADVANCE(278);
      if (lookahead == 'x') ADVANCE(271);
      if (lookahead == '}') ADVANCE(165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(12);
      if (lookahead == 'n') ADVANCE(299);
      if (lookahead == 'v') ADVANCE(278);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(177);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == 'b') ADVANCE(283);
      if (lookahead == 'd') ADVANCE(277);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == 'v') ADVANCE(278);
      if (lookahead == 'x') ADVANCE(271);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(306);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '0') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\\') SKIP(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 29:
      if (lookahead == '<') ADVANCE(233);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(234);
      END_STATE();
    case 31:
      if (lookahead == ']') ADVANCE(212);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(120);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(183);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(158);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 143:
      if (lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 144:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 145:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 146:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 150:
      if (eof) ADVANCE(155);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 151:
      if (eof) ADVANCE(155);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(150);
      END_STATE();
    case 152:
      if (eof) ADVANCE(155);
      if (lookahead == '\n') SKIP(154);
      END_STATE();
    case 153:
      if (eof) ADVANCE(155);
      if (lookahead == '\n') SKIP(154);
      if (lookahead == '\r') SKIP(152);
      END_STATE();
    case 154:
      if (eof) ADVANCE(155);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(157);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '\\') SKIP(153);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(91);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '*' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ulong);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ubyte);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ubyte);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_short);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ushort);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_xml);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\r') ADVANCE(220);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '*') ADVANCE(218);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(219);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '.') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(231);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '0') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(306);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_tag_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(269);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(191);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(193);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(187);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(279);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(279);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead == 'y') ADVANCE(290);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(288);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(294);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(270);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(295);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_attribute_identifier);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(305);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 154},
  [2] = {.lex_state = 154},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 154},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 154},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 154},
  [34] = {.lex_state = 154},
  [35] = {.lex_state = 154},
  [36] = {.lex_state = 154},
  [37] = {.lex_state = 154},
  [38] = {.lex_state = 154},
  [39] = {.lex_state = 154},
  [40] = {.lex_state = 154},
  [41] = {.lex_state = 154},
  [42] = {.lex_state = 154},
  [43] = {.lex_state = 154},
  [44] = {.lex_state = 154},
  [45] = {.lex_state = 154},
  [46] = {.lex_state = 154},
  [47] = {.lex_state = 154},
  [48] = {.lex_state = 154},
  [49] = {.lex_state = 154},
  [50] = {.lex_state = 154},
  [51] = {.lex_state = 154},
  [52] = {.lex_state = 154},
  [53] = {.lex_state = 154},
  [54] = {.lex_state = 154},
  [55] = {.lex_state = 154},
  [56] = {.lex_state = 154},
  [57] = {.lex_state = 154},
  [58] = {.lex_state = 154},
  [59] = {.lex_state = 154},
  [60] = {.lex_state = 154},
  [61] = {.lex_state = 154},
  [62] = {.lex_state = 154},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 18},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 18},
  [79] = {.lex_state = 18},
  [80] = {.lex_state = 18},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 18},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 18},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 18},
  [126] = {.lex_state = 18},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 18},
  [130] = {.lex_state = 18},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 18},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 18},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 222},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 18},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 18},
  [158] = {.lex_state = 18},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 18},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 18},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 18},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 18},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 18},
  [190] = {.lex_state = 18},
  [191] = {.lex_state = 18},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 18},
  [195] = {.lex_state = 18},
  [196] = {.lex_state = 18},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 28},
  [199] = {.lex_state = 0},
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
    [sym_source_file] = STATE(184),
    [sym_package_definition] = STATE(2),
    [sym_typedef_definition] = STATE(2),
    [sym_import_definition] = STATE(2),
    [sym_module_definition] = STATE(2),
    [sym_enum_definition] = STATE(2),
    [sym_interface_definition] = STATE(2),
    [sym_class_definition] = STATE(2),
    [sym_class_modifier] = STATE(86),
    [sym_data_structure_definition] = STATE(2),
    [sym_data_structure_type] = STATE(183),
    [sym_attribute] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_class_definition_repeat1] = STATE(86),
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
    STATE(183), 1,
      sym_data_structure_type,
    ACTIONS(21), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(23), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(86), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
    STATE(6), 10,
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
  [58] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_static,
    ACTIONS(35), 1,
      sym_tag_number,
    ACTIONS(37), 1,
      anon_sym_AT,
    STATE(10), 1,
      sym_tag,
    STATE(25), 1,
      sym_field_qualifier,
    STATE(93), 1,
      sym_type,
    STATE(170), 1,
      sym_variable,
    STATE(4), 3,
      sym_field,
      sym_attribute,
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
  [108] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(44), 1,
      anon_sym_static,
    ACTIONS(47), 1,
      sym_tag_number,
    ACTIONS(50), 1,
      anon_sym_AT,
    STATE(10), 1,
      sym_tag,
    STATE(25), 1,
      sym_field_qualifier,
    STATE(93), 1,
      sym_type,
    STATE(170), 1,
      sym_variable,
    STATE(4), 3,
      sym_field,
      sym_attribute,
      aux_sym_data_structure_block_repeat1,
    ACTIONS(41), 15,
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
  [158] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_static,
    ACTIONS(35), 1,
      sym_tag_number,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_tag,
    STATE(25), 1,
      sym_field_qualifier,
    STATE(93), 1,
      sym_type,
    STATE(170), 1,
      sym_variable,
    STATE(3), 3,
      sym_field,
      sym_attribute,
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
  [208] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_package,
    ACTIONS(60), 1,
      anon_sym_typedef,
    ACTIONS(63), 1,
      anon_sym_import,
    ACTIONS(66), 1,
      anon_sym_module,
    ACTIONS(69), 1,
      anon_sym_enum,
    ACTIONS(72), 1,
      anon_sym_interface,
    ACTIONS(75), 1,
      anon_sym_class,
    ACTIONS(84), 1,
      anon_sym_AT,
    STATE(183), 1,
      sym_data_structure_type,
    ACTIONS(78), 2,
      anon_sym_abstract,
      anon_sym_local,
    ACTIONS(81), 2,
      anon_sym_union,
      anon_sym_struct,
    STATE(86), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
    STATE(6), 10,
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
  [266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_attribute_argument_list,
    ACTIONS(87), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(89), 16,
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
  [299] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(110), 1,
      sym_value,
    STATE(111), 1,
      sym_string,
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
    STATE(19), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_argument_list_repeat1,
    STATE(93), 1,
      sym_type,
    STATE(179), 1,
      sym_variable,
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
  [376] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_static,
    STATE(23), 1,
      sym_field_qualifier,
    STATE(93), 1,
      sym_type,
    STATE(199), 1,
      sym_variable,
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
  [409] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(114), 16,
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
  [436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(118), 16,
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
  [463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(89), 16,
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
  [490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(122), 16,
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
  [517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(126), 16,
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
  [544] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_argument_list_repeat1,
    STATE(93), 1,
      sym_type,
    STATE(147), 1,
      sym_variable,
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
  [577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
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
  [604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(136), 16,
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
  [631] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    ACTIONS(97), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(101), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(138), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(99), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(21), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [668] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_argument_list_repeat1,
    STATE(93), 1,
      sym_type,
    STATE(152), 1,
      sym_variable,
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
  [701] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      aux_sym_number_token1,
    ACTIONS(149), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(158), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(144), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(155), 3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(152), 4,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
    STATE(21), 4,
      sym_number,
      sym_operator,
      sym_constant,
      aux_sym_value_repeat1,
  [738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      anon_sym_AT,
    ACTIONS(163), 16,
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
  [765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(93), 1,
      sym_type,
    STATE(178), 1,
      sym_variable,
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
  [792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(93), 1,
      sym_type,
    STATE(167), 1,
      sym_variable,
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
  [819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(93), 1,
      sym_type,
    STATE(199), 1,
      sym_variable,
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
  [846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 16,
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
  [868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 15,
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
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(169), 10,
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
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 15,
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
  [936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(175), 10,
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
  [959] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_attribute_argument_list,
    ACTIONS(87), 13,
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
  [984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 5,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(181), 10,
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
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 14,
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
  [1027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SEMI,
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
  [1049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 14,
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
  [1069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
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
  [1091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SEMI,
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
  [1113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_SEMI,
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
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 14,
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
  [1155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 14,
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
  [1175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_SEMI,
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
  [1197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 14,
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
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    ACTIONS(215), 13,
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
  [1239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 14,
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
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 13,
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
  [1278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 13,
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
  [1297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 13,
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
  [1316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 13,
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
  [1335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 13,
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
  [1354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 13,
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
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 13,
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
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 13,
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
  [1411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 13,
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
  [1430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 13,
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
  [1449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 13,
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
  [1468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 13,
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
  [1487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 13,
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
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 13,
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
  [1525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 13,
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
  [1544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 13,
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
  [1563] = 2,
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
  [1582] = 2,
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
  [1601] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(245), 1,
      sym_attribute_identifier,
    STATE(66), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(142), 1,
      sym_attribute_argument,
    ACTIONS(97), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(149), 2,
      sym_string,
      sym_number,
  [1631] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      sym_attribute_identifier,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(135), 1,
      sym_attribute_argument,
    ACTIONS(97), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(149), 2,
      sym_string,
      sym_number,
  [1661] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      sym_attribute_identifier,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(150), 1,
      sym_attribute_argument,
    ACTIONS(97), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(149), 2,
      sym_string,
      sym_number,
  [1691] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      sym_attribute_identifier,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(141), 1,
      sym_attribute_argument,
    ACTIONS(97), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(149), 2,
      sym_string,
      sym_number,
  [1721] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      sym_attribute_identifier,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(140), 1,
      sym_attribute_argument,
    ACTIONS(97), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(149), 2,
      sym_string,
      sym_number,
  [1751] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      aux_sym_number_token1,
    ACTIONS(245), 1,
      sym_attribute_identifier,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(138), 1,
      sym_attribute_argument,
    ACTIONS(97), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(149), 2,
      sym_string,
      sym_number,
  [1781] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      aux_sym_number_token1,
    ACTIONS(268), 1,
      sym_attribute_identifier,
    STATE(69), 1,
      aux_sym_attribute_argument_list_repeat1,
    STATE(187), 1,
      sym_attribute_argument,
    ACTIONS(265), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(149), 2,
      sym_string,
      sym_number,
  [1811] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      sym_tag_number,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_AT,
    STATE(158), 1,
      sym_tag,
    STATE(180), 1,
      sym_enum_field,
    STATE(71), 2,
      sym_attribute,
      aux_sym_enum_block_repeat1,
  [1837] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_tag_number,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym_tag,
    STATE(180), 1,
      sym_enum_field,
    STATE(72), 2,
      sym_attribute,
      aux_sym_enum_block_repeat1,
  [1863] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_tag_number,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(289), 1,
      anon_sym_AT,
    STATE(158), 1,
      sym_tag,
    STATE(180), 1,
      sym_enum_field,
    STATE(72), 2,
      sym_attribute,
      aux_sym_enum_block_repeat1,
  [1889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    ACTIONS(294), 1,
      sym_identifier,
    STATE(76), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
    STATE(99), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1910] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    ACTIONS(298), 1,
      anon_sym_in,
    ACTIONS(300), 1,
      anon_sym_out,
    ACTIONS(302), 1,
      anon_sym_throw,
    STATE(95), 1,
      sym_rpc_in,
    STATE(131), 1,
      sym_rpc_out,
    STATE(159), 1,
      sym_rpc_throw,
  [1935] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_in,
    ACTIONS(300), 1,
      anon_sym_out,
    ACTIONS(302), 1,
      anon_sym_throw,
    ACTIONS(304), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      sym_rpc_in,
    STATE(127), 1,
      sym_rpc_out,
    STATE(163), 1,
      sym_rpc_throw,
  [1960] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    STATE(77), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
    STATE(99), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [1981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_AT,
    STATE(77), 2,
      sym_rpc,
      aux_sym_rpcs_repeat1,
    STATE(99), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [2002] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_tag_number,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 1,
      sym_identifier,
    STATE(182), 1,
      sym_tag,
    STATE(80), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [2022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_attribute_argument_list,
    ACTIONS(87), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [2038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_tag_number,
    ACTIONS(318), 1,
      sym_identifier,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_tag,
    STATE(82), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [2058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      aux_sym_number_token2,
      aux_sym_number_token3,
    ACTIONS(257), 4,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      aux_sym_number_token1,
      sym_attribute_identifier,
  [2072] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      sym_tag_number,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(182), 1,
      sym_tag,
    STATE(82), 2,
      sym_module_field,
      aux_sym_module_block_repeat1,
  [2092] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_data_structure_block,
    STATE(97), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [2109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_argument_list,
    ACTIONS(338), 3,
      anon_sym_null,
      anon_sym_void,
      sym_identifier,
  [2124] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    ACTIONS(300), 1,
      anon_sym_out,
    ACTIONS(302), 1,
      anon_sym_throw,
    STATE(131), 1,
      sym_rpc_out,
    STATE(159), 1,
      sym_rpc_throw,
  [2143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_class,
    ACTIONS(21), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(92), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [2158] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_data_structure_block,
    STATE(91), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [2175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_default_value,
    ACTIONS(344), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_argument_list,
    ACTIONS(348), 3,
      anon_sym_null,
      anon_sym_void,
      sym_identifier,
  [2205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(120), 1,
      sym_default_value,
    ACTIONS(350), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_data_structure_block,
    STATE(97), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [2237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_class,
    ACTIONS(354), 2,
      anon_sym_abstract,
      anon_sym_local,
    STATE(92), 2,
      sym_class_modifier,
      aux_sym_class_definition_repeat1,
  [2252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(197), 1,
      sym_type_specifier,
    ACTIONS(357), 3,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
  [2267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_data_structure_block,
    STATE(83), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [2284] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_out,
    ACTIONS(302), 1,
      anon_sym_throw,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    STATE(124), 1,
      sym_rpc_out,
    STATE(164), 1,
      sym_rpc_throw,
  [2303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_COLON,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_module_block,
    STATE(137), 1,
      sym_module_inheritance,
  [2319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(370), 1,
      anon_sym_LBRACE,
    STATE(97), 2,
      sym_class_inheritance,
      aux_sym_class_definition_repeat2,
  [2333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 4,
      anon_sym_QMARK,
      anon_sym_AMP,
      anon_sym_LBRACK_RBRACK,
      sym_identifier,
  [2343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_AT,
    ACTIONS(374), 1,
      sym_identifier,
    STATE(103), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [2357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [2367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [2377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [2387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_identifier,
    ACTIONS(378), 1,
      anon_sym_AT,
    STATE(103), 2,
      sym_attribute,
      aux_sym_rpc_repeat1,
  [2401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [2411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(155), 1,
      sym_default_value,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [2435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 4,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
      anon_sym_AT,
  [2445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_identifier,
    STATE(13), 1,
      sym_attribute_argument_list,
  [2494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(100), 1,
      sym_attribute_argument_list,
  [2516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 3,
      anon_sym_class,
      anon_sym_abstract,
      anon_sym_local,
  [2525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      sym_identifier,
    STATE(60), 1,
      sym_attribute_argument_list,
  [2538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_default_value,
  [2551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_EQ,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      sym_default_value,
  [2600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_throw,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_rpc_throw,
  [2622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      anon_sym_throw,
    STATE(159), 1,
      sym_rpc_throw,
  [2653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_SEMI,
      anon_sym_out,
      anon_sym_throw,
  [2662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [2671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_RBRACE,
      sym_tag_number,
      sym_identifier,
  [2680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_throw,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    STATE(164), 1,
      sym_rpc_throw,
  [2693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [2702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_rpcs,
  [2721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      anon_sym_COMMA,
  [2731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      sym_tag_number,
      sym_identifier,
  [2739] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_module_block,
  [2749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
  [2759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(154), 1,
      aux_sym_module_inheritance_repeat1,
  [2769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      anon_sym_COMMA,
  [2779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
  [2789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      anon_sym_COMMA,
  [2799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
  [2809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_identifier,
    STATE(144), 1,
      aux_sym_module_inheritance_repeat1,
  [2819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [2827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_data_structure_block,
  [2837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
  [2847] = 3,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    ACTIONS(454), 1,
      sym_string_content,
    ACTIONS(456), 1,
      sym_comment,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
  [2875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_SEMI,
      anon_sym_throw,
  [2883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(448), 1,
      anon_sym_COMMA,
  [2893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [2903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_identifier,
    STATE(144), 1,
      aux_sym_module_inheritance_repeat1,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_enum_block,
  [2931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_identifier,
  [2938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [2945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_SEMI,
  [2952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_SEMI,
  [2959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_SEMI,
  [2966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SEMI,
  [2973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_SEMI,
  [2980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SEMI,
  [2987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_identifier,
  [2994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COMMA,
  [3001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SEMI,
  [3008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_SEMI,
  [3015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_COMMA,
  [3022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SEMI,
  [3029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_COLON,
  [3036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_SEMI,
  [3043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COMMA,
  [3050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_SEMI,
  [3057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      sym_identifier,
  [3064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_SEMI,
  [3071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
  [3078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_SEMI,
  [3085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_COMMA,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_COMMA,
  [3099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_SEMI,
  [3106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_identifier,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
  [3120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      ts_builtin_sym_end,
  [3127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym_identifier,
  [3134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_identifier,
  [3141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
  [3148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_identifier,
  [3155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_identifier,
  [3162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_identifier,
  [3169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_identifier,
  [3176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_identifier,
  [3183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_COLON,
  [3190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
  [3197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_identifier,
  [3204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_identifier,
  [3211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      sym_identifier,
  [3218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_path,
  [3225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 158,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 299,
  [SMALL_STATE(9)] = 343,
  [SMALL_STATE(10)] = 376,
  [SMALL_STATE(11)] = 409,
  [SMALL_STATE(12)] = 436,
  [SMALL_STATE(13)] = 463,
  [SMALL_STATE(14)] = 490,
  [SMALL_STATE(15)] = 517,
  [SMALL_STATE(16)] = 544,
  [SMALL_STATE(17)] = 577,
  [SMALL_STATE(18)] = 604,
  [SMALL_STATE(19)] = 631,
  [SMALL_STATE(20)] = 668,
  [SMALL_STATE(21)] = 701,
  [SMALL_STATE(22)] = 738,
  [SMALL_STATE(23)] = 765,
  [SMALL_STATE(24)] = 792,
  [SMALL_STATE(25)] = 819,
  [SMALL_STATE(26)] = 846,
  [SMALL_STATE(27)] = 868,
  [SMALL_STATE(28)] = 892,
  [SMALL_STATE(29)] = 915,
  [SMALL_STATE(30)] = 936,
  [SMALL_STATE(31)] = 959,
  [SMALL_STATE(32)] = 984,
  [SMALL_STATE(33)] = 1007,
  [SMALL_STATE(34)] = 1027,
  [SMALL_STATE(35)] = 1049,
  [SMALL_STATE(36)] = 1069,
  [SMALL_STATE(37)] = 1091,
  [SMALL_STATE(38)] = 1113,
  [SMALL_STATE(39)] = 1135,
  [SMALL_STATE(40)] = 1155,
  [SMALL_STATE(41)] = 1175,
  [SMALL_STATE(42)] = 1197,
  [SMALL_STATE(43)] = 1217,
  [SMALL_STATE(44)] = 1239,
  [SMALL_STATE(45)] = 1259,
  [SMALL_STATE(46)] = 1278,
  [SMALL_STATE(47)] = 1297,
  [SMALL_STATE(48)] = 1316,
  [SMALL_STATE(49)] = 1335,
  [SMALL_STATE(50)] = 1354,
  [SMALL_STATE(51)] = 1373,
  [SMALL_STATE(52)] = 1392,
  [SMALL_STATE(53)] = 1411,
  [SMALL_STATE(54)] = 1430,
  [SMALL_STATE(55)] = 1449,
  [SMALL_STATE(56)] = 1468,
  [SMALL_STATE(57)] = 1487,
  [SMALL_STATE(58)] = 1506,
  [SMALL_STATE(59)] = 1525,
  [SMALL_STATE(60)] = 1544,
  [SMALL_STATE(61)] = 1563,
  [SMALL_STATE(62)] = 1582,
  [SMALL_STATE(63)] = 1601,
  [SMALL_STATE(64)] = 1631,
  [SMALL_STATE(65)] = 1661,
  [SMALL_STATE(66)] = 1691,
  [SMALL_STATE(67)] = 1721,
  [SMALL_STATE(68)] = 1751,
  [SMALL_STATE(69)] = 1781,
  [SMALL_STATE(70)] = 1811,
  [SMALL_STATE(71)] = 1837,
  [SMALL_STATE(72)] = 1863,
  [SMALL_STATE(73)] = 1889,
  [SMALL_STATE(74)] = 1910,
  [SMALL_STATE(75)] = 1935,
  [SMALL_STATE(76)] = 1960,
  [SMALL_STATE(77)] = 1981,
  [SMALL_STATE(78)] = 2002,
  [SMALL_STATE(79)] = 2022,
  [SMALL_STATE(80)] = 2038,
  [SMALL_STATE(81)] = 2058,
  [SMALL_STATE(82)] = 2072,
  [SMALL_STATE(83)] = 2092,
  [SMALL_STATE(84)] = 2109,
  [SMALL_STATE(85)] = 2124,
  [SMALL_STATE(86)] = 2143,
  [SMALL_STATE(87)] = 2158,
  [SMALL_STATE(88)] = 2175,
  [SMALL_STATE(89)] = 2190,
  [SMALL_STATE(90)] = 2205,
  [SMALL_STATE(91)] = 2220,
  [SMALL_STATE(92)] = 2237,
  [SMALL_STATE(93)] = 2252,
  [SMALL_STATE(94)] = 2267,
  [SMALL_STATE(95)] = 2284,
  [SMALL_STATE(96)] = 2303,
  [SMALL_STATE(97)] = 2319,
  [SMALL_STATE(98)] = 2333,
  [SMALL_STATE(99)] = 2343,
  [SMALL_STATE(100)] = 2357,
  [SMALL_STATE(101)] = 2367,
  [SMALL_STATE(102)] = 2377,
  [SMALL_STATE(103)] = 2387,
  [SMALL_STATE(104)] = 2401,
  [SMALL_STATE(105)] = 2411,
  [SMALL_STATE(106)] = 2425,
  [SMALL_STATE(107)] = 2435,
  [SMALL_STATE(108)] = 2445,
  [SMALL_STATE(109)] = 2454,
  [SMALL_STATE(110)] = 2463,
  [SMALL_STATE(111)] = 2472,
  [SMALL_STATE(112)] = 2481,
  [SMALL_STATE(113)] = 2494,
  [SMALL_STATE(114)] = 2503,
  [SMALL_STATE(115)] = 2516,
  [SMALL_STATE(116)] = 2525,
  [SMALL_STATE(117)] = 2538,
  [SMALL_STATE(118)] = 2551,
  [SMALL_STATE(119)] = 2560,
  [SMALL_STATE(120)] = 2569,
  [SMALL_STATE(121)] = 2578,
  [SMALL_STATE(122)] = 2587,
  [SMALL_STATE(123)] = 2600,
  [SMALL_STATE(124)] = 2609,
  [SMALL_STATE(125)] = 2622,
  [SMALL_STATE(126)] = 2631,
  [SMALL_STATE(127)] = 2640,
  [SMALL_STATE(128)] = 2653,
  [SMALL_STATE(129)] = 2662,
  [SMALL_STATE(130)] = 2671,
  [SMALL_STATE(131)] = 2680,
  [SMALL_STATE(132)] = 2693,
  [SMALL_STATE(133)] = 2702,
  [SMALL_STATE(134)] = 2711,
  [SMALL_STATE(135)] = 2721,
  [SMALL_STATE(136)] = 2731,
  [SMALL_STATE(137)] = 2739,
  [SMALL_STATE(138)] = 2749,
  [SMALL_STATE(139)] = 2759,
  [SMALL_STATE(140)] = 2769,
  [SMALL_STATE(141)] = 2779,
  [SMALL_STATE(142)] = 2789,
  [SMALL_STATE(143)] = 2799,
  [SMALL_STATE(144)] = 2809,
  [SMALL_STATE(145)] = 2819,
  [SMALL_STATE(146)] = 2827,
  [SMALL_STATE(147)] = 2837,
  [SMALL_STATE(148)] = 2847,
  [SMALL_STATE(149)] = 2857,
  [SMALL_STATE(150)] = 2865,
  [SMALL_STATE(151)] = 2875,
  [SMALL_STATE(152)] = 2883,
  [SMALL_STATE(153)] = 2893,
  [SMALL_STATE(154)] = 2903,
  [SMALL_STATE(155)] = 2913,
  [SMALL_STATE(156)] = 2921,
  [SMALL_STATE(157)] = 2931,
  [SMALL_STATE(158)] = 2938,
  [SMALL_STATE(159)] = 2945,
  [SMALL_STATE(160)] = 2952,
  [SMALL_STATE(161)] = 2959,
  [SMALL_STATE(162)] = 2966,
  [SMALL_STATE(163)] = 2973,
  [SMALL_STATE(164)] = 2980,
  [SMALL_STATE(165)] = 2987,
  [SMALL_STATE(166)] = 2994,
  [SMALL_STATE(167)] = 3001,
  [SMALL_STATE(168)] = 3008,
  [SMALL_STATE(169)] = 3015,
  [SMALL_STATE(170)] = 3022,
  [SMALL_STATE(171)] = 3029,
  [SMALL_STATE(172)] = 3036,
  [SMALL_STATE(173)] = 3043,
  [SMALL_STATE(174)] = 3050,
  [SMALL_STATE(175)] = 3057,
  [SMALL_STATE(176)] = 3064,
  [SMALL_STATE(177)] = 3071,
  [SMALL_STATE(178)] = 3078,
  [SMALL_STATE(179)] = 3085,
  [SMALL_STATE(180)] = 3092,
  [SMALL_STATE(181)] = 3099,
  [SMALL_STATE(182)] = 3106,
  [SMALL_STATE(183)] = 3113,
  [SMALL_STATE(184)] = 3120,
  [SMALL_STATE(185)] = 3127,
  [SMALL_STATE(186)] = 3134,
  [SMALL_STATE(187)] = 3141,
  [SMALL_STATE(188)] = 3148,
  [SMALL_STATE(189)] = 3155,
  [SMALL_STATE(190)] = 3162,
  [SMALL_STATE(191)] = 3169,
  [SMALL_STATE(192)] = 3176,
  [SMALL_STATE(193)] = 3183,
  [SMALL_STATE(194)] = 3190,
  [SMALL_STATE(195)] = 3197,
  [SMALL_STATE(196)] = 3204,
  [SMALL_STATE(197)] = 3211,
  [SMALL_STATE(198)] = 3218,
  [SMALL_STATE(199)] = 3225,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_structure_block_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_argument_list, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_argument_list, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument_list, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_argument_list, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_qualifier, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_block, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_block, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpcs, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_definition, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_block, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface_definition, 4, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 4, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 5, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typedef_definition, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_definition, 3, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_block_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpcs_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_argument_list_repeat1, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_block_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(136),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_definition_repeat2, 2, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 5, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_in, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_modifier, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 6, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 4, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 4, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_field, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 3, 0, 0),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_inheritance, 2, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_out, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_inheritance, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_argument, 2, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_throw, 2, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [512] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_structure_type, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_inheritance_repeat1, 2, 0, 0),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
