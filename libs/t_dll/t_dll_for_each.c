#include "t_dll.h"

void	t_dll_for_each(t_dll *node, void (*iterator)(t_dll *))
{
	node = t_dll_get_head(node);
	while (node)
	{
		iterator(node);
		node = node->next;
	}
}
