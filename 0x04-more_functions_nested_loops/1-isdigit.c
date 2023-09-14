int _isdigit(int c)
{
c=(c-'0');
int i;
for(i=0; i<10; ++i)
{
if(c==i)
{
return 1;
}
}
return 0;
}
