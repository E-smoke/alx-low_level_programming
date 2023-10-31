#include "main.h"
/**
 * main - funct
 * @argc: 1p
 * @argv: 2p
 * Return: int
 */
int main(int argc, char *argv[])
{
char buf[1024];
int fdf, i, ind, ind1, fdt, chek;
check(argc);
fdf = openff(argv);
fdt = openft(argv);
chek = 1;
while (ind != 0)
{
for (i = 0; i < 1024; ++i)
{
buf[i] = '\0'; }
chek = read(fdf, buf, 1024);
if (chek == -1)
{
ind = close(fdf);
ind1 = close(fdt);
if (ind == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fdf);
exit(100); }
if (ind1 == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fdt);
exit(100); }
dprintf(2, "Error: Can't read from file %s\n", argv[2]);
exit(98); }
ind = dprintf(fdt, "%s", buf);
if (ind < 0)
{
ind = close(fdf);
ind1 = close(fdt);
if (ind == 1)
{
dprintf(2, "Error: Can't close fd %d\n", fdf);
exit(100); }
if (ind1 == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fdt);
exit(100); }
dprintf(2, "Error: Can't write to %s\n", argv[3]);
exit(99); }}
return (0); }
/**
 * check - check
 * @argc: cnt
 */
void check(int argc)
{
if (argc != 4)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
}
/**
 * openff - funct
 * @argv: p
 * Return: int
 */
int openff(char **argv)
{
int fd;
fd = open(argv[2], O_RDONLY);
if (fd == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[2]);
exit(98);
}
return (fd);
}
/**
 * openft - funct
 * @argv: p
 * Return: int
 */
int openft(char **argv)
{
int fd;
fd = open(argv[3], O_WRONLY | O_CREAT | O_TRUNC, 664);
if (fd == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[3]);
exit(99);
}
return (fd);
}
