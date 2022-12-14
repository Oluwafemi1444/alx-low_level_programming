#include "main.h"

/**
 * main - A function that prints the alphabet in lowercase
 *follow by a new line
 * Return: Always 0
 */

void print_alphabet(void)
{
char atoz = 'a';
while (atoz <= 'z')
{
_putchar(atoz);
atoz++;
}
_putchar('\n');
}
