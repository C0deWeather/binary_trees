#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: returns 1 if true, 0 therwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_child = 0, r_child = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	l_child = binary_tree_is_full(tree->left);
	r_child = binary_tree_is_full(tree->right);
	return (l_child && r_child ? 1 : 0);
}
