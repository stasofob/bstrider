/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:06:55 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/18 16:14:27 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int status;

	status = 1;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			status = 0;
			break ;
		}
		str++;
	}
	return (status);
}
