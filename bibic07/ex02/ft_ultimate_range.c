/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 19:13:17 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/25 13:30:56 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int cnt;

	cnt = 0;
	*range = (int *)malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	else if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		while (min < max)
		{
			*(*range + cnt) = min;
			min++;
			cnt++;
		}
	}
	return (cnt);
}
