#include "ft_printf.h"

int main (void)
{
    char ch;
    char *string;
    int number;
    int *ptr_number;

    ch = 'a';
    ft_printf("%c", ch);
    ft_printf("%%", ch);

    string = "larissa";
    ft_printf("%s", string);

    number = 5;
    ptr_number = &number;
    ft_printf("%p", ptr_number);
    return (0);
}