#include <unistd.h>
#include <stdio.h>
#define lenght_int 11

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	//char	mass[lenght_int];
	int		cnt;
	int copy;
	char sign;

	cnt = 1;
	sign = 1;
	copy = nb;
	if (nb < 0)
	{
		sign = 0;
	}
		while (copy > 9)
	{
		copy/=10;
		cnt++;
	}
	printf("cnt = %i" , cnt);
	
}

