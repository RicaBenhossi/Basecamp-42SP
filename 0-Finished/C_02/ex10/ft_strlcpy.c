int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src [i];
		i++;
	}
	src_len = ft_strlen(src);
	while (i <= src_len)
	{
		dest[i] = '\0';
		i++;
	}
	return (src_len);
}
