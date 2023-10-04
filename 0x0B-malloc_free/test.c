#include "101-strtow.c"
int main()
{
char **p = strtow("ama is going to school");
printf("%s", p[0]);
printf("%s", p[1]);
printf("%s", p[2]);
printf("%s", p[3]);
printf("%s", p[4]);
free(p);
return (0);
}
