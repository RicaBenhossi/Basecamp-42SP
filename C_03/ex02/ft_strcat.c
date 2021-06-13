char	*ftstrcat(char *dest, char *src)
{
	int	*ptr

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src);
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0'
	return (dest);
}
