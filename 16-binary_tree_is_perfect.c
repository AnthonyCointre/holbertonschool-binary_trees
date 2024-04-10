#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: A pointer to the root node of the tree.
*
* Return: The height of the tree.
*         If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
}

/**
* binary_tree_is_full - Checks if a binary tree is full.
* @tree: A pointer to the root node of the tree.
*
* Return: If the tree is full, return 1.
*         If tree is NULL, return 0.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	return (0);
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

	int l_left = 0, r_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		l_left += binary_tree_is_perfect(tree->left);
	}

	if (tree->right != NULL)
	{
		r_right += binary_tree_is_perfect(tree->right);
	}

	if (l_left == r_right)
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
