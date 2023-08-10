#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer it is compiled and run on
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

    printf("Size of char: %zu byte(s)\n",(unsigned long)sizeof(a));
    printf("Size of short: %zu byte(s)\n",(unsigned long)sizeof(b));
    printf("Size of int: %zu byte(s)\n",(unsigned long)sizeof(c));
    printf("Size of long: %zu byte(s)\n",(unsigned long)sizeof(d));
    printf("Size of long long: %zu byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
