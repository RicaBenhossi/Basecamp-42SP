#include <unistd.h>

int	ft_str_is_printable(char *str);

int	main ()
{
	char	phrase[7] = "abcdef";
	char	phrase1[7] = "abcDef";
	char	phrase2[7] = "abc#ef";
	char	phrase3[7] = "abc1ef";
	char	phrase4[2] = "";
	char	phrase5[5] = {'a', 'b', 'c', 1, '\0'};

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