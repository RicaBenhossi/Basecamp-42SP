#include <unistd.h>

int	main(int argc, char **argv)
{
	argc--;
	while (argc > 0)
	{
		while (*argv[argc])
		{
			write(1, argv[argc], 1);
			argv[argc]++;
		}
	write(1, "\n", 1);
	argc--;
	}
}