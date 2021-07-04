#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	param_num;

	param_num = argc - argc;
	write(1, argv[param_num], ft_strlen(argv[param_num]));
	write(1, "\n", 1);
	return (0);
}
