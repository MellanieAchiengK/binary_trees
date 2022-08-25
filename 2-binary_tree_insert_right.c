#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - function that inserts
 * a node as the right-child of parent
 * @parent: pointer to the parent
 * @value: value to save
 *
 * Return: binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	if (!parent || !value)
		return (NULL);
	temp_node = malloc(sizeof(binary_tree_t));
	if (temp_node == NULL)
		return (NULL);
	temp_node->n = value;
	temp_node->left = NULL;
	temp_node->right = NULL;
	if (parent->right)
	{
		temp_node->right = parent->right;
		parent->right->parent = temp_node;
	}
	parent->right = temp_node;
	temp_node->parent = parent;
	return (temp_node);
}
