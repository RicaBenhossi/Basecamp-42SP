#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main ()
{
	char	array1[5] = {'t', 'e', 's', 't', '\0'};
	char	array2[5];

	ft_strcpy(array2, array1);
	printf("%s\n", array2);
	printf("%s\n", array1);
	if (array2[4] == '\0')
	{
		printf("nulo");
	}
}