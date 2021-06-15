
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb) // 5522
{

    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10); 552	,2
        ft_putnbr(nb % 10); 2
    }
    else
    {
        ft_putchar(nb + '0');
    }
} 
