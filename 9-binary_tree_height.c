#include "binary_trees.h"

int max(int n1, int n2);

/**
 * max - returns the maximum of two numbers
 * @n1: the first number
 * @n2: the second number
 *
 * Return: the maximum number
 */
int max(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (1 +
			max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)));
}
