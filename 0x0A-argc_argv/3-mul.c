#include "main.h"
/**
 * main - entry point
 * @argc: 1p
 * @argv: 2p
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
}
else
{
printf("Error\n");
}
return (0);
}
