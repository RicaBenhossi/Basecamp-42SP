int	ft_char_is_alpha(char character)
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! ft_char_is_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}
