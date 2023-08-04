#include "binary_trees.h"


/**
 * is_full_recursive - Check if a binary tree is full recursively.
 *
 * This function checks if a binary tree is full recursively, which means that every node in the tree
 * has either zero or two children.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is not full, the function returns 0.
 *         Otherwise, it returns 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
    if (tree != NULL)
    {
        if ((tree->left != NULL && tree->right == NULL) ||
            (tree->left == NULL && tree->right != NULL) ||
            is_full_recursive(tree->left) == 0 ||
            is_full_recursive(tree->right) == 0)
        {
            return (0);
        }
    }
    return (1);
}

/**
 * binary_tree_is_full - Check if a binary tree is full.
 *
 * This function checks if a binary tree is full, which means that every node in the tree
 * has either zero or two children.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If 'tree' is NULL or is not full, the function returns 0.
 *         Otherwise, it returns 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (is_full_recursive(tree));
}

