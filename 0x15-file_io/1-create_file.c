#include "main.h"
/**
 * create_file - creates file
 * @filename: file name
 * @text_content: content
 * Return: returns 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
int fd, len, ind;
if (filename == NULL || text_content == NULL)
{
return (-1); }
len = 0;
while (text_content[len] != '\0')
{
len++; }
fd = open(filename, O_RDONLY);
if (fd == -1)
{
fd = creat(filename, 600);
if (fd == -1)
{
return (-1); }
close(fd);
fd = open(filename, O_WRONLY);
if (fd == -1)
{
printf("%d", fd);
return (-1); }
ind = write(fd, text_content, len);
if (ind == len)
{
close(fd);
return (1); }
else
{
close(fd);
return (-1); }}
else
{
close(fd);
fd = open(filename, O_WRONLY | O_TRUNC);
if (fd == -1)
{
return (-1); }
ind = write(fd, text_content, len); }
if (ind != len)
{
close(fd);
return (-1); }
close(fd);
return (1); }
