#include "binary_trees.h"

size_t height(const binary_tree_t *tree);
int helper(const binary_tree_t *tree, size_t depth, size_t level);

/**
 * height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree or 0 if tree is NULL
 */
size_t height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * helper - helps binary_tree_is_perfect function
 * @tree: a pointer to the root node of the tree
 * @depth: maximum depth of tree
 * @level: level of current node
 *
 * Return: 1 if true, otherwise 0
 */
int helper(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (depth == level + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (helper(tree->left, depth, level + 1) &&
			helper(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a bt is perfect
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 if true, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0;

	depth = height(tree);
	return (helper(tree, depth, 0));
}
