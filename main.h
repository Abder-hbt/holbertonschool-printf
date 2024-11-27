#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * _printf - Custom printf function that prints formatted output.
 *
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

#endif /* MAIN_H */
