int	ft_char_is_number(char character)
{
	if (character >= '0' && character <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! ft_char_is_number(str[i]))
			return (0);
		i++;
	}
	return (1);
}