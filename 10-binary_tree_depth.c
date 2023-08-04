#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate the depth of a node in a binary tree.
 *
 * This function calculates the depth of a given node in a binary tree.
 * The depth of a node is the number of edges between the node and the tree's root.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If 'tree' is NULL, the function returns 0.
 *         Otherwise, it returns the depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

