#include <unistd.h>
#include <stdarg.h>
#include <limits.h>

/**
 * print_number - Prints an integer to standard output.
 * @args: The variable argument list containing the integer to be printed.
 *
 * Description: This function handles printing negative numbers and the special
 * case of INT_MIN (-2147483648). It uses `write` to output each digit of the
 * number to standard output.
 *
 * Return: The number of characters printed.
 */

#include <unistd.h>
#include "main.h"

int print_number(int number)
{
    int count = 0;
    int div = 1;
    char c;

    if (number < 0)
    {
        write(1, "-", 1);
        count++;
        if (number == -2147483648)
        {
            write(1, "2147483648", 10);
            return count + 10;
        }
        number = -number;
    }

    while (number / div >= 10)
        div *= 10;

    while (div > 0)
    {
        c = (number / div) + '0';
        write(1, &c, 1);
        count++;
        number %= div;
        div /= 10;
    }

    return count;
}
int handle_invalid_format(char c)
{
    write(1, "%", 1);
    write(1, &c, 1);
    return 2;
}
