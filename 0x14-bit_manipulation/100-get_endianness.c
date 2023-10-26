#include "main.h"
/**
 * get_endianness - check endianness
 * Return: an int
 */
int get_endianness(void)
{
unsigned int num = 1;
unsigned char *byte = (unsigned char *)&num;
return ((int)(*byte));
}
