#define MAX_SQRT 46341

int	ft_sqrt(int nb)
{
	int mid_nb;
	int count;

	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	mid_nb = nb / 2;
	count = 0;
	while (count <= mid_nb && count < MAX_SQRT)
	{
		if ((count * count) == nb)
			return (count);
		count++;
	}
	return (0);
}
