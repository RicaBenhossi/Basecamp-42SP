#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*matrix;
	int	*ptr_matrix;

	if (min >= max)
		return (0);
	matrix = malloc(sizeof(int) * (max - min));
	ptr_matrix = matrix;
	while (min < max)
	{
		*ptr_matrix = min;
		min++;
		ptr_matrix++;
	}
	return (matrix);
}
