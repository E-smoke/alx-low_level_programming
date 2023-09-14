int _isdigit(int c)
{
int i;
c=(c-'0');
for(i=0; i<10; ++i)
{
if(c==i)
{
return 1;
}
}
return 0;
}
