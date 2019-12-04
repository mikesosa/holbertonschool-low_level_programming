#include "binary_trees.h"
/**
 *binary_tree_insert_left - Function that insert a node as the left-child.
 *@parent: Is a pointer to the node to insert the left-child.
 *@value: Is the value to store in the new node.
 *Return: Pointer to the create node.
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent) /* If not parent */
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new) /* if malloc fails */
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = parent->left;
	if (new->left)
		new->left->parent = new;
	parent->left = new;

	return (new);
}
