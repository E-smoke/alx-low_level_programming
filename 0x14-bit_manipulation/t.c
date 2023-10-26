#include "main.h"
#include "0-binary_to_uint.c"
#include "1-print_binary.c"
#include "2-get_bit.c"
#include "3-set_bit.c"
#include "4-clear_bit.c"
int main(void)
{
 unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
