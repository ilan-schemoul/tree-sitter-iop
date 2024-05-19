M = {}

M.setup = function(args)
  args = args or {}

  local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
  local url = args.local_directory or "https://github.com/ilan-schemoul/tree-sitter-iop"

  parser_config.iop = {
    filetype = "iop",
    install_info = {
      url = url,
      files = { "src/parser.c" },
    },
  }
end

return M
