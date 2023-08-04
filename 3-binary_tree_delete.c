#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 *
 * This func recursively deletes an entire binary tree starting from the given root node.
 * The func traverses the tree in post-order (left, right, root) and frees each node.
 *
 * @tree: A pointer to the root node of the tree to delete.
 */

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree != NULL)
    {
	binary_tree_delete(tree->right);    
        binary_tree_delete(tree->left);
        free(tree);
    }
}

