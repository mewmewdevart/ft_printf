<p align="center">
  <img src="https://user-images.githubusercontent.com/50052600/202604870-5f64e421-2529-4e21-b94a-25a945b2af3b.png" />
</p>


<h1 align="center">
 ft_printf
</h1>

<p align="center">
	<b><i>Write a library that contains ft_printf(), a function that will mimic the original printf()</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/mewmewdevart/ft_printf?color=6272a4" />
	<img alt="Main language" src="https://img.shields.io/github/languages/top/mewmewdevart/ft_printf?color=6272a4"/>
	<img alt="License" src="https://img.shields.io/github/license/mewmewdevart/ft_printf?color=6272a4"/>
</p>

## 💡 About the project

> _For the ft_printf() project of the 42 school cursus, we must recreate the famous C library printf() function. This project teaches us about variadic arguments. The printf() function sends a formatted string to the standard output (the display). <br> My ft_printf has to handle the following conversions: ↓ 
> - %c Prints a single character.
> - %s Prints a string (as defined by the common C convention).
> - %p The void * pointer argument has to be printed in hexadecimal format.
> - %d Prints a decimal (base 10) number.
> - %i Prints an integer in base 10.
> - %u Prints an unsigned decimal (base 10) number.
> - %x Prints a number in hexadecimal (base 16) lowercase format.
> - %X Prints a number in hexadecimal (base 16) uppercase format.
> - %% Prints a percent sign.

## 📁 Files/
* [`libraries/`](libraries) 
	Calling for my libraries <br>
	- ```libft/``` my custom-made library ( [see the project here](https://github.com/mewmewdevart/libft) )
	- ```ft_printf.h``` my ft_printf header to connect the functions created for this project
* [`sources/`](sources)[`ft_printf.c`](sources/ft_printf.c)  My main function implementation
	- ```ft_printf``` the "controller" 
	- ```ft_translate``` translate what happens after the % symbol
		- ```ft_putchar``` write a character, of unsigned char type, to stdout (libft) <br>
		- ```ft_putnbr``` function to diplay number (converted) with "ft_putchar" function  (libft)
		- ```ft_putnbr_unsigned``` function to diplay number (unsigned int) with "ft_putchar" function  (libft)
		- ```ft_putptr``` function  print the address of pointer with "ft_puthexa" function(libft)
		- ```ft_puthex``` function to printf in hexadecimal format (libft)
* [`Makefile`](Makefile) My build automation between libft and ft_printf libraries

## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`make`** and **`gcc`** compiler and some standard **C libraries** to run. <br>
❗️| Make sure you have all the required tools installed on your local machine then continue with these steps.

### Instructions

**0. Download the archives**

Download the archives and go to the library directory:

```bash
# Clone the repository
$ git clone https://github.com/mewmewdevart/ft_printf

# Enter into the directory
$ cd ft_printf/
```

**1. Compiling the library**

Run the command in your terminal :

```shell
$ make
```

**2. Using it in your code**

To use the ft_printf actions in your code, simply include its header:

```c
#include "libraries/ft_printf.h"
```
And create a main with some inserts/conversions <br>
Example ``main.c``:
```c  
#include "libraries/ft_printf.h"

int	main(void)
{
	char *string;
	
	string = "larissa";
	ft_printf("%s ", string);
	return (0);
}
```
If you try to compile your .c files with cc using "cc main.c" you will get an undefined symbol error for Libftprintf functions.

You have to tell the file which library it's using:
```shell
$ cc main.c libftprintf.a -o prog_example
```
To run the program, enter the following in the command prompt:

```shell
$ ./prog_example
```
The example I showed you will allow you to view a string of characters that will be displayed in your terminal like this:
```shell
$ larissa
```
❗️| You can try to compare my ft_printf() function with the original printf() function, inserting the library ```#include <stdio.h>``` on your code and calling for the printf().

## 📋 Credits

* [Acelera/Rodsmade](https://github.com/rodsmade/Projets_42_SP/)
* [ft_printf_tester/paulo-santana/](https://github.com/paulo-santana/ft_printf_tester)
* [printfTester/Tripouille](https://github.com/Tripouille/printfTester)

<p align="center"> Developed with love 💜 by Larissa Cristina Benedito (Mewmew/Larcrist). </p>
