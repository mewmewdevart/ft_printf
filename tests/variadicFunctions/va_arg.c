#include <stdio.h>
#include <stdarg.h>

/*
The C library macro type va_arg(va_list ap, type) retrieves the next argument in the parameter list of the function with type. This does not determine whether the retrieved argument is the last argument passed to the function.

        type va_arg(va_list nameVal, type)


        nameVal − This is the object of type va_list with information about the additional arguments and their retrieval state. This object should be initialized by an initial call to va_start before the first call to va_arg.

        type − This is a type name. This type name is used as the type of the expression, this macro expands to.

        Return Value
                This macro returns the next additional argument as an expression of type type.
*/

int sum(int, ...);

int main (void)
{
        printf("Sum of 15 and 56 = %d\n", sum(2, 15, 56));
        return (0);
}

int sum(int num_args, ...)
{
        int val;
        int index;
        va_list nameVal;

        val = 0;
        index = 0;
        va_start(nameVal, num_args);
        while(index < num_args)
        {
                val += va_arg(nameVal, int);
                index++;
        }

        return (val);
}
