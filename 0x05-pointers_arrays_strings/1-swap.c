#include "main.h"

/**
 * swap_int - swaps the value of two integer variables.
 * @a:takes first addy
 * @b:takes second addy
 * return - void
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
