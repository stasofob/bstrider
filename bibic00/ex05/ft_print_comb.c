/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:45:00 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/16 16:33:33 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	const char	comspace[2] = {',', ' '};
	char		mas[3];

	mas[0] = '0';
	mas[1] = '1';
	mas[2] = '2';
	while (mas[0] <= '7')
	{
		while (mas[1] <= '8')
		{
			while (mas[2] <= '9')
			{
				write(1, mas, 3);
				if (mas[0] != '7')
				{
					write(1, comspace, 2);
				}
				mas[2]++;
			}
			mas[2] = ++mas[1] + 1;
		}
		mas[1] = mas[0]++ + 1;
	}
}
