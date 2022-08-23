#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates binary tree node
 * @parent: pointer to the parent
 * @value: value to save in the node
 *
 * Return: binary tree
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	temp_node = malloc(sizeof(binary_tree_t));
	if (!temp_node)
		return (NULL);
	temp_node->n = value;
	temp_node->left = NULL;
	temp_node->right = NULL;
	temp_node->parent = parent;
	if (!parent)
		parent = temp_node;
	return (temp_node);
}
