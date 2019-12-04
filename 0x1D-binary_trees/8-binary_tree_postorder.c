#include "binary_trees.h"
/**
 *binary_tree_postorder -Binary tree using post-order traversal.
 *@tree: Is a pointer to the root node of the tree to traverse.
 *@func: Pointer to function.
 *Return: void
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
