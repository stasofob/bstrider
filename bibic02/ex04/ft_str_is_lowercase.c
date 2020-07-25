/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:18:44 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/18 16:36:00 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int status;

	status = 1;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			status = 0;
			break ;
		}
		str++;
	}
	return (status);
}
