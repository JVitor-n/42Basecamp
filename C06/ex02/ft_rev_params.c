#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*temp;
	int		len;

	len = argc - 1;
	i = 1;
	while (argv[i] != '\0' && len >= 1)
	{
		temp = argv[len];
		while (*temp != '\0')
		{
			write(1, temp, 1);
			temp++;
		}
		write(1, "\n", 1);
		len--;
	}
	return (0);
}
