#include "0-print_name.c"
#include <stdio.h>
void a(char *s)
{
printf("%s", s);
}

int main()
{
char *s = "ama";
print_name(s, a);
}
