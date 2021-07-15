int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 1;
	while (tab[i] && f(tab[i], tab[i-1]))
		i++;

	if (i == length)
		return 0;
	else
		return 1;


}