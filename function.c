#include "main.h"

/************************* PRINT CHAR *************************/

/**
 * print_char - Prints a char
 * @args_list: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Evaluates active flags
 * @width: Width
 * @precision: Sprecifies precision
 * @size: Specifies size
 * Return: Number of chars printed
 */
int print_char(va_list args_list, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(args_list, int);


int _printf(const char *format, ...)

 {
	int char_printed = 0;
	va_list args_list;

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
/************************* PRINT A STRING *************************/
/**
 * print_string - Prints a string
 * @args_list: List of arguments
 * @buffer:  Buffer array to handle print
 * @flags: Evaluates active flags
 * @width: get width.
 * @precision: Specifies precision
 * @size: Specifies size
 * Return: Number of chars printed
 */
int print_string(va_list args_list, char buffer[],
	int flags, int width, int precision, int size)
{
	int char_printed = 0, i;
	char *str = va_arg(args_list, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "      ";
	}

	while (str[char_printed] != '\0')
		length++;

	if (precision >= 0 && precision < char_printed)
		char_printed = precision;

	if (width > char_printed)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], char_printed);
			for (i = width - char_printed; i > 0; i--)
				write(1, " ", 1);
			return (width);
		}
		else
		{
			for (i = width - char_printed; i > 0; i--)
				write(1, " ", 1);
			write(1, &str[0], char_printed);
			return (width);
		}
	}
	return (write(1, str, char_printed));
}

/************************* PRINT PERCENT SIGN *************************/
/**
 * print_percent - Prints a percent sign
 * @args_list: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Evaluates active flags
 * @width: get width.
 * @precision: Specifies precision
 * @size: Specifies size
 * Return: Number of chars printed
 */
int print_percent(va_list args_list, char buffer[],
		int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
}
