#include "main.h"
/**
 * create_file - creates file
 * @filename: file name
 * @text_content: content
 * Return: returns 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
int i;
int fd;
int ind;
if (filename == NULL || text_content == NULL)
{
return (-1); }
fd = open(filename, O_RDONLY);
if (fd == -1)
{
fd = creat(filename, 600);
close(fd);
if (text_content != NULL)
{
fd = open(filename, O_WRONLY);
i = 0;
while (text_content[i] != '\0')
{
++i; }
ind = write(fd, text_content, i);
close(fd);
return (1); }}
else
{
close(fd);
fd = open(filename, O_WRONLY | O_TRUNC);
if (fd == -1)
{
return (-1); }
else
{
if (text_content != NULL)
{
i = 0;
while (text_content[i] != '\0')
{
++i; }
ind = write(fd, text_content, i);
close(fd); }}}
return (1); }

