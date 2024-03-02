#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if node is a root
 * @node: the node to check
 * Return: return 1 or 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
