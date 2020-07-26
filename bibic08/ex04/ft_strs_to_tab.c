/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 12:24:35 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/25 21:36:03 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
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

char				*ft_strdup(char *src)
{
	int		cnt;
	char	*dest;

	dest = (char *)malloc(ft_strlen(src) + 1);
	cnt = 0;
	if (dest != NULL)
	{
		while (cnt < ft_strlen(src))
		{
			dest[cnt] = src[cnt];
			cnt++;
		}
		dest[cnt] = '\0';
	}
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	typedef	struct s_stock_str	t_stock_str;
	struct s_stock_str			*result;
	int							cnt;

	result = (t_stock_str*)malloc(ac * sizeof(t_stock_str));
	cnt = 0;
	if (result == NULL)
		return (NULL);
	else
	{
		while (cnt < ac)
		{
			result[cnt].size = ft_strlen(av[cnt]);
			result[cnt].str = ft_strdup(av[cnt]);
			result[cnt].copy = ft_strdup(av[cnt]);
			cnt++;
		}
		result[cnt - 1].str = 0;
	}
	return (result);
}
