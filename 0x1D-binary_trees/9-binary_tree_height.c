#include "binary_trees.h"
/**
 *binary_tree_height - function that measures the height of a binary tree.
 *@tree: Is a pointer to the root node of the tree to measure the height.
 *Return: The height of tree
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftD, rightD;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);

	leftD = binary_tree_height(tree->left);
	rightD = binary_tree_height(tree->right);

	if (leftD > rightD)
		return (leftD + 1);
	else
		return (rightD + 1);
}
