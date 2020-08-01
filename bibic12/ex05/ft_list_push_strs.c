/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 18:07:00 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/30 18:24:33 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*head;

	head = ft_create_elem(data);
	head->next = *begin_list;
	*begin_list = head;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		cnt;
	t_list	*list;

	cnt = 0;
	list = NULL;
	while (cnt < size)
		ft_list_push_front(&list, strs[cnt++]);
	return (list);
}
