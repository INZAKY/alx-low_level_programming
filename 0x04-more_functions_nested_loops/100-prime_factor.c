#include <stdio.h>
#include <math.h>

/**
 * is_prime - checks if a number is prime
 * @num: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime(unsigned long num)
{
    if (num <= 1)
        return 0;
    if (num <= 3)
        return 1;
    if (num % 2 == 0 || num % 3 == 0)
        return 0;

    for (unsigned long i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }
    return 1;
}

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @num: number to find the largest prime factor of
 * Return: largest prime factor
 */
unsigned long largest_prime_factor(unsigned long num)
{
    unsigned long max_prime = 1;

    while (num % 2 == 0)
    {
        max_prime = 2;
        num /= 2;
    }

    for (unsigned long i = 3; i <= sqrt(num); i += 2)
    {
        while (num % i == 0)
        {
            max_prime = i;
            num /= i;
        }
    }

    if (num > 2 && is_prime(num))
        max_prime = num;

    return max_prime;
}

int main(void)
{
    unsigned long number = 612852475143;
    unsigned long result = largest_prime_factor(number);

    printf("%lu\n", result);

    return 0;
}
