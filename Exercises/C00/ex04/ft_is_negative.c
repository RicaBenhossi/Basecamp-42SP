#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int number)
{
	if (number < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
