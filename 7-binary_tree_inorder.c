#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree
 * using pre-order traversal.
 * @tree: the tree.
 * @func: the function to call for each node.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
