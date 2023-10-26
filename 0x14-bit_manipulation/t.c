#include "main.h"
#include "0-binary_to_uint.c"
#include "1-print_binary.c"
#include "2-get_bit.c"
#include "3-set_bit.c"
#include "4-clear_bit.c"
#include "5-flip_bits.c"

int main(void)
{
 unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
