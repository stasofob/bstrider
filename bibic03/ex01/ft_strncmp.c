int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int cmp;
	unsigned int cnt;

	cmp = 0;
	cnt = 0;
	while (!(*s1 == '\0' && *s2 == '\0') && cnt < n)
	{
		cmp = (unsigned char)*s1 - (unsigned char)*s2;
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
		cnt++;
	}
	return cmp;
}
