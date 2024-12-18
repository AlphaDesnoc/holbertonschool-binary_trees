#include "binary_trees.h"


/**
 * binary_tree_height - func
 * @tree: args
 * Return: int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_le = 0, count_ri = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count_le = binary_tree_height(tree->left);
	count_ri = binary_tree_height(tree->right);

	if (count_le >= count_ri)
		return (count_le + 1);
	else
		return (count_ri + 1);
}

