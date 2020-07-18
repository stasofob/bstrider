int	ft_strcmp(char *s1, char *s2)
{
	int cmp;

	cmp = 0;
	while (!(*s1 == '\0' && *s2 == '\0'))
	{
		cmp = (unsigned char)*s1 - (unsigned char)*s2;
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return cmp;
}
