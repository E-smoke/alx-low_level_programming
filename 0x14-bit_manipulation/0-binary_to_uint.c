#include "main.h"
/**
 * binary_to_uint - converts number from binary to unsigned int
 * @b: string that contains the binary number
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
int i;
int j;
int len;
int p;
unsigned int sum;
if (b == NULL)
{
return (0);
}
len = 0;
while (b[len] != '\0')
{
if (!((b[len] == '1') || (b[len] == '0') || (b[len] == '\0')))
{
return (0);
}
++len;
}
sum = 0;
for (i = (len - 1); i >= 0; --i)
{
if (b[i] == '1')
{
p = 1;
for (j = 1; j <= (len - 1 -i) ; ++j)
{
p = p * 2;
}
sum += p;
}
}
return (sum);
}
