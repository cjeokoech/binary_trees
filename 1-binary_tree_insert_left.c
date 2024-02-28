#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert mode as the left child of another node
 * @parent: pointer to the node to insert left child
 * @value: value to store in the new node
 * Return: pointer created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	newnode->left = parent->left;
	newnode->right = NULL;
	parent->left = newnode;

	if (newnode->left != NULL)
	{
		newnode->left->parent = newnode;
	}
	return newnode;
}
