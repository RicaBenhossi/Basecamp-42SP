void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;		// 9
	j = 0;		// 10
	aux = 0;	// 13
	while (i < size) // 10
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				aux = tab[j];
				tab[j] = tab[i];
				tab[i] = aux;
			}
			j++;
		}
		i++;
	}
}
