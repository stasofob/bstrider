/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_znach.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahasap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:24:59 by mnahasap          #+#    #+#             */
/*   Updated: 2020/08/01 15:27:15 by mnahasap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_znach(char *str, int len)
{
	int len1;
	int n;
	int i;

	i = 0;
	len1 = len;
	n = 1;
	while (str[i] != '\0')
	{
		len1 = len;
		write(1, &str[i], 1);
		if (len - n > 1)
			write(1, " 1", 2);
		while (len1 - n > 0)
		{
			write(1, "0", 1);
			len1--;
		}
		n++;
		i++;
		if (n <= len)
			write(1, " ", 1);
	}
}
