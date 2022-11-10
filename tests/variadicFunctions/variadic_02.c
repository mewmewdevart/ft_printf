#include <stdio.h>
#include <stdarg.h>


int divide(int numbers, ...);

int main (void)
{
        printf("4 / %d\n", divide(4, 8, 12, 16, 20));
        return (0);
}

int divide(int numbers, ...)
{
        int index;
        int resultado;
        va_list listaNumbers;

        index = 0;
        resultado = 1;
        va_start(listaNumbers, numbers);
        while(index < numbers)
        {
                resultado = 4/va_arg(listaNumbers, int);
                index++;
        }

        return (resultado);
}
