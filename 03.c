#include <stdio.h>
#include <string.h>
#include "bibic03/ex00/ft_strcmp.c"

int main()
{
	char s1[] = "1234";
	char s2[] = "4321";
	
	s1[0] = '\200';
	s2[0] = '\0';
	printf("result of strcmp = %i\n", strcmp(s1, s2));
	printf("result of ft_strcmp = %i\n", ft_strcmp(s1, s2));
	printf("diff = %i\n", '4'-'\0');
	return 0;
}
