/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 20:50:23 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/25 21:55:39 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_show_tab(struct s_stock_str *par)
{
	int cnt;

	cnt = 0;
	while (par[cnt].str != 0)
	{
		write(1, par[cnt].str, par[cnt].size);
		write(1, "\n", 1);
		ft_putnbr(par[cnt].size);
		write(1, "\n", 1);
		write(1, par[cnt].copy, par[cnt].size);
		write(1, "\n", 1);
		cnt++;
	}
	write(1, par[cnt].str, par[cnt].size);
	write(1, "\n", 1);
	ft_putnbr(par[cnt].size);
	write(1, "\n", 1);
	write(1, par[cnt].copy, par[cnt].size);
	write(1, "\n", 1);
}
