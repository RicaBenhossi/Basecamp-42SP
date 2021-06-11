int	ft_c_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_filter_space(char *str, int *i)
{
	while (str[*i] != '\0')
	{
		if ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == 32)
			*i += 1;
		else
			break ;
	}
}

int	ft_c_is_minus(char c, int *minus)
{
	if (c == '-')
	{
		*minus += 1;
		return (1);
	}
	else if (c == '+')
		return (1);
	return (0);
}

int	convert_to_int(char *str, int *minus, int *i)
{
	int	result;

	*i = 0;
	result = 0;
	while (str[*i] != '\0')
	{
		result = result * 10 + (str[*i] - 48);
		*i += 1;
	}
	if (*minus % 2)
		result = result * (-1);
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	minus;

	i = 0;
	j = 0;
	minus = 0;
	ft_filter_space(str, &i);
	while (str[i] != '\0')
	{
		if (ft_c_is_numeric(str[i]))
		{
			str[j] = str[i];
			j++;
		}
		else if (!ft_c_is_minus(str[i], &minus))
			break ;
		i++;
	}
	str[j] = '\0';
	return (convert_to_int(str, &minus, &i));
}
