#include "binary_trees.h"
/**
*binary_tree_height - measures height of binary tree.
*@tree: pointer to root node of the tree to measure the height.
*Return: 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 1, right = 1;

		if (tree->right)
			right +=  binary_tree_height(tree->right);
		if (tree->left)
			left +=  binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
/**
*binary_tree_balance - measures balance factor of binary tree.
*@tree: pointer to root node of tree to measure the balance factor.
*Return: 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
