#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	main(int argc, char **argv)
{
	int		param;
	int		next_param;
	char	*aux_param;

	param = 1;
	while (param < argc)
	{
		next_param = param + 1;
		while (next_param < argc)
		{
			if (ft_strcmp(argv[param], argv[next_param]) > 0)
			{
				aux_param = argv[param];
				argv[param] = argv[next_param];
				argv[next_param] = aux_param;
			}
			next_param++;
		}
		write(1, argv[param], ft_strlen(argv[param]));
		write(1, "\n", 1);
		param++;
	}
	return (0);
}
