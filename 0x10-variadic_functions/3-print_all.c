#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int index = 0;
	int sep_flag = 0;
	char *str;
	va_list ap;

	va_start(ap, format);
	while (format != NULL && format[index] != '\0')
	{
		switch (format[index])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			sep_flag = 0;
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			sep_flag = 0;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			sep_flag = 0;
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			sep_flag = 0;
			break;
		default:
			sep_flag = 1;
			break;
		}
		if (format[index + 1] != '\0' && sep_flag == 0)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(ap);
}
