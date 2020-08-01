/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 10:55:33 by bstrider          #+#    #+#             */
/*   Updated: 2020/08/01 18:12:54 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "rush02.h"

int			main(int argc, char **argv)
{
	t_list		*dict;
	int		size_number;

	if (argc == 2 && (size_number = ft_isnumber(argv[1])))
	{
		dict = ft_dict(DEFAULT_FILE, ft_file_size(DEFAULT_FILE));
		ft_znach(argv[1], size_number);
	}
	else if (argc == 3 && (size_number = ft_isnumber(argv[2])))
	{
		dict = ft_dict(argv[1], ft_file_size(argv[1]));
		ft_znach(argv[2], size_number);
	}
	else
		ft_putstr(ERROR_INPUT);
	return (0);
}
