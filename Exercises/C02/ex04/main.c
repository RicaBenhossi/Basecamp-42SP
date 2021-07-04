#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	main ()
{
	char	phrase[7] = "abcdef";	//	PASSED
	char	phrase1[7] = "abcDef";	//	FAIL!
	char	phrase2[7] = "abc#ef";	//	FAIL!
	char	phrase3[7] = "abc1ef";	//	FAIL!
	char	phrase4[7] = "";		//	PASSED
	
	if (ft_str_is_lowercase(phrase))
		write(1, "Is only lower.\n", 15);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_lowercase(phrase1))
		write(1, "Is only lower.\n", 15);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_lowercase(phrase2))
		write(1, "Is only lower.\n", 15);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_lowercase(phrase3))
		write(1, "Is only lower.\n", 15);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_lowercase(phrase4))
		write(1, "Is only lower.\n", 15);
	else
		write(1, "Fail!\n", 6);
}