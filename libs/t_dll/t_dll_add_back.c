#include "t_dll.h"

void	t_dll_add_back(t_dll **list, t_dll *new_node)
{
	t_dll	*tmp;

	if (!list || !new_node)
		return ;
	if (!*list)
	{
		*list = new_node;
		return ;
	}
	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	new_node->next = NULL;
	t_dll_update_index(new_node);
}
