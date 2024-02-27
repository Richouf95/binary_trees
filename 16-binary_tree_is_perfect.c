#include "binary_trees.h"

/**
 * height - the tree height
 * @tree: the tree
 * Return: the height
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	return (
			(left_height > right_height) ?
			(left_height + 1) : (right_height + 1)
	       );
}


/**
 * is_perfect_util - utilitaire
 * @tree: the tree
 * @height: the tree height
 * @level: the level
 * Return: 1 or 0
 */
int is_perfect_util(const binary_tree_t *tree, int height, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (height == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (
			is_perfect_util(tree->left, height, level + 1) &&
			is_perfect_util(tree->right, height, level + 1));
}


/**
 * binary_tree_is_perfect - is or not perfect
 * @tree: the tree
 * Return: 1 if is perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = height(tree);

	return (is_perfect_util(tree, h, 0));
}
