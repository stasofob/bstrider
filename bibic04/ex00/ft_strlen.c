int ft_strlen(char *str)
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
