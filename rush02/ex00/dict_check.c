#include "rush02.h"

int			ft_dict_check(char *str)
{
	while (*str == '\n')
		str++;
	if (*str < '0' || *str > '9')
		return (0);
	while (*str >= '0' && *str <= '9')
		str++;
	while (*str == ' ')
		str++;
	if (*str != ':')
		return (0);
	str++;
	while (*str == ' ')
		str++;
	if (*str < 32 || *str > 126)
		return (0);
	while (*str >= 32 && *str <= 126)
		str++;
	while (*str == '\n')
		str++;
	if (*str >= '0' && *str <= '9')
		if (ft_dict_check(str))
			return (1);
	if (*str == '\0')
		return (1);
	return (0);
}

int			ft_key_size(char *str)
{
	int		size;

	while(*str == '\n')
		str++;
	size = 0;
	while (*str >= '0' && *str<= '9')
	{
		size++;
		str++;
	}
	return (size);
}

int			ft_data_size(char *str)
{
	int		size;

	size = 0;
	while (*str >= '0' && *str <= '9')
		str++;
	while (*str == ' ')
		str++;
	str++;
	while (*str == ' ')
        str++;
	while (*str != '\n' && *str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

char		*ft_write_list(char *p, t_list **begin)
{
	char		*key;
	char		*data;
	int			i;

	key = (char*)malloc(ft_key_size(p) + 1);
    data = (char*)malloc(ft_data_size(p) + 1);
	i = 0;
	while (*p >= '0' && *p <= '9')
	{
		key[i] = *p;
		i++;
		p++;
	}
	key[i] = '\0';
	while (*p == ' ')
		p++;
	p++;
	while (*p == ' ')
		p++;
	i = 0;
	while (*p != '\n' && *p != '\0')
	{
		data[i] = *p;
		i++;
		p++;
	}
	while (data[i - 1] == ' ')
        {
            data[i - 1] = '\0';
            i--;
        }
	data[i] = '\0';
	ft_list_push_back(begin , key, data);
	return (p);
}

t_list		*ft_dict(char *file, int file_size)
{
	int			op;
	int			rd;
	char		str[file_size];
	char		*p;
	t_list		*begin;

	begin = 0;
	op = open(file, O_RDONLY);
	if (op == -1)
		return (0);
	rd = read(op, str, file_size);
	if (ft_dict_check(str))
	{
		p = str;
		while (*p != '\0')
		{
			p = ft_write_list(p, &begin);
			while (*p == '\n')
				p++;
		}
	}
	close(op);
	return (begin);
}
