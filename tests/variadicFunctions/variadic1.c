#include <stdarg.h>
#include <stdio.h>

//int function_name(data_type variable_name, ...);

int addNumbers(int n, ...);

int main (void)
{
	printf("Variadic functions: \n");

	//Variable number of arguments
	printf("\n 1 + 2 = %d ", addNumbers(2, 1, 2));

	printf("\n 3 + 4 + 5 = %d ", addNumbers(3, 3, 4, 5));

	printf("\n 6 + 7 + 8 + 9 = %d ", addNumbers(4, 6, 7, 8, 9));

	return (0);
}

int addNumbers(int n, ...)
{
	int sum = 0;
	int index;

	//Declaring pointer to the list pointer
	va_list ptr;
	//Initializing argumento to the list pointer
	va_start(ptr, n);

	index = 0 ;
	while (index < n)
	{
		//Acessing current variable and pointing to next one
		sum = sum + va_arg(ptr, int);
		index++;
	
		//Ending argument list traversal
	va_end(ptr);

	return (sum);
	}
}
