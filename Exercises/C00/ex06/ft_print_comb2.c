#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_result(char first, char second, char third, char fourth)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(' ');
	ft_putchar(third);
	ft_putchar(fourth);
	if (first == '9' && second == '8' && third == '9' && fourth == '9')
		return ;
	ft_putchar(',');
	ft_putchar(' ');
}

void	comb2_iterator(char first, char second, char third, char fourth)
{
	while (first <= '9')
	{
		while (second <= '9')
		{
			fourth = second + 1;
			while (third <= '9')
			{
				while (fourth <= '9')
				{
					write_result(first, second, third, fourth);
					fourth++;
				}
				fourth = '0';
				third++;
			}
			second++;
			third = first;
		}
		first++;
		second = '0';
		third = first;
	}
}

void	ft_print_comb2(void)
{
	char	first;
	char	second;
	char	third;
	char	fourth;

	first = '0';
	second = '0';
	third = '0';
	fourth = '0';
	comb2_iterator(first, second, third, fourth);
}
