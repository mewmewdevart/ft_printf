#include "../libraries/ft_printf.h"
#include <stdio.h>

int	main (void)
{
	char caracteres;
	char *string;
	int inteiro;

	caracteres = 'a';
	ft_printf("Esse é o ft_printf() para printar char = %c", caracteres);
	printf("\nEsse é o printf() para printar char = %c", caracteres);
	printf("\n *********************** \n");

	inteiro = 5;
	ft_printf("Esse é o ft_printf() para printar inteiro = %d", inteiro);
	printf("\nEsse é o printf() para printar inteiro = %d", inteiro);
	printf("\n *********************** \n");

	string = "larissa";
	ft_printf("Esse é o ft_printf() para printar string = %s", string);
	printf("\n Esse é o printf() para printar string = %s", string);
	printf("\n *********************** \n");

}
