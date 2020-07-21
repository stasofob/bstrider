int ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
		result = 0;
	else if (power == 0)
		result = 1;
	else 
	{
		while (power > 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
