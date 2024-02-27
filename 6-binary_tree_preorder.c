#include "binary_trees.h"

/**
 * binary_tree_preorder - print in preorder
 * @tree: the tree
 * @func: print function
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	func(tree->n);
	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);

}
