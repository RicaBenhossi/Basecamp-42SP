#include <stdio.h>

int main	(void)
{
	int	a;
	int b;
	int	*ptr;

	a = 2;
	b = 2 * 2;

	ptr = &a;
	printf("Valor a = \t\t%d\n", a);
	printf("Valor b = \t\t%d\n", b);
	printf("Endereço a = \t\t%p\n", &a);
	printf("Endereço b = \t\t%p\n", &b);
	printf("Valor ptr = \t\t%p\n", ptr);
	printf("Valor ptr -1 = \t\t%p\n", ptr - 1);
	printf("Valor endereço ptr = \t%d\n", *ptr);
	printf("Valor endereço ptr -1 = %d\n", *(ptr - 1));


	// int	a;
	// int b;
	// int c;
	// int d;
	// int e;
	// int f;
	// int cont;
	// int	*ptr;

	// a = 2;
	// b = 2 * 2;
	// c = 2 * 3;
	// d = 2 * 4;
	// e = 2 * 5;
	// f = 2 * 6;
	// cont = 6;

	// ptr = &a;
	// while (cont >= 0)
	// {
	// 	printf("%p\n", &*ptr);
	// 	cont--;
	// 	ptr--;
	// }

	// return(0);
	
}