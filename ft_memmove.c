#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0 || src == dst)
		return (dst);
	if (dst > src && dst < src + len)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		return (dst);
	}
	else
	{
		while (i++ < len)
		{
			*((unsigned char *)dst) = *((unsigned char *)src);
			++dst;
			++src;
		}
	}
	return (dst - len);
}
