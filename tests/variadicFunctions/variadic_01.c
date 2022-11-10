#include <stdio.h>
#include <stdarg.h>

int multiplica(int nTermos, ...)
{
        int index;
        int resultado;
        va_list listaTermos;

        index = 0 ;
        resultado = 1:

        va_start (listaTermos, nTermos);
        while(index < nTermos) // 7 = nTermos
        {
                resultado = resultado * va_arg(listaTermos, int); //listaTermos = {8, 7, 6, 5, 4, 3, 2}  do tipo int que percorre uma posição a cada chamada
                index++;
        }
        va_end(listaTermos);

        return (resultado);
}

int main (void)
{
        printf("8! = %d\n", multiplica(7, 8, 7, 6, 5, 4, 3, 2));

        return(0);
}
