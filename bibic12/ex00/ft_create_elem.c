/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 11:02:37 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/30 18:52:39 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*ret;

	ret = (t_list*)malloc(sizeof(t_list));
	if (ret)
	{
		ret->data = data;
		ret->next = NULL;
	}
	return (ret);
}
