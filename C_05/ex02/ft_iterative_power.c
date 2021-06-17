#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int result = nb;
	if (power == 0)
		return (1);
	if (nb < 0 || power < 0 || nb == 2147483647)
		return (0);
	while ((power - 1) > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
