int	ft_char_is_uppercase(char character)
{
	if (character >= 'A' && character <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! ft_
	char_is_uppercase(str[i]))
			return (0);
	}
	return (1);
}