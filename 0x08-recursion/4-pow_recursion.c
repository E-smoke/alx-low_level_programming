#include "main.h"
/**
 * _pow_recursion - funct
 * @x: 1p
 * @y: 2p
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if ((x == 0) && (y == 0))
{
return (-1);
}
if ((x != 0) && (y == 0))
{
return (1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, (y - 1)));

}
