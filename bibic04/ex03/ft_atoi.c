/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:02:35 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/21 15:34:56 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(const char ch)
{
	int result;

	result = 0;
	if (ch == ' ' || (ch >= 9 && ch <= 13))
	{
		result = 1;
	}
	return (result);
}

int	is_numeric(const char ch)
{
	return (ch >= '0' && ch <= '9') ? 1 : 0;
}

int	ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (is_numeric(*str))
	{
		result *= 10;
		result += (*str - '0');
		str++;
	}
	return (sign * result);
}
