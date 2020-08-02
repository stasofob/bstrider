/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 10:52:32 by bstrider          #+#    #+#             */
/*   Updated: 2020/08/02 17:14:24 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <fcntl.h>
# include "my_list.h"
# define ERROR_INPUT "Error\n"
# define DICT_PARSING "Dict Error\n"
# define DEFAULT_FILE "numbers.dict"

void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_isnumber(char *str);
void			ft_znach(char *str, int len);
int			ft_file_size(char *file);
int 			ft_convert(t_list *dict, char *str, int size);
char    		*ft_strdup(char *src);
char    		*ft_strndup(char *src, int n);
t_list			*ft_dict(char *file, int file_size);




void print_list(t_list *dict);
char *generate_num(char ch, int rank);

#endif
