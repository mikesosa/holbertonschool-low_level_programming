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
/**
 *binary_tree_balance - Functi. measures the balance factor of a binary tree
 *@tree: Is a pointer to the root node of the tree to sure the balance factor.
 *
 *Return: If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;
	return (left - right);
}
