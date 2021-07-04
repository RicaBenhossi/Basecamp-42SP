#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *numbers;
    int i;

    if (min >= max)
        return (0);
    numbers = (int*)malloc(sizeof(int*) * (max - min)); // 
    i = 0;
    while (min < max)
    {
        numbers[i] = min;
        i++;
        min++;
    }
    return numbers;
}