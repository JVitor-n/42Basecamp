int	ft_str_is_printable(char *str)
{
	int result;

	result = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 127)
			result = 0;
		str++;
	}
	return (result);
}
