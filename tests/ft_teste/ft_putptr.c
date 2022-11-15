#include "ft_printf.h"

int	ft_putptr(unsigned long int ptr)
{
    int address;

    address = 0;
    if (!ptr)
    {
        address = address + write (1, "(nil)", 5);
        return (address);
    }
    else
    {
        address = write (1, "0x", 2);
        address = address + ft_puthex(ptr, 'x');
    }
    return (address);
}

int	ft_puthex(unsigned long number, int flag)
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