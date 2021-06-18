#include <unistd.h>

int	ft_str_is_printable(char *str);

int	main ()
{
	char	phrase[7] = "abcdef";	//	PASSED
	char	phrase1[7] = "abcDef";	//	PASSED
	char	phrase2[7] = "abc#ef";	//	PASSED
	char	phrase3[7] = "abc1ef";	//	PASSED
	char	phrase4[2] = "";		//	PASSED
	char	phrase5[5] = {'a', 'b', 'c', 1, '\0'};	//	FAIL!

	if (ft_str_is_printable(phrase))
		write(1, "Passed!!!\n", 11);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_printable(phrase1))
		write(1, "Passed!!!\n", 11);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_printable(phrase2))
		write(1, "Passed!!!\n", 11);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_printable(phrase3))
		write(1, "Passed!!!\n", 11);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_printable(phrase4))
		write(1, "Passed!!!\n", 11);
	else
		write(1, "Fail!\n", 6);
	if (ft_str_is_printable(phrase5))
		write(1, "Passed!!!\n", 11);
	else
		write(1, "Fail!\n", 6);
}