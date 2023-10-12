#include "3-calc.h"
/**
 * get_op_func - funct
 * @s: 1p
 * Return: funct ptr
 */
int (*get_op_func(char *s))(int, int)
{
int (*ptr)(int, int);
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
i = 0;
while ((ops[i].op) != NULL)
{
if (s[0] == (ops[i].op)[0])
{
ptr = ops[i].f;
return (ptr);
}
++i;
}
return (NULL);

}
