/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 15:47:43 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/21 21:01:55 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_convertation(int nbr, int base)
{
	char	ch;
	int		mod;

	if (nbr >= base)
		print_convertation(nbr / base, base);
	mod = nbr % base;
	if (mod > 9)
		ch = '0' + mod + 7;
	else
		ch = '0' + mod;
	write(1, &ch, 1);
}

int		ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

int		is_good_base(char *str)
{
	int		status;
	int		cnt;
	int		check[256];

	status = 1;
	cnt = 0;
	while (cnt < 256)
		check[cnt++] = 0;
	if (ft_strlen(str) <= 1)
		status = 0;
	else
		while (*str != '\0')
		{
			if (*str == '+' || *str == '-' || check[*str] == 1)
			{
				status = 0;
				break ;
			}
			check[*str]++;
			str++;
		}
	return (status);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int sign;

	sign = 1;
	if (is_good_base(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			sign = -1;
		}
		print_convertation(sign * nbr, ft_strlen(base));
	}
}
