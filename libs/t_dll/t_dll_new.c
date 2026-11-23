#include "t_dll.h"

t_dll	*t_dll_new(void *content)
{
	t_dll	*new_element;

	new_element = (t_dll *)malloc(sizeof(t_dll));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->index = 0;
	new_element->prev = NULL;
	new_element->next = NULL;
	return (new_element);
}
