#include "main.h"
/**
 * main - entry point
 * @argc: 1p
 * @argv: 2p
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int cent;
int rem;
int d;
int num = 0;
cent = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
d = cent / 25;
if (d > 0)
{
num = d;
rem = cent - (d * 25);
}
d = rem / 10;
if (d > 0)
{
num = num + d;
rem = rem - (d * 10);
}
d = rem / 5;
if (d > 0)
{
num = num + d;
rem = rem - (d * 5);
}
d = rem / 2;
if (d > 0)
{
num = num + d;
rem = rem - (d * 2);
}
if (rem > 0)
{
num = num + rem;
}
printf("%d\n", num);
return (0);
}
