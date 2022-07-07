#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printchar - prints char
 * @ap: list of arguments
 *
 * Return: void
 */

void printchar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * printint - prints integer
 * @ap: list of arguments
 *
 * Return: void
 */

void printint(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * printflt - prints float values
 * @ap: list of arguments
 *
 * Return: void
 */

void printflt(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * printstr - prints string
 * @ap: list of arguments
 *
 * Return: void
 */

void printstr(va_list ap)
{
	char *s = va_arg(ap, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;
	char s1 = "", s2 = ", ";

	op_t ops[] = {
		{'c', printchar},
		{'i', printint},
		{'f', printflt},
		{'s', printstr},
		{'\0', NULL}
	};

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (ops[j].c != '\0')
		{
			if (ops[j].c == format[i])
			{
				printf("%s", s1);
				ops[j].f(ap);
				s1 = s2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
