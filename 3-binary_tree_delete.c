#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes entire binary tree
 * when tree is a pointer to the root node
 * @tree: tree to free
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
