#include<stdio.h>
int main()
{
    int a,d,c,b;
    scanf("%d%d%d",&a,&b,&c);
    c=21-(a+b);
    if(c>10)
    {
        printf("%d",-1);
    }
    else 
    {
        printf("%d",c);
    }
}