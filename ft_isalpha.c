int	ft_isalpha(int c)
{
	if (!((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a')))
		return (0);
	return (1);
}
