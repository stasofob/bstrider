#include "rush02.h"

ft_convert(char *str, int size)
{
	int	len_key;
	int	i;
	t_list	*number;

	i = size;
	number = NULL;
	while (*str != '\0')
	{
		if (*str == '1' && i % 3 == 2)
		{
			strndup(key, str, 2);
			strdup(data, find(key));
			push_back(number, strndup(str,2), strdup();
			str++;
			i--;
		}
		else if (i % 3 == 0)
		{
			if (i != size)
			{
				key = generate(i);
				push_back(key, find(key));
			}


		}
	}
}
