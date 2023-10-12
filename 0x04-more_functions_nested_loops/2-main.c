#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int result;
result = mul(5, 10);
_putchar(result + '0');
_putchar('\n');
result = mul(0, 42);
_putchar(result + '0');
_putchar('\n');
result = mul(-3, 8);
_putchar(result + '0');
_putchar('\n');
return (0);
}
