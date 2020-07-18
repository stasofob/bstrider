#include <stdio.h>
#include <string.h>
#include "bibic03/ex00/ft_strcmp.c"
#include "bibic03/ex01/ft_strncmp.c"
int main()
{
	char s1[] = "123456";
	char s2[] = "1234";
	
	printf("result of strcmp = %i\n", strcmp(s1, s2));
	printf("result of ft_strcmp = %i\n", ft_strcmp(s1, s2));
	printf("result of strncmp = %i\n", strncmp(s1, s2, 4));
	printf("result of ft_strncmp = %i\n", ft_strncmp(s1, s2, 4));
	printf("diff = %i\n", '4'-'\0');
	return 0;
}
