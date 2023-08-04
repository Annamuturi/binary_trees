#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree.
 *
 * This function calculates the height of a binary tree starting from the given root node.
 * The height of a binary tree is the length of the longest path from the root to a leaf node.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If 'tree' is NULL, the function returns 0.
 *         Otherwise, it returns the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    return (left_height > right_height ? left_height : right_height);
}

