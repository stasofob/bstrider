/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:09:40 by bstrider          #+#    #+#             */
/*   Updated: 2020/08/01 16:24:52 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_list	*ft_create_elem(char *key, char *data)
{
	t_list *dict;

	dict = (t_list*)malloc(sizeof(t_list));
	if (dict)
	{
		dict->key = key;
		dict->data = data;
		dict->next = NULL;
	}
	return (dict);
}

int	ft_list_push_back(t_list **begin_list, char *key, char *data)
{
	t_list	*tmp;
	int	repeat_insert;

	repeat_insert = 0;
	if (!begin_list || !(*begin_list))
		*begin_list = ft_create_elem(key, data);
	else
	{
		if (ft_find_data(*begin_list, key) != NULL)
			repeat_insert = 1;
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(key, data);
	}
	return (repeat_insert);
}

void	ft_list_clear(t_list *begin_list)
{
	t_list *p;

	p = begin_list;
	while (begin_list)
	{
		begin_list = begin_list->next;
		free(p);
	}
}

char	*ft_find_data(t_list *list, char *key)
{
	t_list *temp;

	temp = list;
	while (temp)
	{
		if (!ft_strcmp(temp->key, key))
		{
			return (temp->data);
		}
		temp = temp->next;
	}
	return (NULL);
}
