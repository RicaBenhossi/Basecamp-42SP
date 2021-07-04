#include <unistd.h>

int	ft_strlen(char *str);

int	main()
{
	int	len;
	char	name[5] = {'t', 'e', 's', 't', '\0'};

	len = ft_strlen(name);
	len = len + '0';
	write(1, &len, 1);

	return (0);
}