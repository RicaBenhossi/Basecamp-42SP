#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


char	*ft_strdup(char *s)
{
	char	*dolly;
	char	*ptr_dolly;
	int		size_array;

	size_array = ft_strlen(s);
	dolly = malloc(sizeof(*dolly) * size_array);
	ptr_dolly = dolly;
	while (*s)
	{
		*ptr_dolly = *s;
		s++;
		ptr_dolly++;
	}
	*ptr_dolly = '\0';

	return (dolly);
}
