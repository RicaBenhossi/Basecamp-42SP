int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb == 2147483647)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
