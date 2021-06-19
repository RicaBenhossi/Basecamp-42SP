int	ft_is_prime(int nb)
{
	int	div;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	else
		div = nb - 2;
	while (div > 2)
	{
		if (nb % div == 0)
			return (0);
		div -= 2;
	}
	return (1);
}
