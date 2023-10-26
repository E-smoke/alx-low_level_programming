#include "main.h"
#include "0-binary_to_uint.c"
#include "1-print_binary.c"
#include "2-get_bit.c"

int main(void)
{
 int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
