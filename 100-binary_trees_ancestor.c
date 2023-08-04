#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes.
 *
 * This function finds the lowest common ancestor of two nodes in a binary tree.
 * The lowest common ancestor is the deepest node in the tree that is an ancestor
 * of both input nodes.
 *
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestor found, return NULL.
 *         Otherwise, return a pointer to the lowest common ancestor node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second)
{
    binary_tree_t *first_parent, *second_parent;

    if (!first || !second)
        return (NULL);
    if (first == second)
        return ((binary_tree_t *)first);

    first_parent = first->parent;
    second_parent = second->parent;
    if (first == second_parent || !first_parent || (!first_parent->parent && second_parent))
        return (binary_trees_ancestor(first, second_parent));
    else if (first_parent == second || !second_parent || (!second_parent->parent && first_parent))
        return (binary_trees_ancestor(first_parent, second));

    return (binary_trees_ancestor(first_parent, second_parent));
}

