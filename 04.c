#include <stdio.h>
#include <string.h>
#include "bibic05/ex00/ft_iterative_factorial.c"
int main()
{
	int t1 = 2;
	int t2 = -1;
	int t3 = 5;
	printf("fact %i = %i\n", t1, ft_iterative_factorial(t1));
	printf("fact %i = %i\n", t2, ft_iterative_factorial(t2));
	printf("fact %i = %i\n", t3, ft_iterative_factorial(t3));
	return 0;
}
