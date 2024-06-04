#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_right;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	old_right = parent->right;
	parent->right = new_node;

	if (old_right)
	{
		new_node->right = old_right;
		old_right->parent = new_node;
	}

	return (new_node);
}