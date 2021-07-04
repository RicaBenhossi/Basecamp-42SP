#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size_matriz;
	int *ptr_range;

	if (min >= max)
		return (0);
	size_matriz = max - min;
	*range = (int*)malloc(sizeof(int) * size_matriz);
	if (!*range)
		return (-1);
	ptr_range = *range;
	while (min < max)
		*(ptr_range++) = min++;
	return (size_matriz);
}
