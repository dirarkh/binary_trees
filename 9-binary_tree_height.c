#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		r_height = 1 + binary_tree_height(tree->right);
	return ((l_height > r_height) ? l_height : r_height);
}
