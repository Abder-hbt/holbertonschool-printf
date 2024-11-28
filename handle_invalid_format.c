#include <unistd.h>
/**
 * handle_invalid_format - Handles invalid format specifiers.
 * @c: The invalid character to be printed.
 *
 * Description: This function prints a '%' followed by the invalid character
 * to standard output to indicate an unsupported format.
 *
 * Return: 2 (the number of characters printed).
 */

int handle_invalid_format(char c)
{
write(1, "%", 1);
write(1, &c, 1);
return (2);
}
