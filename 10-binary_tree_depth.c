#include "binary_trees.h"

/**
 * binary_tree_depth - deep of a tree node
 * @tree: the tree
 * Return: the deep size
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
