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

((attribute_argument_list
  "," @_start
  .
  (_) @parameter.inner)
  (#make-range! "parameter.outer" @_start @parameter.inner))

((attribute_argument_list
  .
  (_) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

(module_definition) @block.outer
(data_structure_definition) @block.outer
(class_definition) @block.outer
(interface_definition) @block.outer
(enum_definition) @block.outer

(_
  .
  "{"
  .
  (_) @_start @_end
  (_)? @_end
  .
  "}"
  (#make-range! "block.inner" @_start @_end))

(value) @assignment.rhs

(((rpc
  (identifier) @_start
  .
  (_)
  (_)?
  ";"? @_end
  .
) (#make-range! "block.inner" @_start @_end)) @block.outer)
