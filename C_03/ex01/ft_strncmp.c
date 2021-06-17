int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (s1 != '\0' && s2 != '\0' && i < (n - 1))
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		i++;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
