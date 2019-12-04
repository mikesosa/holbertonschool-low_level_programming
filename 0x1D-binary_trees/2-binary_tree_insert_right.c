#include "binary_trees.h"
/**
 *binary_tree_insert_right - Insert a node the right-child of another node.
 *@parent: Is a pointer to the node to insert the right-child.
 *@value: Is the value to store in the new node.
 *
 *Return: Pointer to the creaqted node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent) /* If not parent */
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new) /* if malloc fails */
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = parent->right;
	if (new->right)
		new->right->parent = new;
	parent->right = new;

	return (new);
}
