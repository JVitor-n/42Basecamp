int	ft_str_is_lowercase(char *str)
{
	int result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
			result = 0;
		str++;
	}
	return (result);
}
