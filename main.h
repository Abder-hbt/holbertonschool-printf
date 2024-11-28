#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function that prints formatted output.
 * @format: The format string containing the text to be printed
 *          and format specifiers.
 * 
 * Return: The number of characters printed (excluding the null byte
 *         used to end output). Returns -1 if an error occurs.
 */
int _printf(const char *format, ...);

/**
 * print_char - Handles the character format specifier.
 * @args: The variable arguments list containing the character.
 *
 * Return: The number of characters printed (always 1 for a character).
 */
int print_char(va_list args);

/**
 * print_string - Handles the string format specifier.
 * @args: The variable arguments list containing the string.
 *
 * Return: The number of characters printed (excluding null byte).
 */
int print_string(va_list args);

/**
 * print_percent - Handles the percent format specifier.
 *
 * Return: The number of characters printed (always 1 for the percent sign).
 */
int print_percent(void);

/**
 * print_number - Handles the integer and decimal format specifiers.
 * @args: The variable arguments list containing the number.
 *
 * Return: The number of characters printed.
 */
int print_number(int number);

/**
 * handle_invalid_format - Handles invalid format specifiers.
 * @c: The invalid format specifier character.
 *
 * Return: The number of characters printed.
 */
int handle_invalid_format(char c);

#endif /* MAIN_H */
