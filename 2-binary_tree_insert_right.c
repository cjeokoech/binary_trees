#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert mode as the right child of another node
 * @parent: pointer to the node to insert right child
 * @value: value to store in the new node
 * Return: pointer created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return NULL;
	}
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return NULL;
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = parent->right;
	parent->right = newnode;

	if (newnode->right != NULL)
	{
		newnode->right->parent = newnode;
	}
	return newnode;
}
