#include "binary_trees.h"
/**
 * binary_tree_preorde -  function that goes through a binary tree using pre-order traversal
 * @tree: pointer to the root to traverse
 * @func: pointer to the function to call each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
