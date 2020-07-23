/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 12:52:08 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/22 14:34:35 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int mod;
	int cnt;

	mod = 1;
	cnt = 2;
	if (nb == 2)
		return (1);
	else
		while (cnt < nb && mod != 0)
		{
			mod = nb % cnt;
			cnt++;
		}
	return (cnt == nb) ? (1) : (0);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
