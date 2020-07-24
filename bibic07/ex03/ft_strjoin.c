int	ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
int ch_count(char **strs, int size)
{
	int result;
	int cnt;

	result = 0;
	cnt = 0;
	while (cnt < size)
	{
		result += ft_strlen(strs[cnt]);
		cnt++;
	}
	return (result);
}
#include <stdio.h>
int main(int argc, char **argv)
{
	printf ("count in mass = %i\n", ch_count(argv, argc));
	return 0;
}

/*char *ft_strjoin(int size, char **strs, char *sep)
{
	char *result;
	int cnt;

	cnt = 0;
	while (cnt < size)
	*/
