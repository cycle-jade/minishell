#include "t_dll.h"

int	t_dll_update_index(t_dll *node)
{
	long	i;

	i = 0;
	if (!node)
		return (-1);
	node = t_dll_get_head(node);
	if (!node)
		return (-1);
	while (node->next)
	{
		node->index = i;
		node = node->next;
		i++;
	}
	node->index = i;
	return (i);
}
