/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 22:53:21 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/30 23:03:12 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	cnt;

	cnt = 0;
	if (nbr < 0)
		return (NULL);
	while (begin_list)
	{
		if (cnt == nbr)
			return (begin_list);
		cnt++;
		begin_list = begin_list->next;
	}
	return (NULL);
}
