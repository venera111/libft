#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return ((void *)0);
	ft_bzero(result, (count * size));
	return ((unsigned char *)result);
}
