#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst2;
	size_t	src2;
	size_t	i;

	dst2 = ft_strlen(dst);
	src2 = ft_strlen(src);
	i = 0;
	if (dstsize < dst2 + 1)
		return (dstsize + src2);
	if (dstsize > dst2 + 1)
	{
		while (src[i] && dst2 + i + 1 < dstsize)
		{
			dst[dst2 + i] = src[i];
			i++;
		}
	}
	dst[dst2 + i] = '\0';
	return (dst2 + src2);
}
