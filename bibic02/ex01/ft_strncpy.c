/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:20:40 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/18 14:56:18 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*temp;

	temp = dest;
	i = 0;
	while (i < n)
	{
		if (*src == '\0')
			*temp = '\0';
		else
		{
			*temp = *src;
			src++;
		}
		temp++;
		i++;
	}
	dest[n - 1] = '\0';
	return (dest);
}
