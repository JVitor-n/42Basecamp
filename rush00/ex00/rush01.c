void	ft_putchar(char c);

void	rush(int x, int y)
{
	int l;
	int c;

	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == y && c == x && y > 2 && x > 2))
				ft_putchar('/');
			else if (((l == y) && (c == 1)) || ((l == 1) && ((c == x))))
				ft_putchar(92);
			else if ((l != 1) && (l != y) && (c != 1) && (c != x))
				ft_putchar(' ');
			else
				ft_putchar('*');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}