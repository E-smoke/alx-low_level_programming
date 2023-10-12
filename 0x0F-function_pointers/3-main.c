#include "3-calc.h"
#include "3-op_functions.c"
#include "3-get_op_func.c"
/**
 * main - entry point
 * @argc: 1p
 * @argv: 2p
 * Return: int
 */
int main(int argc, char *argv[])
{
int a;
int b;
if (argc != 4)
{
exit(98);
}
if (get_op_func(argv[2]) == NULL)
{
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
if ((b == 0) && ((argv[2][0] == '/') || (argv[2][0] == '%')))
{
exit(98);
}
printf("%d\n", get_op_func(argv[2])(a, b));
return (0);
}
