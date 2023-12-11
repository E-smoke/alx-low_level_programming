#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>

int main()
{
int i;
char *p;
char **pp;
i = 0;
setenv("P", "p", 1);
setenv("S", "s", 1);
setenv("K", "k", 1);
p = getenv("P");
while (p != NULL)
{
printf("%s\n", p);
p = getenv(NULL);
}
    return 0;
}
