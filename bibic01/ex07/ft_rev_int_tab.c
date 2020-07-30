/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 20:16:06 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/17 21:17:30 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int cnt;

	cnt = 0;
	while (cnt < size / 2)
	{
		temp = tab[cnt];
		tab[cnt] = tab[size - 1 - cnt];
		tab[size - 1 - cnt] = temp;
		cnt++;
	}
}
