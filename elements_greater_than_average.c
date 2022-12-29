#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],s=0,avg,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(avg<=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}