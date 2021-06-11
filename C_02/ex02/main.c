#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	main ()
{
	char	phrase[10] = "oitudobem";
	
	if (ft_str_is_alpha(phrase))
		write(1, "Is only letters.", 16);
	else
		write(1, "Fail!", 5);
}