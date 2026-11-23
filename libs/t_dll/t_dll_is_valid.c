#include "t_dll.h"

int	t_dll_is_valid(t_dll *node, int (*validator)(t_dll *node))
{
	node = t_dll_get_head(node);
	if (!node)
		return (0);
	while (node)
	{
		if (!validator(node))
			return (0);
		node = node->next;
	}
	return (1);
}
