#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu\n", sizeof(a));
printf("size of a int: %lu\n", sizeof(b));
printf("size of a long int: %lu\n", sizeof(c));
printf("size of a long long int: %lu\n", sizeof(d));
printf("size of a float: %lu\n", sizeof(f));
return (0);
}

