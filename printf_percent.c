/**
 * print_percent - Prints a percent symbol to standard output.
 *
 * Description: This function prints the '%' character using the `write`
 * system call and returns 1 to indicate that one character has been printed.
 *
 * Return: 1 (the number of characters printed).
 */


#include <unistd.h>

int print_percent(void)

{

return (write(1, "%", 1));

}
