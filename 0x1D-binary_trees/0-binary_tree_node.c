#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo = NULL;

	nodo = malloc(sizeof(binary_tree_t));
	nodo->n = value;

	if (parent == NULL)
	{
		return nodo;
	}
	else if (parent->n < value)
	{
		nodo->parent = parent;
		parent->right = nodo;
	}
	else if (parent->n > value)
	{
		nodo->parent = parent;
		parent->left = nodo;
	}
	else
	{
		return NULL;
	}
	return nodo;
}
