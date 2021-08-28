char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int f;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] == to_find[f])
		{
			if (to_find[f + 1] == '\0')
				return (str + i);
			f++;
		}
		i++;
	}
	return (0);
}
