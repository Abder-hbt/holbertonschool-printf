/**
 * _printf - Custom printf function that handles %c, %s, and %.
 * @format: Format string to print.
 *
 * Return: Number of characters printed.
 */

#include <unistd.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
int index;
va_list args;
int count = 0;

va_start(args, format);

for (index = 0; format[index] != '\0'; index++)
{
if (format[index] != '%')
{
write(1, &format[index], 1);
count++;
}
else if (format[index] == '%')
{
if (format[index + 1] == 'c')
{
print_char(args);
index++;
}
else if (format[index + 1] == 's')
{
print_string(args);
index++;
}
else
{
print_percent();
}
}
}

va_end(args);
return (count);
}
