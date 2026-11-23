#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	space;
	void	*arr;

	space = count * size;
	if (size && (space / size) != count)
		return (NULL);
	arr = malloc(space);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, space);
	return (arr);
}
