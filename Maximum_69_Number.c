#include<stdio.h>
int main()
{
    int n,b,c,d,o;
    scanf("%d",&n);
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    o=n%10;
    n=n/10;
    if(o==6)
    {
        o=9;
    }
    else if(d==6)
    {
        d=9;
    }
    else if(c==6)
    {
        c=9;
    }
    else if(b==6)
    {
        b=9;
    }
    printf("%d%d%d%d" ,o,d,c,b);
}