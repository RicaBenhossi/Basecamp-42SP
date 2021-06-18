int 	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
		return (0);
	while (nb > 1)
	{
		result = nb * result;
		if (result > 2147483647)
			return (0);
		nb --;
	}
	return (result);
}
