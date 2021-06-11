int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0; 
	while (i < n)
	{ 
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}
