#include "rush02.h"

char *generate_num(char ch, int rank)
{
	char	*ret;
	int	cnt;

	if (rank <= 0)
		return (NULL);
	else
	{
		ret = (char*)malloc(sizeof(char) * rank + 2);
		ret[0] = ch;
		cnt = 1;
		while (cnt <= rank)
			ret[cnt++] = '0';
		ret[cnt] = '\0';
	}
	return (ret);
}///////////////////////
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
}//////////////////////////
int ft_convert(t_list *dict, char *str, int size)
{
	int	i;
	char	*key;
	int success;
	t_list	*number;
	i = size;
	number = NULL;
	success = 1;
	int flag = 0;
	//print_list(dict);
	while (*str != '\0')
	{
		if (i % 3 == 0 && flag)
		{
			key = generate_num('1', i);
			ft_list_push_back(&number, key, strdup(ft_find_data(dict, key)));
			flag = 0;
		}
		if (*str != '0')
		{
			flag = 1;
			if (i % 3 == 2)
			{
				if (i != size)
				{	
					key = generate_num('1',2);
					ft_list_push_back(&number, key, strdup(ft_find_data(dict,key)));
				}
				if (*str == '1')
				{
					key = ft_strndup(str++, 2);
					i--;
				}
				else
					key = generate_num(*str, 1);
			}
			else
				key = ft_strndup(str, 1);
			ft_list_push_back(&number, key, strdup(ft_find_data(dict, key)));
		}
		str++;
		i--;
	}
	ft_putstr("result list\n");
	print_list(number);
	return (success);
}


