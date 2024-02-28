#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that chekcks if a node is a leaf
 * @node: the node to check.
 * Return: 1 if its a leaf or 0 if its not.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right || node->left)
		return (0);

	return (1);
}
