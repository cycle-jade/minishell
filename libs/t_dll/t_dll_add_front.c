#include "t_dll.h"

void	t_dll_add_front(t_dll **list, t_dll *new_node)
{
	if (!list || !new_node)
		return ;
	new_node->prev = NULL;
	new_node->next = *list;
	if (*list)
		(*list)->prev = new_node;
	*list = new_node;
	t_dll_update_index(new_node);
}
