package tree_sitter_iop_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-iop"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_iop.Language())
	if language == nil {
		t.Errorf("Error loading Iop grammar")
	}
}
