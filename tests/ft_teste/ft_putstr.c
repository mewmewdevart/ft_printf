#include "ft_printf.h"

int ft_putstr(char *str)
{
    int index;

    index = 0;
    if(!str)
        index = write(1, "(null)", 6);
    else
    {
        while(str[index] != '\0')
        {
            write (1, &str[index], 1);
            index++;
        }
    }
    return (index);
}