#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int	num1;
	int num2;

	num1 = 10;
	num2 = 3;
	
	ft_ultimate_div_mod(&num1, &num2);
	printf("%i\n", num1);
	printf("%i\n", num2);

	return (0);
}