#include "binary_trees.h"

/**
 * binary_tree_preorder - Perform a pre-order traversal of a binary tree.
 *
 * This function traverses a binary tree in pre-order fashion, starting from the given root node.
 * For each visited node, the specified function 'func' is called, passing the node's value.
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to the function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree && func)
    {
        func(tree->n);
        binary_tree_preorder(tree->left, func);
        binary_tree_preorder(tree->right, func);
    }
}

