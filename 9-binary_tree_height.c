#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of a binary tree.
 *         If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		height_left = 1 + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		height_right = 1 + binary_tree_height(tree->right);
	}

	return (height_left > height_right ? height_left : height_right);
}
