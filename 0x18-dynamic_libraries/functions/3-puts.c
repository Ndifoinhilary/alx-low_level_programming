#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * the puts.c file
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

