#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int	num1;
	int num2;
	int div;
	int mod;

	num1 = 10;
	num2 = 3;
	
	ft_div_mod(num1, num2, &div, &mod);
	printf("%i\n", div);
	printf("%i\n", mod);

	return (0);
}