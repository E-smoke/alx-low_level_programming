#include "main.h"
#include "0-binary_to_uint.c"
#include "1-print_binary.c"

int main(void)
{
print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
