int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	amount;

	amount = 0;
	length--;
	while (length >= 0)
	{
		if (f(tab[length]))
			amount++;
		length--;
	}
	return (amount);
}