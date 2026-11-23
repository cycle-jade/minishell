#include "t_dll.h"

t_dll	*t_dll_get_node_index(t_dll *node, size_t index)
{
	t_dll	*to_return_node;
	int		update_index_result;

	if (!node)
		return (NULL);
	if (index >= t_dll_size(node))
		return (NULL);
	to_return_node = t_dll_get_head(node);
	update_index_result = t_dll_update_index(node);
	if (update_index_result == -1)
		return (NULL);
	while (to_return_node && to_return_node->index != (int)index)
		to_return_node = to_return_node->next;
	if (to_return_node)
		return (to_return_node);
	return (NULL);
}
