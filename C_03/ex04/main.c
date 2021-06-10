#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main ()
{
	char	string1[11] = "tstestando";
	char	string2[4] = "std";
	
	ft_strstr(string1, string2);
}