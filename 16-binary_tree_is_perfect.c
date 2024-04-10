#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves in a binary tree.
* @tree: A pointer to the root node of the tree to count the leaves.
*
* Return: The number of leaves in the tree.
*         If tree is NULL, return 0.
*         A NULL pointer is not a leaf.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

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

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: A pointer to the root node of the tree to check.
*
* Return: If the tree is perfect, return 1.
*         If tree is NULL, return 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, leaves, isperfect;

	if (tree == NULL)
	{
		return (0);
	}

	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);
	isperfect = (1 << height);

	if (leaves == isperfect)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
