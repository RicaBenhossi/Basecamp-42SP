#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	main ()
{
	char	phrase[10] = "234567891";
	
	if (ft_str_is_numeric(phrase))
		write(1, "Is only numbers.\n", 18);
	else
		write(1, "Fail!\n", 7);
}