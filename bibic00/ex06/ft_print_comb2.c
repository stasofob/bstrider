/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:08:55 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/16 18:08:30 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	mas[5];

	mas[2] = ' ';
	i = 0;
	while (i <= 97)
	{
		j = i + 1;
		while (j <= 99)
		{
			mas[0] = i / 10 + '0';
			mas[1] = i % 10 + '0';
			mas[3] = j / 10 + '0';
			mas[4] = j % 10 + '0';
			write(1, mas, 5);
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
	write(1, "98 99", 5);
}
