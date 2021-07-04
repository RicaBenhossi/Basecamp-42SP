#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_result (char first, char second, char third)
{
	ft_putchar(third);
	ft_putchar(second);
	ft_putchar(first);
	if (third == '7')
		return ;
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb (void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '0';
	third = '0';
	while (third <= '9')
	{
		second = third + 1;
		while (second <= '9')
		{
			first = second + 1;
			while (first <= '9')
			{
				write_result(first, second, third);
				first++;
			}
			second++;
		}
		third++;
	}
}
