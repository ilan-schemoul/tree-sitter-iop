module.exports = grammar({
  name: 'iop',

  rules: {
    source_file: $ => repeat($.data_structure_definition),

    data_structure_definition: $ => seq(
      $.data_structure_type,
      $.identifier,
      $.block,
      ";",
    ),

    data_structure_type: $ => choice(
      'union',
      'enum',
      'class',
      'struct',
    ),

    identifier: $ => /[A-Za-z][A-Za-z0-9]*/,

    block: $ => seq(
      '{',
      repeat($.field),
      '}',
      ";",
    ),

    field: $ => seq(
      $.field_type,
      $.identifier,
      ";",
    ),

    field_type: $ => choice(
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
  }
});
