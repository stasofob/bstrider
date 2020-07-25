/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:33:15 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/18 16:37:19 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int status;

	status = 1;
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			status = 0;
			break ;
		}
		str++;
	}
	return (status);
}
