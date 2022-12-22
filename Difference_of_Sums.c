#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0,p=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    p+=i;
    s+=(i*i);
    }
    a=p*p;
    printf("%d",abs(s-a));
}