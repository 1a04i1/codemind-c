#include<stdio.h>
int main()
{
    int a,d,c,b;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==b||a==c||a==d)
    {
        printf("YES");
    }
    else if(a==b+c||a==c+d||a==d+b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}