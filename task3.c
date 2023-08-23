#include "main.h"
/**
 * printU - print unsigned int
 * @u: the var
 * Return: length
*/
int printU(va_list u)
{
	unsigned int n = va_arg(u, int);
	unsigned int *arr, l = n % 10, m;
	int i = 0, count = 0, len = 0;

	n = n / 10;
	m = n;
	while (m > 0)
	{
		count++;
		m /= 10;
	}
	arr = (unsigned int *)malloc((count + 1) * sizeof(int));
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
	free(arr);
	return (len);
}
/**
 * printO - print octal number
 * @o: the number
 * Return: length
*/
int printO(va_list o)
{
	unsigned int n = va_arg(o, int), m;
	int i = 0, len = 0, count = 0, *arr;

	m = n;
	if (n < 8)
	{
		_putchar(n + 48);
		len++;
		return (len);
	}
	while (n / 8 != 0)
	{
		count++;
		n /= 8;
	}
	count++;
	arr = (int *)malloc(sizeof(int) * count);
	if (arr == NULL)
		return (-1);
	while (i < count)
	{
		arr[i] = (m % 8);
		m /= 8;
		i++;
	}
	i = count - 1;
	while (i >= 0)
	{
		_putchar(arr[i] + 48);
		i--;
		len++;
	}
	return (len);
}
/**
 * printMh - print hexa with lowercase
 * @h: the number
 * Return: length
*/
int printMh(va_list h)
{
	unsigned int n = va_arg(h, int), m;
	int i = 0, len = 0, count = 0, *arr;

	m = n;
	while (n / 16 != 0)
	{
		count++;
		n /= 16;
	}
	count++;
	arr = (int *)malloc(sizeof(int) * count);
	if (arr == NULL)
		return (-1);
	while (i < count)
	{
		arr[i] = m % 16;
		m /= 16;
		i++;
		len++;
	}
		i--;
	while (i >= 0)
	{
		if (arr[i] > 9)
			arr[i] = 39 + arr[i];
		_putchar(arr[i] + 48);
		i--;
		len++;
	}
	return (len);
}
/**
 * printMH - print hexa with lowercase
 * @H: the number
 * Return: length
*/
int printMH(va_list H)
{
	unsigned int n = va_arg(H, int), m;
	int i = 0, len = 0, count = 0, *arr;

	m = n;
	while (n / 16 != 0)
	{
		count++;
		n /= 16;
	}
	count++;
	arr = (int *)malloc(sizeof(int) * count);
	if (arr == NULL)
		return (-1);
	while (i < count)
	{
		arr[i] = m % 16;
		m /= 16;
		i++;
		len++;
	}
		i--;
	while (i >= 0)
	{
		if (arr[i] > 9)
			arr[i] = 7 + arr[i];
		_putchar(arr[i] + 48);
		i--;
		len++;
	}
	return (len);
}

