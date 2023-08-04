#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_recursive - Checks if a binary tree is a valid binary search tree.
 * @node: A pointer to the current node in the binary tree to check.
 * @min_value: The minimum value allowed for nodes in the subtree.
 * @max_value: The maximum value allowed for nodes in the subtree.
 *
 * Return: If the subtree is a valid BST, 1, otherwise, 0.
 */
int is_bst_recursive(const binary_tree_t *node, int min_value, int max_value)
{
    if (node != NULL)
    {
        if (node->n < min_value || node->n > max_value)
            return (0);

        return (is_bst_recursive(node->left, min_value, node->n - 1) &&
                is_bst_recursive(node->right, node->n + 1, max_value));
    }

    return (1);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid binary search tree.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (is_bst_recursive(tree, INT_MIN, INT_MAX));
}

