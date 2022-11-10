#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);

int main (void)
{
	printf("Sum of 10, 20 and 30 = %d\n", sum(3, 10, 20, 30));
	printf("Sum of 4, 20, 25 and 30 = %d\n", sum(4, 4, 20, 25, 30));

	return (0);
}

int sum(int num_args, ...)
{
	int calc;
	int index;
	va_list ap;

	calc = 0;
	index = 0;
	va_start(ap, num_args);
	while(index < num_args)
	{
		calc = calc + va_arg(ap, int);
		index++;
	}
	va_end(ap);

	return(calc);
}
