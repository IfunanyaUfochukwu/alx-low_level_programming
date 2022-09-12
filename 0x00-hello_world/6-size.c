#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", (sizeof(char)));
printf("Size of a int: %i byte(s)\n", (sizeof(int)));
printf("Size of a long: %i byte(s)\n", (sizeof(long)));
printf("Size of a long long: %i byte(s)\n", (sizeof(double)));
printf("Size of a float: %i byte(s)\n", (sizeof(float)));
return (0);
}
