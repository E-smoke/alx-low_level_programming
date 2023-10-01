#include "main.h"
/**
 * main - entry point
 * @argc: 1p
 * @argv: 2p
 * Return: 0 and 1 if argument contains non integer string
 */
int main(int argc, char *argv[])
{
int i;
int mult = 1;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; ++i)
{
if (atoi(argv[i]) == 0)
{
return (1);
}
}
for (i = 1; i < argc; ++i)
{
mult = (mult *atoi(argv[i]));
}
printf("%d\n", mult);
return (0);
}
