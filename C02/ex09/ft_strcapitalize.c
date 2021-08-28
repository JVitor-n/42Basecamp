char	upper_case(char str)
{
	if (str >= 'a' && str <= 'z')
		return (str - 32);
	return (str);
}

char	lower_case(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (str + 32);
	return (str);
}

int		alpha(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		if (c < '0' || c > '9')
			return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = -1;
	if (str[++i] != '\0')
		str[i] = upper_case(str[i]);
	while (str[++i] != '\0')
	{
		if (alpha(str[i - 1]) != 1 && alpha(str[i]) != 0)
			str[i] = upper_case(str[i]);
		else
			str[i] = lower_case(str[i]);
	}
	return (str);
}
