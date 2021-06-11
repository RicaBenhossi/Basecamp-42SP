int	ft_char_is_lowercase(char character)
{
	if (character >= 'a' && character <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0
	while (str[i] != '\0')
	{
		if (!ft_char_is_lowercase(str[i]))
			return (0);
	}
	return (1);
}