#include "binary_trees.h"

/**
 * bt_height - Helper function to measure height of a binary tree
 * @tree: Pointer to the node to measure height
 *
 * Return: Height, -1 if tree is NULL
 */
static int bt_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (-1);

	left_h = bt_height(tree->left);
	right_h = bt_height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bt_height(tree->left) - bt_height(tree->right));
}
