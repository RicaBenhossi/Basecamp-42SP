int	ft_is_letter(char character)
{
	if ((character >= 'a' && character <= 'z')
		|| (character >= 'A' && character <= 'Z'))
		return (1);
	return (0);
}

int	ft_is_number(char character)
{
	if (character >= '0' && character <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (i == 1 && ft_is_letter(str[i - 1]))
		{
			str[i - 1] = str[i - 1] - 32;
			i++;
			continue ;
		}
		if (ft_is_letter(str[i]))
		{
			if (!ft_is_number(str[i - 1]) && !ft_is_letter(str[i - 1]))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
