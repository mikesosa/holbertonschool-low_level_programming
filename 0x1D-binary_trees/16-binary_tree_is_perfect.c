#include "binary_trees.h"
/**
* binary_tree_is_full - checks to see if this is a full tree
* @tree: a pointer to the tree
*
* Return: an int
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	return (0);
}

/**
 *binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *@tree: Is a pointer to the root node of the tree to count the number.
 *Return: Is tree is NULL, the function must return 0.
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}

/**
 *binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *@tree: Is a pointer to the root node of the tree to check.
 *
 *Return: If tree is NULL, your function must return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);
	
	if (!(binary_tree_is_full(tree)))
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	if (left == right)
		return (1);
	return (0);


}
