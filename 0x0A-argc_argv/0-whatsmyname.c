#include "main.h"
/**
 * main - entry point
 * @argc: first para
 * @argv: second para
 * Return: returns an integer
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
int i;
int c = 0;
while (argv[0][c] != '\0')
{
++c;
}
for (i = 0; i < c; ++i)
{
_putchar(argv[0][i]);
}
_putchar('\n');
return (0);
}
