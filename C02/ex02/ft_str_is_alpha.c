int		ft_str_is_alpha(char *str)
{
	int result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
			if (*str < 97 || *str > 122)
				result = 0;
		str++;
	}
	return (result);
}
