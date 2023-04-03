#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * @...: The arguments to print.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    char *str, *sep = "";
    unsigned int i = 0, j;
    char c;
    int n;
    float f;

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;

        switch (format[i])
        {
            case 'c':
                c = va_arg(args, int);
                printf("%s%c", sep, c);
                break;

            case 'i':
                n = va_arg(args, int);
                printf("%s%d", sep, n);
                break;

            case 'f':
                f = va_arg(args, double);
                printf("%s%f", sep, f);
                break;

            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s%s", sep, str);
                break;

            default:
                j = 1;
                break;
        }

        if (j == 0)
            sep = ", ";

        i++;
    }

    printf("\n");

    va_end(args);
}