/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 13:42:57 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/21 13:44:54 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
		result = 0;
	else if (power == 0)
		result = 1;
	else
	{
		while (power > 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
