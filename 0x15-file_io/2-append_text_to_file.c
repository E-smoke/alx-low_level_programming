#include "main.h"
/**
 * append_text_to_file - appends
 * @filename: the name of the file
 * @text_content: the content
 * Return: an int
 */
int append_text_to_file(const char *filename, char *text_content)
{
int len;
int ind;
int fd;
if (filename == NULL)
{
return (-1); }
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1); }
if (text_content != NULL)
{
len = 0;
while (text_content[len] != '\0')
{
++len; }
ind = write(fd, text_content, len);
if (ind != len)
{
close(fd);
return (-1); }
else
{
close(fd);
return (1); }}
close(fd);
return (1); }
