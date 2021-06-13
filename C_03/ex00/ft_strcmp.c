int	sum_str(char *str)
{
	int result;

	result = 0;
	while (*str)
	{
		result += *str;
		++str;
	}
	return (result);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	result_s1;
	int	result_s2;

	result_s1 = sum_str(s1);
	result_s2 = sum_str(s2);
	return (result_s1 - result_s2);
}
