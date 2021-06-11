#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main ()
{
	char	array1[5] = {'t', 'e', 's', 't', '\0'};
	char	array2[5]; = "teste"

	ft_strcpy(array2, array1);
	printf("%s\n", array2);
	printf("%s\n", array1);
	if (array2[4] == '\0')
	{
		printf("nulo");
	}
}