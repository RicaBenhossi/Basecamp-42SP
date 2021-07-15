#include <stdlib.h>

int	ft_strlen(int *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	size;
	int	*new_array;

	i = 0;
	size = ft_strlen(tab);
	new_array = malloc(size);
	while (i < length)
	{
		new_array[i] = f(tab[i]);
		i++;
	}
	return (new_array);
}
