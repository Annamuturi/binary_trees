#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node in a binary tree.
 *
 * This function finds the sibling of a given node in a binary tree.
 * The sibling of a node is another node in the tree with the same parent.
 *
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If 'node' is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL);

    if (node->parent->left == node)
        return (node->parent->right);
    else
        return (node->parent->left);
}

