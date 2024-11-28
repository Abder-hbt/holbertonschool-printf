/**
 * print_number - Prints an integer to standard output.
 * @number: The integer to be printed.
 *
 * Description: This function handles printing negative numbers and the special
 * case of INT_MIN (-2147483648). It uses `write` to output each digit of the
 * number to standard output.
 */
#include <unistd.h>

int print_number(int number)
{
int div = 1;
int value;
char C;
int count = 0;
if (number < 0)
{
write(1, "-", 1);
count++;
if (number == -2147483648)
{
write(1, "2147483648", 10);
return (count + 10);
}
number = -number;
}
if (number == 0)
{
write(1, "0", 1);
count++;
}
else
{
while (number / div >= 10)
{
div *= 10;
}
while (div > 0)
{
value = number / div;
C = value + '0';
write(1, &C, 1);
count++;
number %= div;
div /= 10;
}
}
return (count);
}
