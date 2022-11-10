#include <stdio.h>
#include <stdarg.h>

int mul(int, ...);

int main (void)
{
        printf("15 * 12 = %d\n", mul(2, 15, 12));
        return (0);
}

int mul(int num_args, ...)
{
        int val;
        int index;
        va_list nameVal;

        val = 1;
        index = 0;

        va_start(nameVal, num_args);
        while(index < num_args)
        {
                val *= va_arg(nameVal, int);
                index++;
        }
        va_end(nameVal);

        return(val);
}


