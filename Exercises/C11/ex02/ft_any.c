#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
