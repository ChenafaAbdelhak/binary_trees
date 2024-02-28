#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: tree.
 * Return: the height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	h = (size_t) height(tree);
	return (h - 1);
}

/**
 * height - function to calculate the height recursevly.
 * @tree: the tree.
 * Return: the height.
 */

int height(const binary_tree_t *tree)
{
	int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);
	else
	{
		leftHeight = height(tree->left);
		rightHeight = height(tree->right);

		return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
	}
}
