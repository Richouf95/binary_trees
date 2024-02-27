#include "binary_trees.h"

/**
 * get_max - get max between two size_t value
 * @a: first value
 * @b: second value
 * Return: the max
*/
size_t get_max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - calculate tree heigh
 * @tree: the tree
 * Return: Tree height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (l > r)
			return (l);
		else
			return (r);
	}
	return (get_max(l, r) + 1);
}
