#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function that inserts a node at the right-child
 *                            of another node.
 * @parent:                   Pointer to the node to insert the right-child in.
 * @value:                    Value to store in the new node.
 *
 * Return:                    Pointer to he created node, or NULL on failure or
 *                            if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}
