int _isupper(int c)
{
    int i;
for(i=65; i<91; ++i)
{
if(c==i)
{
return 1;
}
}
return 0;
}
