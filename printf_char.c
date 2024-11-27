/**
 * print_char - Prints a character to standard output.
 * @args: A va_list containing the argument to be printed.
 *
 * Description: This function retrieves a character from the va_list and
 * prints it using the `write` system call. It returns 1 to indicate that
 * one character has been printed.
 *
 * Return: 1 (the number of characters printed).
 */


#include <unistd.h>
#include <stdarg.h>


int print_char(va_list args)
{

char C;

C = va_arg(args, int);
return write(1, &C, 1);

}
