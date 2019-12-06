#include "binary_trees.h"

/**
 * binary_tree_delete - function delete tree
 * @tree: pointer to the parent node of the node to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == null)
		return;

	free(tree);
}
