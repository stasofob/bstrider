#ifndef LIST_H
# define LIST_H
# include <stdlib.h>

typedef struct  s_list_dict
{
        char                            *key;
        char                            *data;
        struct s_list_dict      *next;
}                               t_list;

t_list  *ft_create_elem(char *key, char *data);
int     ft_list_push_back(t_list **begin_list, char *key, char *data);
void    ft_list_clear(t_list *begin_list);
char    *ft_find_data(t_list *list, char *key);


#endif
