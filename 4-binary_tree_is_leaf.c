#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 *
 * This function determines whether the given node is a leaf node (a node with no children) in a binary tree.
 * If the node is NULL or has either a left or right child, it is not a leaf, and the function returns 0.
 * Otherwise, if the node has no children (i.e., it is a leaf), the function returns 1.
 *
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL || node->left != NULL || node->right != NULL)
        return (0);

    return (1);
}

