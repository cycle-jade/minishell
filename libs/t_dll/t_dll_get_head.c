#include "t_dll.h"

t_dll	*t_dll_get_head(t_dll *node)
{
	t_dll	*head;

	if (!node)
		return (NULL);
	head = node;
	while (head->prev)
		head = head->prev;
	return (head);
}
