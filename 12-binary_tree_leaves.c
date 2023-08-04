#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree.
 *
 * This function counts the number of leaves (nodes with no children) in a binary tree,
 * starting from the given root node.
 *
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves = 0;

    if (tree)
    {
        leaves += (!tree->left && !tree->right) ? 1 : 0;
        leaves += binary_tree_leaves(tree->left);
        leaves += binary_tree_leaves(tree->right);
    }

    return (leaves);
}

