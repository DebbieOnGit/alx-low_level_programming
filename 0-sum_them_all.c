#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i, sum = 0;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vlist, int);

	va_end(vlist);

	return (sum);
}

