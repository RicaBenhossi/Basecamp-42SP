#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main()
{
	// int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 7, 8};
	int arr[10] = {13, 11, 19, 23, 4, 3, 6, 13, 18, 28};
	// int arr[10] = {8, 7, 7, 6, 5, 4, 3, 2, 1, 0};
	
	int i;


	i = 0;
	while (i < 10)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_sort_int_tab(arr, 10);
	while (i < 10)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}
