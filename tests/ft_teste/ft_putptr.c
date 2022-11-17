#include "ft_printf.h"

static int	ft_puthex_address(unsigned long int number, int flag);

int	ft_putptr(unsigned long int ptr)
{
    int address;

    address = 0;
    if (!ptr)
    {
        address += write (1, "(nil)", 5);
        return (address);
    }
    else
    {
        address = write (1, "0x", 2);
        address += ft_puthex_address(ptr, 'x');
    }
    return (address);
}

static int	ft_puthex_address(unsigned long int number, int flag)
{
	int	count;

	count = 0;
	if (number >= 16)
	{
		count += ft_puthex_address((number / 16), flag);
		count += ft_puthex_address((number % 16), flag);
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
