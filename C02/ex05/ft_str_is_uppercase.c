int		ft_str_is_uppercase(char *str)
{
	int result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 90)
			result = 0;
		str++;
	}
	return (result);
}
