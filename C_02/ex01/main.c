#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int    main()
{
	// tem que contar +1 pois tem o '\0' no final. senão corta
    char src[6] = "teste";
    char cpy[5] = "";
	int count = 0;

    ft_strncpy(cpy, src, 6);
    printf("%s\n", cpy);
	while (count < 6)
	{
		printf("%c", cpy[count]);
		count++;
	}
}