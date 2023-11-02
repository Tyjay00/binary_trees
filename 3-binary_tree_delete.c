#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively deletes an entire binary tree and its nodes.
 * @tree: A pointer to the root node of the tree to be deleted.
 *
 * Description: This function performs a post-order traversal of the binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
