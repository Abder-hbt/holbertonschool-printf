/**
 * print_percent - Prints a percent symbol to standard output.
 *
 * Description: This function prints the '%' character using the `write`
 * system call and returns 1 to indicate that one character has been printed.
 *
 * Return: 1 (the number of characters printed).
 */

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"

int print_percent(void)

{

write(1, "%", 1);
return (1);

}