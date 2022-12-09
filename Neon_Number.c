#include<stdio.h>
int main()
{
    int n,r,s=0,p;
    scanf("%d",&n);
    p=n*n;
    while(p!=0)
    {
        r=p%10;
        p=p/10;
        s=s+r;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}