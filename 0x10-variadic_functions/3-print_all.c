#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 *
 * @format: a list of types of arguments passed
 * to the function
*/

void print_all(const char * const format, ...)
{
    int i = 0;
    char *ptf, *seperator = "";

    va_list(p_all);
    va_start(p_all, format);

    if (format)
    {
        while (format[i])
        {
            switch (format[i])
            {
            case 'c':
                printf("%s%c", seperator, va_arg(p_all, int));
                break;
            case 'i':
                printf("%s%d", seperator, va_arg(p_all, int));
                break;
            case 'f':
                printf("%s%f", seperator, va_arg(p_all, double));
                break;
            case 's':
                ptf = va_arg(p_all, char *);
                if (ptf == NULL)
                {
                    ptf = "(nil)";
                }
                printf("%s%s", seperator, ptf);
                break;
            default:
                i++;
                continue;
            }

            seperator = ", ";
            i++;
        }
    }
    printf("\n");
    va_end(p_all);
}
