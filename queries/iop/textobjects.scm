((argument_list
  "," @_start
  .
  (_) @parameter.inner)
  (#make-range! "parameter.outer" @_start @parameter.inner))

((argument_list
  .
  (_) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

(module_declaration) @block.outer
(data_structure_definition) @block.outer
(interface_declaration) @block.outer
(enum_definition) @block.outer

(enum_block
  .
  "{"
  .
  (_) @_start @_end
  (_)? ","? @_end
  .
  "}"
  (#make-range! "block.inner" @_start @_end))

(data_structure_block
  .
  "{"
  .
  (_) @_start @_end
  (_)? @_end
  .
  "}"
  (#make-range! "block.inner" @_start @_end))

(rpcs
  .
  "{"
  .
  (_) @_start @_end
  (_)? @_end
  .
  "}"
  (#make-range! "block.inner" @_start @_end))

(module_block
  .
  "{"
  .
  (_) @_start @_end
  (_)? @_end
  .
  "}"
  (#make-range! "block.inner" @_start @_end))
