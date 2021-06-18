#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int	main(void)
{
	int result;

	result = 5;
	printf("%i\n", result);
	ft_ft(&result);
	printf("%i\n", result);
	
}
