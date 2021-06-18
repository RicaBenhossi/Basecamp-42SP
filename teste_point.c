#include <stdio.h>

int main    (void)
{
    int    a;
    int b;
    int    *ptr;

    a = 2;
    b = 2 * 2;
    ptr = &a;
    printf("Valor a = \t\t%d\n", a);
    printf("Valor b = \t\t%d\n", b);
    printf("Endereço a = \t\t%p\n", &a);
    printf("Endereço b = \t\t%p\n", &b);
    printf("Valor ptr = \t\t%p\n", ptr);
    // printf("Valor ptr -1 = \t\t%p\n", ptr - 1);
    printf("Valor endereço ptr = \t%d\n", *ptr);
    // printf("Valor endereço ptr -1 = %d\n", *(ptr - 1));
	*ptr = 5;
    printf("Valor a = \t\t%d\n", a);
    printf("Valor endereço ptr = \t%d\n", *ptr);

    // int	a;
    // int b;
    // int c;
    // int d;
    // int e;
    // int f;
    // int i;
    // int *ptr;

    // a = 2;
    // b = 2 * 2;
    // c = 2 * 3;
    // d = 2 * 4;
    // e = 2 * 5;
    // f = 2 * 6;
    // i = 6;

    // ptr = &a;

	// printf("Valor a         => %d\n", a);
	// printf("Valor b         => %d\n", b);
	// printf("Valor c         => %d\n", c);
	// printf("Valor d         => %d\n", d);
	// printf("Valor e         => %d\n", e);
	// printf("Valor f         => %d\n", f);
	// printf("Valor i         => %d\n", i);
	// printf("End. Mem. a     => %p\n", &a);
	// printf("End. Mem. b     => %p\n", &b);
	// printf("End. Mem. c     => %p\n", &c);
	// printf("End. Mem. d     => %p\n", &d);
	// printf("End. Mem. e     => %p\n", &e);
	// printf("End. Mem. f     => %p\n", &f);
	// printf("End. Mem. i     => %p\n", &i);
    // while (i >= 0)
    // {
    //     printf("Valor *ptr      => %d\n", *ptr);
    //     printf("End. Mem. *ptr  => %p\n", &*ptr);
    //     i--;
    //     ptr--;
    // }

    return(0);

}