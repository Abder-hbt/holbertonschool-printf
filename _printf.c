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

if (format == NULL)
{
    return (-1);
}

if (format[0] == '\0')
{
return (0);
}

for (index = 0; format[index] != '\0'; index++)
{
if (format[index] != '%')
{
write(1, &format[index], 1);
count++;
}
else
{
if (format[index + 1] == '%')
{
    write(1, "%", 1);
    count++;
    index++;
}
else if (format[index + 1] == 'c')
{
print_char(args);
index++;
}
else if (format[index + 1] == 's')
{
print_string(args);
index++;
}
else if(format[index + 1] == 'd' || format[index + 1] == 'i')
{
print_number(va_arg(args, int));
index++;
}

else if (!(format[index + 1] == 'c' || format[index + 1] == 's' || format[index + 1] == 'd' || format[index + 1] == 'i'))
{
write(1, &format[index], 1);
count++;
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
