#include "main.h"

/**
 * _find - find format
 * @format: the format
 * Return: NULL or function
*/
int (*_find(const char *format))(va_list)
{
	match_f match[] = {
		{"c", printC}, {"s", printS}, {"%", printPer}, {"d", printD},
		{"i", printD}, {"b", printB}, {"u", printU}, {"o", printO},
		{"x", printMh}, {"X", printMH},
		{NULL, NULL}
	};
	int i = 0;

	while (match[i].ver != NULL)
	{
		if (match[i].ver[0] == *format)
		{
			return (match[i].func);
		}
		i++;
	}
	return (NULL);
}
/**
 * _printf - simular of printf function
 * @format: the format of the printed text
 *
 * Return: length
*/
int _printf(const char *format, ...)
{
	va_list a;
	int len = 0, b = 0;
	int (*na)(va_list);

	if (format == NULL)
		return (-1);
	va_start(a, format);
	while (format[b] != '\0')
	{
		if (!specifier(format[b]))
		{
			_putchar(format[b]);
			len++;
			b++;
			continue;
		}
		else
		{
			if (format[b + 1] == '\0')
			{
				return (-1);
				va_end(a);
			}
			na = _find(&format[b + 1]);
			if (na == NULL)
			{
				_putchar(format[b]);
				len++;
				b++;
				continue;
			}
			len += na(a);
			b += 2;
		}
	}
	va_end(a);
	return (len);
}
