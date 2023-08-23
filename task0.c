#include "main.h"
/**
 * printC - print a char
 * @c: the argument
 *
 * Return: 1 on success
*/
int printC(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}
/**
 * printS - print a string
 * @s: the string to print
 *
 * Return: length
*/
int printS(va_list s)
{
	char *str;
	int a, length;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		a = 0;
		while (a < length)
		{
			_putchar(str[a]);
			a++;
		}
		return (length);
	}
	length = _strlen(str);
	a = 0;
	while (a < length)
	{
		_putchar(str[a]);
		a++;
	}
	return (length);
}
/**
 * printPer - print %
 *
 * Return: 1
*/
int printPer(void)
{
	_putchar(37);
	return (1);
}
/**
 * printD - print digit
 * @di: the digit to print
 *
 * Return: 1 on success
*/
int printD(va_list di)
{
	int n = va_arg(di, int);
	int *arr, i = 0, l = n % 10, m, count = 0, len = 0;

	n = n / 10;
	if (l < 0 || n < 0)
	{
		_putchar(45);
		len++;
		n = -n;
		l = -l;
	}
	m = n;
	while (m > 0)
	{
		count++;
		m /= 10;
	}
	arr = (int *)malloc((count + 1) * sizeof(int));
	if (arr == NULL)
		return (-1);
	arr[0] = l;
	while (i < (count + 1))
	{
		if (i == 0)
		{
			i++;
			continue;
		}
		arr[i] = n % 10;
		n /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(arr[i] + 48);
		i--;
		len++;
	}
	return (len);
}
/**
 * printB - print bianry
 * @b: the int to print
 * Return: length
*/
int printB(va_list b)
{
	unsigned int *arr, n = va_arg(b, unsigned int), e;
	int c = 0, i = 0;

	e = n;
	if (n == 0)
	{
		_putchar(48);
		return (1);
	}
	while (n > 0)
	{
		i++;
		n /= 2;
	}
	arr = (unsigned int *)malloc(sizeof(unsigned int) * i);
	if (arr == NULL)
		return (-1);
	while (c < i)
	{
		arr[c] = e % 2;
		e /= 2;
		c++;
	}
	i = 0;
	c--;
	while (c >= 0)
	{
		_putchar(arr[c] + 48);
		c--;
		i++;
	}
	return (i);
}
