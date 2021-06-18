#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[7] = "qwerty";
	char dest[7];
	char src2[7] = "qwerty";
	char dest2[7] = "qwerty";
	int size = 6;

	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%zu\n", strlcpy(dest2, src2, size));
}