char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			j++;
			i++;
			while (to_find[j] != '\0')
			{
				if (str[i] != to_find[j])
					break;
				j++;
				i++;
			}
			if (to_find[j] == '\0')
				return (to_find);
		}
		i++;
	}
	return (0);
}