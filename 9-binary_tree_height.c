#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: s a pointer to the root node of the tree to measure the height
 * Return: height of a binary tree or NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree && tree->left)
		l = binary_tree_height(tree->left) + 1;
	else
		l = 0;
	if (tree && tree->right)
		r = binary_tree_height(tree->right) + 1;
	else
		r = 0;
	if (r >= l)
		return (r);
	else
		return (l);
}
