#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child
 * @tree: the tree
 * Return: number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_counter = 0;

	if (tree == NULL)
		return (node_counter);

	if (tree->left != NULL || tree->right != NULL)
		node_counter++;
	node_counter += binary_tree_nodes(tree->left);
	node_counter += binary_tree_nodes(tree->right);

	return (node_counter);
}
