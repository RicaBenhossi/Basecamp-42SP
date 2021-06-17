int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int i = 0;
// 	while (s1 != '\0' && s2[i] != '\0')
// 	{
// 		if (s1[i] != s2[i])
// 			return (*(unsigned char*)&s1[i] - *(unsigned char*)&s2[i]);
// 		// s1++;
// 		// s2++;
// 		i++;
// 	}
// 	return (*(unsigned char*)&s1[i] - *(unsigned char*)&s2[i]);
// }
