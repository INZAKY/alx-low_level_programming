#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns  sum of  numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: sum a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -  difference of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return:  difference between  a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the product of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: The product between a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: The quotient betwen a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the division of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
