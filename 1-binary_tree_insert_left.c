#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	temp_node = binary_tree_node(parent, value);
	if (temp_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		temp_node->left = parent->left;
		parent->left->parent = temp_node;
	}
	parent->left = temp_node;
	return (temp_node);
}
