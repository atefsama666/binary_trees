#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_node - Entry point
* @parent : The parent.
* @value : The value of the node.
* Return: Always 0 (Success)
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);
new->n = value;
new->parent = parent;
new->right = NULL;
new->left = NULL;
return (new);
}
