#include "main.h"
/**
 * strtow - funct
 * @str: string
 * Return: pointer
 */
char **strtow(char *str)
{
int i, j, c, t, k, w;
char **ptr;
t = j = c = w = 0;
k = -1;
if (str == NULL)
{
return (NULL); }
if (str[0] == '\0')
{
return (NULL); }
while (str[c] != '\0')
{
++c; }
for (i = 0; i <= c; ++i)
{
if ((str[i] == ' ') || (str[i] == '\0'))
{
++w; }}
ptr = (char **)malloc(w * sizeof(char *));
if (ptr == NULL)
{
return (NULL); }
if (strtow1(ptr, str, w) == NULL)
{
return (NULL);
}
for (i = 0; i < w; ++i)
{
j = 0;
while (!((str[t] == ' ') || (str[t] == '\0')))
{
ptr[i][j] = str[t];
++j;
++t; }
ptr[i][j] = '\0';
++t; }
return (ptr); }
/**
 * strtow1 - funct
 * @ptr: 1p
 * @str: 2p
 * @w: 3p
 * Return: a pointer
 */
char **strtow1(char **ptr, char *str, int w)
{
int i, j, k;
j = 0;
k = -1;
for (i = 0; i < w; ++i)
{
while (((str[j] == ' ') || (str[j] == '\0')))
{
++j; }
ptr[i] = (char *)malloc((j - k) *sizeof(char));
if (ptr[i] == NULL)
{
for (i = i - 1; i >= 0; --i)
{
free(ptr[i]); }
free(ptr);
return (NULL); }
k = j;
++j; }
return (ptr);
}
