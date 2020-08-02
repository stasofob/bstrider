#include "rush02.h"

char *generate_num(int rank)
{
	char	*ret;
	int	cnt;

	if (rank <= 0)
		return (NULL);
	else
	{
		ret = (char*)malloc(sizeof(char) * rank + 2);
		ret[0] = '1';
		cnt = 1;
		while (cnt <= rank)
			ret[cnt++] = '0';
		ret[cnt] = '\0';
	}
	return (ret);
}
void print_list(t_list *dict)
{
	t_list *tmp = dict;
	while (tmp)
	{
		ft_putstr("key: ");
		ft_putstr(tmp->key);
		ft_putstr(" , data: ");
		ft_putstr(tmp->data);
		ft_putstr("\n");
		tmp = tmp->next;
	}
}
void ft_convert(t_list *dict, char *str, int size)
{
	int	i;
	char	*key;
	t_list	*number;
	print_list(dict);
	i = size;
	number = NULL;
	ft_putstr("ft_convert_debug\n");
	while (*str != '\0')
	{
		if (*str == '1' && i % 3 == 2)
		{
			key = ft_strndup(str,2);
			ft_list_push_back(&number, key, ft_strdup(ft_find_data(dict, key)));
			str++;
			i--;
		}
		else if (i % 3 == 0)
		{
			if (i != size)
			{
				key = generate_num(i);
				ft_list_push_back(&number,key, ft_strdup(ft_find_data(dict,key)));
			}
			key = ft_strndup(str,1);
			ft_list_push_back(&number, key, ft_strdup(ft_find_data(dict, key)));
			key = generate_num(i-1);
			ft_list_push_back(&number, key, ft_strdup(ft_find_data(dict, key)));
		}
		str++;
		i--;
	}


}


