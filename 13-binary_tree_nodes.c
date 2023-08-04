include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least 1 child in a binary tree.
 *
 * This function counts the number of nodes in a binary tree that have at least one child,
 * starting from the given root node.
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If 'tree' is NULL, the function must return 0.
 *         Otherwise, it returns the count of nodes with at least one child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;

    if (tree)
    {
        nodes += (tree->left || tree->right) ? 1 : 0;
        nodes += binary_tree_nodes(tree->left);
        nodes += binary_tree_nodes(tree->right);
    }

    return (nodes);
}

