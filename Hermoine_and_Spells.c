#include<stdio.h>
int main()
{
    int a,b,c,r;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b<c)
    {
        r=a+c;
        printf("%d",r);
    }
    else if(b>a && a<c)
    {
        r=b+c;
        printf("%d",r);
    }
    else if(c<=a && b>=c)
    {
        r=a+b;
        printf("%d",r);
    }
}