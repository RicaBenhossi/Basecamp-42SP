#include <stdio.h>

char	*ft_strupcase(char *str);

int	main ()
{
	char	character[5] = "aasd";

	ft_strupcase(character);
	printf("%s", character);
}