#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 7, 8};
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_rev_int_tab(arr, 10);
	while (i < 10)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	// write(1, arr, 6);
	return (0);
}