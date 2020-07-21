int ft_iterative_factorial(int nb)
{
	int cnt;

	cnt = nb - 1;
	if (nb == 0 || nb == 1)
		nb = 1;
	else if (nb < 0)
		nb = 0;
	else
	{
		while (cnt >= 1)
		{
			nb *= cnt;
			cnt--;
		}
	}
	return (nb);
}
