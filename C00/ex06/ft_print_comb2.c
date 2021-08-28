#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = -1;
	while (first++ < 99)
	{
		second = first + 1;
		while (second < 100)
		{
			ft_putchar((first / 10) + '0');
			ft_putchar((first % 10) + '0');
			ft_putchar(' ');
			ft_putchar((second / 10) + '0');
			ft_putchar((second % 10) + '0');
			if (first != 98)
				write(1, ", ", 2);
			second++;
		}
	}
}
