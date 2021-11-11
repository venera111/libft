#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!c)
		return ((char *)(s + ft_strlen(s)));
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		++i;
	}
	return ((void *)0);
}
