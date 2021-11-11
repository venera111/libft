#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (!c)
		return ((char *)s + len);
	while (len--)
		if (s[len] == (unsigned char)c)
			return ((char *)s + len);
	return ((void *)0);
}
