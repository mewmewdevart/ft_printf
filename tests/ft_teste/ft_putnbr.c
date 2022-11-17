#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
    int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		count = count + ft_putchar('-');
		count = count + ft_putchar('2');
		count = count + ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		count = count + ft_putchar('-');
		count = count + ft_putnbr(-1 * nbr);
	}
	else if (nbr >= 0 && nbr <= 9)
		count = count + ft_putchar((nbr + 48));
	else
	{
		count = count + ft_putnbr(nbr / 10);
		count = count + ft_putchar(((nbr % 10) + 48));
	}
	return (count);
}

int ft_putnbr_unsigned(unsigned int number)
{
   	unsigned int	nbr;

	nbr = 0;
	if (number <= 9)
		return (ft_putchar((number + 48)));
	else
	{
		nbr = nbr + ft_putnbr_unsigned(number / 10);
		nbr = nbr + ft_putchar((number % 10) + 48);
	}
	return (nbr); 
}