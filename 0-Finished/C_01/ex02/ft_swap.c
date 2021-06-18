#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;

}

int main()
{
	int x;
	int y;

	x = 8;
	y = 1;
	printf("X = %i\n", x); //8
	printf("Y = %i\n", y); // 1
	ft_swap(&x, &y);
	printf("X = %i\n", x); //1
	printf("Y = %i\n", y); //8
}