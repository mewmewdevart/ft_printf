#include "../libraries/ft_printf.h"
#include <stdio.h>

int	main (void)
{
	char caracteres;
	char *string;
	int inteiro;

	caracteres = 'a';
	ft_printf(" Esse é o ft_printf() para printar char = %c", caracteres);
	printf("\n Esse é o printf() para printar char = %c", caracteres);
	printf("\n *********************** \n");

	inteiro = 5;
	ft_printf(" Esse é o ft_printf() para printar inteiro = %d", inteiro);
	printf("\n Esse é o printf() para printar inteiro = %d", inteiro);
	printf("\n *********************** \n");

	string = "larissa";
	ft_printf(" Esse é o ft_printf() para printar string = %s", string);
	printf("\n Esse é o printf() para printar string = %s", string);
	printf("\n *********************** \n");

	ft_printf(" Esse é o ft_printf() e ele deverá printar o simbolo da porcentagem = %%", string);
	printf("\n Esse é o printf() para pritnar o simbolo da porcentagem = %%", string);
        printf("\n *********************** \n");

}
