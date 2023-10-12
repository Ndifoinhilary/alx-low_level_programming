#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
 char c;
 c = '0';
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar(_isdigit(c) + '0');
_putchar('\n');
c = '9';
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar(_isdigit(c) + '0');
_putchar('\n');
c = 'A';
_putchar(c);
_putchar(':');
_putchar(' ');
_putchar(_isdigit(c) + '0');
_putchar('\n');
return (0);
}

