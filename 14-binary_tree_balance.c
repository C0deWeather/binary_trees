#include "binary_trees.h"

size_t height(const binary_tree_t *tree);

/**
 * height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree or 0 if tree is NULL
 */
size_t height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = height(tree->left);
	size_t right_height = height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: and int that represents the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0;
	int r_height = 0;

	if (!tree)
		return (0);

	l_height = (int)height(tree->left);

	r_height = (int)height(tree->right);

	return (l_height - r_height);
}
