(data_structure_type) @keyword.type
[
 "interface"
 "typedef"
 "package"
 "in"
 "enum"
 "out"
 "throw"
 "module"
 "null"
 "void"
 "abstract"
 "local"
] @keyword.type

[
 "true"
 "false"
] @boolean

"import" @keyword.import

(path) @module

(number) @number

(attribute "@" @attribute (identifier)? @attribute)

(attribute_argument_list
  (attribute_argument) @variable)

(tag_number) @number

(type_specifier) @punctuation.special

(comment) @comment

(value) @value

(enum_definition
  (identifier) @type
(_))

(enum_block
  (enum_field
    (identifier) @constant))

(data_structure_definition
  (identifier) @type
(_))

(interface_definition
  (identifier) @type
(_))

(enum_block
  (enum_field
    (identifier) @constant))

(argument_list (variable
  (_)
  (identifier) @variable.parameter))

(rpc_throw
  (identifier) @variable.parameter)

(rpc
  (identifier) @type
  (_))

[
 "="
] @operator
(operator) @operator

[
  "{"
  "}"
] @punctuation.bracket

[
  ";"
  ":"
  ","
] @punctuation.delimiter

(module_block
  (module_field
    (identifier) @type
    (identifier) @variable.parameter))

(module_definition
  (identifier) @type
  (_
    (identifier) @type))

(primitive_type) @type

(string) @string
