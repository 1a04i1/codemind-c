#include<stdio.h>
int main()
{
    int n,i,gcd;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    gcd=a[0];
    int j=1;
    while(j<n)
    {
       if(a[j]%gcd==0)
       {
           j++;
       }
       else
       {
           gcd=a[j]%gcd;
           i++;
       }
    }
    printf("%d ",gcd);
    return 0;
}