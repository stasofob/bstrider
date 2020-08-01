/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 10:52:32 by bstrider          #+#    #+#             */
/*   Updated: 2020/08/01 15:52:44 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <stdlib.h>
# include <unistd.h>
# define ERROR_INPUT "Error\n"
# define DICT_PARSING "Dict Error\n"

typedef struct	s_number
{
	char	*key;
	char	*value;
}				t_number;

typedef struct	s_list_dict
{
	char				*key;
	char				*data;
	struct s_list_dict	*next;
}				t_list;

void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_isnumber(char *str);
void			ft_znach(int len, char *str);

#endif
