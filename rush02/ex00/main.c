/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 10:55:33 by bstrider          #+#    #+#             */
/*   Updated: 2020/08/02 15:47:51 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int			main(int argc, char **argv)
{
	t_list		*dict;
	int		size_number;

	if (argc == 2 && (size_number = ft_isnumber(argv[1])))
	{
		
		if (dict = ft_dict(DEFAULT_FILE, ft_file_size(DEFAULT_FILE)))
			if (ft_convert(dict, argv[1], size_number))//ft_znach(argv[1], size_number);
				return (0);
		ft_putstr(DICT_PARSING);
	}
	else if (argc == 3 && (size_number = ft_isnumber(argv[2])))
	{
		if (dict = ft_dict(argv[1], ft_file_size(argv[1])))
			if (ft_convert(dict, argv[2], size_number))
				return (0);	
		ft_putstr(DICT_PARSING);
	}
	else
		ft_putstr(ERROR_INPUT);
	return (0);
}
