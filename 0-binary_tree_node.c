#include "binary_trees.h"

/**
*binary_tree_node - function used to generate a new binary tree node.
*@parent: pointer that references the parent node of the node being generated
*@value: value to put in the new node.
*Return: a pointer to the new node or NULL if no.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
