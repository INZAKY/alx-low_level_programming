#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns paramters sum.
 * @n: The paramters number to the function.
 * @...: Calculate the sum of a paramter variable.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - give me the sum of every parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
