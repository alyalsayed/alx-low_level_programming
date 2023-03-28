#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void my_printf(char *format, ...)
{
    va_list args;
    va_start(args, format);
    char c;
    int i;
    char *s;
    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c':
                    c = va_arg(args, int);
                    putchar(c);
                    break;
                case 'd':
                    i = va_arg(args, int);
                    printf("%d", i);
                    break;
                case 'o':
                    i = va_arg(args, int);
                    printf("%o", i);
                    break;
                case 'x':
                    i = va_arg(args, int);
                    printf("%x", i);
                    break;
                case 'X':
                    i = va_arg(args, int);
                    printf("%X", i);
                    break;
                case 's':
                    s = va_arg(args, char *);
                    while (*s != '\0') {
                        putchar(*s);
                        s++;
                    }
                    break;
                case '%':
                    putchar('%');
                    break;
                case 'r':
                    s = va_arg(args, char *);
                    int len = strlen(s);
                    for (int j = len - 1; j >= 0; j--) {
                        putchar(s[j]);
                    }
                    break;
                case 'R':
                    s = va_arg(args, char *);
                    while (*s != '\0') {
                        if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M')) {
                            putchar(*s + 13);
                        } else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z')) {
                            putchar(*s - 13);
                        } else {
                            putchar(*s);
                        }
                        s++;
                    }
                    break;
                default:
                    printf("Invalid format specifier: %c", *format);
                    break;
            }
        } else {
            putchar(*format);
        }
        format++;
    }
    va_end(args);
}