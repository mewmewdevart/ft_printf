#include "../libraries/ft_printf.h"
#include <stdio.h>

int	main (void)
{
	int inteiro;
	int *pointer;
	int inteiroUnsignedN;
	char caracteres;
	char *string;

	caracteres = 'a';
	ft_printf(" ft_printf() para printar char = %c", caracteres);
	printf("\n printf() para printar char = %c", caracteres);
        printf("\n *********************** \n");

	inteiro = 5;
	ft_printf(" ft_printf() para printar inteiro = %d", inteiro);
	printf("\n printf() para printar inteiro = %d", inteiro);
	printf("\n *********************** \n");

	string = "larissa";
	ft_printf(" ft_printf() para printar string = %s", string);
	printf("\n printf() para printar string = %s", string);
	printf("\n *********************** \n");

	pointer = &inteiro;
	ft_printf(" ft_printf() para printar endereço de ponteiro = %p", pointer);
	printf("\n printf() para printar endereço de ponteiro = %p", pointer);
	printf("\n *********************** \n");

	ft_printf(" ft_printf() e ele deverá printar o simbolo da porcentagem = %%", string);
	printf("\n printf() e ele printa o simbolo da porcentagem = %%", string);
    printf("\n *********************** \n");

	inteiroUnsignedN = 1;
	ft_printf(" ft_printf() para printar unsigned int = %u", inteiroUnsignedN);
	printf("\n printf() para printar unsigned int = %u", inteiroUnsignedN);
	printf("\n *********************** \n");
	inteiroUnsignedN = -1;
	ft_printf(" ft_printf() para printar unsigned int = %u", inteiroUnsignedN);
	printf("\n printf() para printar unsigned int = %u", inteiroUnsignedN);
	printf("\n *********************** \n");
}
