#include "binary_trees.h"

/**
 * bt_depth_first_leaf - Gets depth of first leaf encountered
 * @tree: Pointer to the tree
 *
 * Return: Depth value
 */
static int bt_depth_first_leaf(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree && tree->left)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * bt_is_perfect_helper - Checks if binary tree is perfect
 * @tree: Pointer to the node
 * @depth: Expected leaf depth
 * @level: Current level
 *
 * Return: 1 if perfect, 0 otherwise
 */
static int bt_is_perfect_helper(const binary_tree_t *tree,
				int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (bt_is_perfect_helper(tree->left, depth, level + 1) &&
		bt_is_perfect_helper(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect tree, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	depth = bt_depth_first_leaf(tree);
	return (bt_is_perfect_helper(tree, depth, 0));
}
