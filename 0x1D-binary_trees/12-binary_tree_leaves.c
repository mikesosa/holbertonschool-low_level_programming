#include "binary_trees.h"
/**
 *binary_tree_leaves - Function that counts the leaves in a binary tree.
 *@tree: Is a pointer to the root node of the tree to count the numbre.
 *
 *Return: If a tree is NULL, the funcion must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
