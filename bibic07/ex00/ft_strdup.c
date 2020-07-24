/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 17:00:50 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/24 18:39:01 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
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

char	*ft_strdup(char *src)
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
	else
	{
		errno = ENOENT;
	}
	return (dest);
}
