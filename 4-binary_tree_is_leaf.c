#include "binary_trees.h"
/**
 * binary_tree_is_leaf - chech for leaf node
 * @node: pointer to the node to be checked
 * Return: 1 if leaf node exist or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->left == NULL && node->right == NULL);
}
