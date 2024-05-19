module.exports = grammar({
  name: 'iop',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  rules: {

    source_file: $ => repeat(choice(
      $.package_definition,
      $.data_structure_definition,
      $.enum_definition,
      $.typedef_definition,
      $.interface_definition,
      $.module_definition,
      $.import_definition,
    )),

    import_definition: $ => seq(
      "import",
      $.path,
      ";"
    ),

    path: $ => /[a-zA-Z][a-zA-Z0-9_.*]*/,

    module_definition: $ => seq(
      "module",
      $.identifier,
      optional($.module_inheritance),
      $.module_block,
      optional(";"),
    ),

    module_inheritance: $ => seq(
      ":",
      repeat(seq($.identifier, ",")),
      $.identifier,
    ),

    module_block: $ => seq(
      "{",
      repeat($.module_field),
      "}",
    ),

    module_field: $ => seq(
      $.identifier,
      $.identifier,
      ";"
    ),

    comment: _ => token(choice(
      seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),

    enum_definition: $ => seq(
      "enum",
      $.identifier,
      $.enum_block,
      optional(";"),
    ),

    default_value: $ => seq(
      "=",
      $.value,
    ),

    value: $ => repeat1(choice($.number, $.operator)),

    number: $ => choice(
      /-?[0-9]*\.[0-9]+([eE][+-]?[0-9]+)?/,
      /-?(0x[0-9a-fA-F]+|[1-9][0-9]*)[a-zA-Z]*/,
      /0[0-7]*[a-zA-Z]*/,
    ),

    operator: $ => choice(
      "<<",
      ">>",
      "**",
      "*",
      "+",
      "-",
      "/",
      "true",
      "false",
    ),

    enum_block: $ => seq(
      "{",
      repeat(seq($.enum_field, ",")),
      "}",

    ),

    enum_field: $ => seq(
      $.identifier,
      optional($.default_value),
    ),

    typedef_definition: $ => seq(
      "typedef",
      $.variable,
      $.identifier,
      ";"
    ),

    interface_definition: $ => seq(
      "interface",
      $.identifier,
      $.rpcs,
      optional(";"),
    ),

    rpcs: $ => seq(
      "{",
      repeat($.rpc),
      "}",
      ";",
    ),

    rpc: $ => seq(
      $.identifier,
      $.rpc_in,
      optional($.rpc_out),
      optional($.rpc_throw),
      ";",
    ),

    rpc_in: $ => seq(
      "in",
      $.argument_list
    ),

    rpc_out: $ => seq(
      "out",
      choice($.argument_list, "null", "void"),
    ),

    argument_list: $ => seq(
      "(",
      repeat(seq($.argument, ",")),
      optional($.argument),
      ")"
    ),

    argument: $ => seq(
      $.variable,
      $.identifier,
    ),

    rpc_throw: $ => seq(
      "throw",
      $.identifier,
    ),

    data_structure_definition: $ => seq(
      $.data_structure_type,
      $.identifier,
      $.data_structure_block,
    ),

    package_definition: $ => seq(
      'package',
      $.identifier,
      ';',
    ),

    data_structure_type: $ => choice(
      'union',
      'class',
      'struct',
    ),

    identifier: $ => /[a-zA-Z][a-zA-Z0-9_]*/,

    data_structure_block: $ => seq(
      '{',
      repeat($.field),
      '}',
      optional(";"),
    ),

    field: $ => seq(
      $.variable,
      $.identifier,
      optional($.default_value),
      ";",
    ),

    variable: $ => seq(
      $.primitive_type,
      optional($.type_specifier),
    ),

    primitive_type: $ => choice(
      'int',
      'string',
      'uint',
      'long',
      'ulong',
      'byte',
      'ubyte',
      'short',
      'ushort',
      'bool',
      'double',
      'bytes',
      'xml',
      'void',
      $.identifier,
    ),

    type_specifier: $ => choice(
      "?",
      "&",
      "[]",
    ),
  }
});
