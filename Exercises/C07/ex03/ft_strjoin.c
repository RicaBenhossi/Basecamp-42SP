#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);

}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_size;
	char	*str_joined;

	total_size = 0;
	i = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		i++;
	}
	total_size += ft_strlen(sep) * (size -1);
	str_joined = malloc(total_size);
	i = 0;
	while (i < size)
	{
		ft_strcat(str_joined, strs[i]);
		i++;
		if (i < size)
			ft_strcat(str_joined, sep);
	}
	return (str_joined);
}
