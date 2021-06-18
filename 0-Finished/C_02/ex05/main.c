#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	main ()
{
	char	phrase[7] = "ABCDEF";	//	PASSED
	char	phrase1[7] = "ABCdEF";	//	FAIL!
	char	phrase2[7] = "ABC#EF";	//	FAIL!
	char	phrase3[7] = "ABC1EF";	//	FAIL!
	char	phrase4[7] = "";		//	PASSED
	
	if (ft_str_is_uppercase(phrase))
		write(1, "Is only upper.\n", 15);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_uppercase(phrase1))
		write(1, "Is only upper.\n", 15);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_uppercase(phrase2))
		write(1, "Is only upper.\n", 15);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_uppercase(phrase3))
		write(1, "Is only upper.\n", 15);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_uppercase(phrase4))
		write(1, "Is only upper.\n", 15);
	else
		write(1, "Fail!\n", 6);
}