local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

parser_config.iop = {
  filetype = "iop",
  install_info = {
    url = "https://github.com/ilan-schemoul/tree-sitter-iop",
    -- url = "~/code/tree-sitter-iop",
    files = { "src/parser.c" },
  },
}
