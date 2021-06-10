#include <stdio.h>

void	ft_str_is_printable(char *str);

int	main ()
{
	char	letter[5] = 'A';
	ft_str_is_printable(letter);
	printf('%s', letter);
}