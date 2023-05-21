#include "binary_trees.h"
/**
 * binary_tree_is_full - Function that checks if a binary tree is full.
 * @tree:                Pointer to the root node of the tree to check.
 * Return:               0 if tree is NULL or 1 if tree is full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/* same like leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* a full tree has 2 sub-trees or non */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
