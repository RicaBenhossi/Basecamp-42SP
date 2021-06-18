void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	size--; 
	i = 0; 
	aux = 0; 
	while (i < size)
	{
		aux = tab[size];
		tab[size] = tab[i];
		tab[i] = aux;
		size--;
		i++;
	}
}
