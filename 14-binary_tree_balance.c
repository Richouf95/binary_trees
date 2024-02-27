#include "binary_trees.h"

/**
 * binary_tree_balance - calculate the balance
 * @tree: the tree
 * Return: the balance
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
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

        if (tree->left != NULL)
		l = binary_tree_height(tree->left) + 1;
	else
		l = 1;
        
	if (tree->right != NULL)
		r = binary_tree_height(tree->right) + 1;
	else
		r = 1;

	if (l > r)
		return (l);

        return (r);
}
