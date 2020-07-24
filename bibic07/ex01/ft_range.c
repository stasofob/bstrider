/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 17:22:38 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/24 22:01:47 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int cnt;

	arr = (int *)malloc((max - min) * sizeof(int));
	cnt = 0;
	if (arr == NULL || min >= max)
		return (NULL);
	else
		while (min < max)
		{
			arr[cnt++] = min;
			min++;
		}
	return (arr);
}
