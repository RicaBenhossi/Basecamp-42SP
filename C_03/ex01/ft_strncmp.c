int	ft_sum_str(char *str, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 0;
	while (str[i] != '\0' && i < n)
	{
		result += str[i];
		i++;
	}
	return (result);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	result_s1;
	int	result_s2;

	result_s1 = ft_sum_str(s1, n);
	result_s2 = ft_sum_str(s2, n);
	return (result_s1 - result_s2);
}

// int    ft_sum_str(char *str, unsigned int n)
// {
//     int                result;
//     unsigned int    i;

//     i = 0;
//     result = 0;
//     while (str[i] != '\0' && i < n)
//     {
//         result += str[i];
//         i++;
//     }
//     return (result);
// }

// int    ft_strncmp(char *s1, char *s2, unsigned int n)
// {
//     int    result_a;
//     int    result_b;

//     result_a = ft_sum_str(s1, n);
//     result_b = ft_sum_str(s2, n);
//     return (result_a - result_b);
// }