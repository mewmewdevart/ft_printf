#include "ft_printf.h"

int	ft_puthex(unsigned int number, int flag)
{
	int	count;

	count = 0;
	if (number >= 16)
	{
		count += ft_puthex((number / 16), flag);
		count += ft_puthex((number % 16), flag);
	}
	else
	{
		if (flag == 'x')
			count = ft_putchar(HEX_LOWCASE[number]);
		else
			count = ft_putchar(HEX_UPCASE[number]);
	}
	return (count);
}
