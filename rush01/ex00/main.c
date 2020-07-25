/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 13:44:47 by bstrider          #+#    #+#             */
/*   Updated: 2020/07/25 19:18:03 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define ROWS 4
#define COLS 4
#define START_ARG 1
#define MIN_NBR 1
#define MAX_NBR 4

int	is_space(const char ch)
{
	int result;

	result = 0;
	if (ch == ' ' || (ch >= 9 && ch <= 13))
	{
		result = 1;
	}
	return (result);
}

int	is_numeric(const char ch)
{
	return (ch >= '0' && ch <= '9') ? 1 : 0;
}

int	ft_atoi(char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (is_numeric(*str))
	{
		result *= 10;
		result += (*str - '0');
		str++;
	}
	return (sign * result);
}

int	**input_good(char **mas, int size)
{
	int **check;
	int i;
	int j;

	check = NULL;
	if (size == COLS * ROWS + 1)
	{
		i = -1;
		check = (int**)malloc(ROWS * sizeof(int*));
		while (++i < ROWS)
		{
			j = -1;
			check[i] = (int*)malloc(COLS * sizeof(int));
			while (++j < COLS)
			{
				check[i][j] = ft_atoi(mas[START_ARG + i * COLS + j]);
				if (check[i][j] < MIN_NBR || check[i][j] > MAX_NBR)
				{
					free(check);
					return (NULL);
				}
			}
		}
	}
	return (check);
}

int	main(int argc, char **argv)
{
	int **input;

	input = input_good(argv, argc);
	if (input != NULL)
		printf("good input\n");
	else
		write(1, "Error\n", 6);
	return (0);
}
