/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 14:31:01 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/21 14:40:39 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int cnt;

	cnt = nb - 1;
	if (nb == 0 || nb == 1)
		nb = 1;
	else if (nb < 0)
		nb = 0;
	else
	{
		while (cnt >= 1)
		{
			nb *= cnt;
			cnt--;
		}
	}
	return (nb);
}
