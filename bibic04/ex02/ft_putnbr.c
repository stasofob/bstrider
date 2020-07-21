/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 16:57:46 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/20 17:55:17 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		my_pow(int a, int b)
{
	int cnt;
	int result;

	cnt = 0;
	result = 1;
	if (b == 0)
		return (result);
	while (cnt++ < b)
		result *= a;
	return (result);
}

int		cnt_number(int nb)
{
	int result;

	result = 1;
	while (nb > 9 || nb < -9)
	{
		nb /= 10;
		result++;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	int cnt;
	int sign;
	int ch;

	ch = '-';
	cnt = cnt_number(nb) - 1;
	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		write(1, &ch, 1);
	}
	while (cnt >= 0)
	{
		ch = '0' + (nb / my_pow(10, cnt) % 10) * sign;
		write(1, &ch, 1);
		cnt--;
	}
}
