#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 *
 * Description: This function calculates the balance factor of a binary tree,
 * which is the difference in height between the left and right subtrees.
 * A positive value indicates a tree that is taller on the left,
 * while a negative value indicates a tree that is taller on the right.
 * A balance factor of 0 means the tree is perfectly balanced.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 *
 * Description: This function calculates the height of a binary tree,
 * which is the maximum number of edges between the root node and a leaf node.
 * It traverses the left and right subtrees and returns the height of the
 * taller subtree.If the tree is empty (tree is NULL),
 * the height is considered 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
