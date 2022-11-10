#include <stdio.h>
#include <stdarg.h>


/*
        The C library macro void va_start(va_list nameVal, last_arg) initializes nameVal variable to be used with the va_arg and va_end macros. The last_arg is the last known fixed argument being passed to the function i.e. the argument before the ellipsis.

        This macro must be called before using va_arg and va_end.

                void va_start(va_list ap, last_arg);

*/
int sum(int, ...);

int main (void)
{
        printf("Sum of 10, 20 and 30 = %d\n", sum(3, 10, 20, 30));
        printf("Sum of 4, 20, 25, 30 = %d\n", sum(4, 4, 20, 25, 30));

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
        va_end(nameVal);
        
        return (val);
}
