#include "main.h"
#include "0-read_textfile.c"
#include "1-create_file.c"
#include "2-append_text_to_file.c"
int main(void)
{
printf("%d", append_text_to_file("pa.txt", "kofi"));
return (0);
}
