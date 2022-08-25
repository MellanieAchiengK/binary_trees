#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, lft = 0, rit = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lft = binary_tree_leaves(tree->left);
		rit = binary_tree_leaves(tree->right);
		leaf = lft + rit;
		return ((!lft && !rit) ? leaf + 1 : leaf + 0);
	}
}
