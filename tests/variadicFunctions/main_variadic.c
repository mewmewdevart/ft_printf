#include <stdio.h> //printf
#include <stdarg.h> //va_start, va_art, va_copy e va_end

int addNumbers(int n, ...);

int main (void)
{

}

//variadic function to add numbers
int addNumbers(int n, ...)
{
	int sum = 0;
	int index = 0;
	int temp;
	va_list ptr; //declarando um ponteiro como argumento

	//inicializando o argumento com a lista do ponteiro
	va_start(ptr, n);

	int max = va_arg(ptr, int);

	while(index < n)
	{
		temp = va_arg(ptr, int);
		if(temp > max)
		{
			max = temp;
		}
		max = max;
		index++;
	}
	va_end(ptr);

	return max;

}
