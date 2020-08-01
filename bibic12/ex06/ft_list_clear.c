/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 18:40:59 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/30 22:48:54 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *temp;

	while (begin_list->next)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		free_fct(begin_list->data);
		free(temp);
	}
	begin_list = NULL;
}
