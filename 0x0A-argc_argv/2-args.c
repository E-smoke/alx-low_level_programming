#include "main.h"
/**
 * main - entry point
 * @argc: 1p
 * @argv: 2p
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; ++i)
{
printf("%s\n", argv[i]);
}
return (0);
}
