#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main ()
{
	char	string1[5] = "aabb";
	char	string2[5] = "ccdd";
	
	ft_strncat(string1, string2);

}