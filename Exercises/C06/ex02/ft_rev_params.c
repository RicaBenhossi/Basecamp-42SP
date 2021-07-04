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
	argc--;
	while (argc > 0)
	{
		write(1, argv[argc], ft_strlen(argv[argc]));
		write(1, "\n", 1);
		argc--;
	}
}
