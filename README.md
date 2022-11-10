<h1 align="center">
 ft_printf [⚠️ In Development]
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

> _The printf() function sends a formatted string to the standard output (the display).
I have to recode the printf() function for my [libft](https://github.com/mewmewdevart/libft) library. My function has to handle the following conversions: ↓ 
> - %c Prints a single character.
> - %s Prints a string (as defined by the common C convention).
> - %p The void * pointer argument has to be printed in hexadecimal format.
> - %d Prints a decimal (base 10) number.
> - %i Prints an integer in base 10.
> - %u Prints an unsigned decimal (base 10) number.
> - %x Prints a number in hexadecimal (base 16) lowercase format.
> - %X Prints a number in hexadecimal (base 16) uppercase format.
> - %% Prints a percent sign.

## 📁 Files/src
* [`libraries`](libraries) 
	Calling for functions. <br>
	- ```libft/``` My custom-made library [see the project here](https://github.com/mewmewdevart/libft)
	- ```ft_printf.h``` My ft_printf header to connect the functions created for this project.

* [`sources`](sources) 
	Calling for functions. <br>
	- ```ft_printf.c``` //soon

## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`make`** and **`gcc` compiler** and some standard **C libraries** to run. <br>
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

<p align="center"> Developed with love 💜 by Larissa Cristina Benedito (Mewmew/Larcrist). </p>
