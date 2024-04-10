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

	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (grandparent->left == parent)
	{
		if (grandparent->right)
		{
			return (grandparent->right);
		}
	}

	else
	{
		if (grandparent->left)
		{
			return (grandparent->left);
		}
	}

	return (NULL);
}
