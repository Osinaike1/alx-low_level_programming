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
printf("size of a char: %d\n", (unsigned long)sizeof(a));
printf("size of a int: %d\n", (unsigned long)sizeof(b));
printf("size of a long int: %d\n", (unsigned long)sizeof(c));
printf("size of a long long int: %d\n", (unsigned long)sizeof(d));
printf("size of a float: %d\n", (unsigned long)sizeof(f));
return (0);
}

