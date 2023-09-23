#include "main.h"
/**
 * cap_string - caps
 * @str: para
 * Return: return a string
 */
char *cap_string(char *str)
{
int i;
int n = 0;
while (str[n] != '\0')
{
++n; }
if ((str[0] >= 97) && (str[0] <= 122))
{
str[0] = str[0] - 32; }
for (i = 0; i < n; ++i)
{
if ((str[i] == ' ') || (str[i] == '\n') || (str[i] == ','))
{
if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
{
str[i + 1] = str[i + 1] - 32; }}
else if ((str[i] == ';') || (str[i] == '.') || (str[i] == '!'))
{
if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
{
str[i + 1] = str[i + 1] - 32; }}
else if ((str[i] == '?') || (str[i] == '\"') || (str[i] == '('))
{
if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
{
str[i + 1] = str[i + 1] - 32; }}
else if ((str[i] == ')') || (str[i] == '{') || (str[i] == '}'))
{
if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
{
str[i + 1] = str[i + 1] - 32; }}
else if (str[i] == '\t')
{
if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
{
str[i + 1] = str[i + 1] - 32; }}
else
{
}}
return (str); }
