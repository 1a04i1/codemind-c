#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=n*(n+1)/2;
    }
    printf("%d",s);
}