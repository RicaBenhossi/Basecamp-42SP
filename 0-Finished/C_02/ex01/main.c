#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int    main()
{
	// tem que contar +1 pois tem o '\0' no final. senão corta
    char src[6] = "teste";
    char cpy[5] = "teste";
    char cpy1[7] = "asdfgh";
	int count = 0;

    printf("src -> %s\n", src);
    ft_strncpy(cpy, src, 6);
	while (count < 6)
	{
		printf("%c", cpy[count]);
		count++;
	}

	count = 0;
    printf("\nsrc - > %s\n", src);
	ft_strncpy(cpy1, src, 7);
	while (count < 6)
	{
		printf("%c", cpy1[count]);
		count++;
	}
	printf("\n");
}
