/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 20:35:19 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/24 22:00:29 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcpy(char *dest, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ch_count(char **strs, int size)
{
	int result;
	int cnt;

	result = 0;
	cnt = 0;
	while (cnt < size)
	{
		result += ft_strlen(strs[cnt]);
		cnt++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		cnt;

	cnt = 0;
	if (size == 0)
	{
		result = malloc(1);
		*result = '\0';
	}
	else
	{
		result = malloc(ch_count(strs, size) + size);
		while (cnt < size)
		{
			ft_strcpy(result, strs[cnt]);
			result += ft_strlen(strs[cnt]);
			if (cnt != size - 1)
				*result++ = *sep;
			cnt++;
		}
		*result = '\0';
	}
	return (result - ch_count(strs, size) - size + 1);
}
