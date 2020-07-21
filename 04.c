#include <stdio.h>
#include <string.h>
#include "bibic05/ex00/ft_iterative_factorial.c"
#include "bibic05/ex01/ft_recursive_factorial.c"
#include "bibic05/ex02/ft_iterative_power.c"

int main()
{
	int a1, p1 , a2, p2, a3, p3;
	a1 = 0;
	p1 = 0;
	a2 = -2;
	p2 = 2;
	a3 = 4;
	p3 = -1;
	printf("pow(%i, %i) = %i\n",a1, p1, ft_iterative_power(a1, p1));
	printf("pow(%i, %i) = %i\n",a2, p2, ft_iterative_power(a2, p2));
	printf("pow(%i, %i) = %i\n",a3, p3, ft_iterative_power(a3, p3));
	return 0;
}
