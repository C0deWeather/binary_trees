#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @tree: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling, otherwise NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *parent;
	binary_tree_t *grandparent;

    if (!node || !node->parent)
	{
        return (NULL);
	}
	parent = node->parent;
	grandparent = parent->parent;
	
    if (!grandparent || !grandparent->left ||
		!grandparent->right)
        return (NULL);

    return (parent == grandparent->left ? grandparent->right : grandparent->left);
}
