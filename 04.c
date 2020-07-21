#include <stdio.h>
#include <string.h>
#include "bibic05/ex00/ft_iterative_factorial.c"
#include "bibic05/ex01/ft_recursive_factorial.c"

int main()
{
	int t1 = 0;
	int t2 = -10;
	int t3 = 5;
	int t4 = 1;
	printf("fact %i = %i\n", t1, ft_iterative_factorial(t1));
	printf("fact %i = %i\n", t2, ft_iterative_factorial(t2));
	printf("fact %i = %i\n", t3, ft_iterative_factorial(t3));
	printf("fact %i = %i\n", t4, ft_iterative_factorial(t4));
	return 0;
}
