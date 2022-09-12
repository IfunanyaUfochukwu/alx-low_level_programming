#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int a;
long b;
double c;
char d;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned char)sizeof(d));
printf("Size of a int: %lu byte(s)\n", (unsigned int)sizeof(a));
printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long: %lu byte(s)\n", (unsigned double)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned float)sizeof(f));
return (0);
}
