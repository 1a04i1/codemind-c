#include<stdio.h>
int main()
{
    int r,n,s=0,max=-9999;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(r>max)
        {
            max=r;
        }
    }
    printf("%d",max);
}