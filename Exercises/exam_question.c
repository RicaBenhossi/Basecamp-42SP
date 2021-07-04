int *ft_range(int start, int end)
{
  int *numbers;
  int size;
  int i;

  size = ft_malloc_size (start, end);
  numbers = malloc((sizeof(numbers)) * size);
  i = -1;
  if (start < end)
  {
    while (start <= end)
    {
      i++;
      numbers[i] = start;
      start++;
    }
  }
  else
  {
    while (start >= end)
    {
      i++;
      numbers[i] = start;
      start--;
    }
  }
  return(numbers);
}