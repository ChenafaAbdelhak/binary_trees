#include "binary_trees.h"

/**
 * binary_tree_balance - function measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height2(tree->left) - binary_tree_height2(tree->right));
}

/**
 *binary_tree_height2 - Measures the height of a binary tree.
 *@tree: A pointer to the root node of the tree to measure the height.
 *
 *Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height2(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height2(tree->left);
	right_height = binary_tree_height2(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
