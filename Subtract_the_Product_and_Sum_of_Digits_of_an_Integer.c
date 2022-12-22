#include<stdio.h>
int main()
{
    int n,rem,p=1,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        s=s+rem;
        p=p*rem;
    }
    printf("%d",(p-s));
}