int	ft_str_is_numeric(char *str)
{
	int result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			result = 0;
		str++;
	}
	return (result);
}
