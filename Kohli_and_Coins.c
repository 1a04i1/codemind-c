#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    if(a%5!=0)
    {
        printf("%d",-1);
    }
    else
    {
        c=a/10;
        d=(a%10)/5;
        printf("%d",c+d);
    }
    
}