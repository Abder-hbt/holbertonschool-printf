/**
 * _printf - Custom printf function that handles %c, %s, and %.
 * @format: Format string to print.
 *
 * Return: Number of characters printed, or -1 if an error occurs.
 */

#include <unistd.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
va_list args;
int i, count = 0;

if (!format)
return (-1);

va_start(args, format);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
i++;
if (format[i] == 'c')
count += print_char(args);
else if (format[i] == 's')
count += print_string(args);
else if (format[i] == 'd' || format[i] == 'i')
count += print_number(va_arg(args, int));
else if (format[i] == '%')
count += print_percent();
else
count += handle_invalid_format(format[i]);
}
else
{
write(1, &format[i], 1);
count++;
}
}

va_end(args);
return (count);
}
