int	ft_isalnum(int c)
{
	if (!((c >= '0' && c <= '9') || (c <= 'Z' && c >= 'A')
			|| (c <= 'z' && c >= 'a')))
		return (0);
	return (1);
}
