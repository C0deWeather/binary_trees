#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling, otherwise NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
	{
		return (NULL);
	}
	parent = node->parent;

	if (!parent || !parent->left || !parent->right)
		return (NULL);

	return (node == parent->left ? parent->right : parent->left);
}
