#include "ft_parser.h"

t_cmdt	*ft_get_cmdt(t_dll *token_list)
{
	t_cmdt	*cmdt;

	cmdt = (t_cmdt *)malloc(sizeof(t_cmdt));
	if (!cmdt)
		return (NULL);
	ft_set_cmdt_type(cmdt, token_list);
	if (!cmdt->content && t_dll_size(token_list) == 0)
		return (NULL);
	return (cmdt);
}
