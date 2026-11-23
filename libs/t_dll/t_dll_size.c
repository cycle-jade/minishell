#include "t_dll.h"

size_t	t_dll_size(t_dll *list)
{
	size_t	i;
	t_dll	*head;

	head = t_dll_get_head(list);
	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
