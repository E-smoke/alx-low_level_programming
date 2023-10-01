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
int add = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; ++i)
{
if ((atoi(argv[i]) == 0) && (argv[i] != 48))
{
printf("Error\n");
return (1);
}
}
for (i = 1; i < argc; ++i)
{
add = (add + atoi(argv[i]));
}
printf("%d\n", add);
return (0);
}
