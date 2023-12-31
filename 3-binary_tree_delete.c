#include "binary_trees.h"

/**
 * binary_tree_delete - delete an entire binary tree
 *@tree: pointer of root node tree to be delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
