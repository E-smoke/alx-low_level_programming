#include "main.h"
/**
 * read_textfile - prints contents from a txt file to stdout
 * @filename: the file name
 * @letters: is the number of letters it should read and print
 * Return: the number of chars it read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
unsigned long int i;
int fd;
int ind;
char buf;
if (filename == NULL)
{
return (0); }
if (letters == 0)
{
return (0); }
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0); }
i = 1;
while (i <= letters)
{
ind = read(fd, &buf, 1);
if (ind < 0)
{
close(fd);
return (0); }
if (ind == 0)
{
close(fd);
return (i - 1); }
ind = write(1, &buf, 1);
if (ind < 0)
{
close(fd);
return (0); }
if (ind == 0)
{
close(fd);
return (i - 1); }
++i; }
close(fd);
return (letters); }
