/**
 * print_string - Prints a string to standard output.
 * @args: A va_list containing the string to be printed.
 *
 * Description: This function retrieves a string from the va_list and prints
 * each character using the `write` system call. If the string is NULL, it
 * returns 0. It also counts the number of characters printed.
 *
 * Return: The number of characters printed.
 */

#include <unistd.h>
#include <stdarg.h>


int print_string(va_list args)

{

char *S;
int index = 0;
int count = 0;
S = va_arg(args, char *);


while (S[index] != '\0')
{
write(1, &S[index], 1);
index++;
count++;
}

return (count);
}
