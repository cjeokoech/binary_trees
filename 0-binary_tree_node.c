#include "binary_trees.h"
/**
 * binary_tree_node - craete a binary tree node
 * @parent: pointer to the parent node to create
 * @value: value to put the new node
 * Return: pointer to the new node or null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return NULL;
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return newnode;
}
