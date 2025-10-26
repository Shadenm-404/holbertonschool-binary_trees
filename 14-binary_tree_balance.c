#include "binary_trees.h"

/**
 * bt_height - Helper function to measure height of a binary tree
 * @tree: Pointer to the node to measure height
 *
 * Return: Height or 0 if tree is NULL
 */
static size_t bt_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_h = 1 + bt_height(tree->left);
	if (tree->right)
		right_h = 1 + bt_height(tree->right);

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)bt_height(tree->left) - (int)bt_height(tree->right));
}
