#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: A pointer to the node to uncle.
 *
 * Return: A pointer to the uncle node.
 *         If node is NULL, return NULL.
 *         If node has no uncle, return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *parent;
	binary_tree_t *grandparent;
	binary_tree_t *uncle;

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
	{
		uncle = grandparent->right;
	}
	else
	{
		uncle = grandparent->left;
	}

	return (uncle);
}
