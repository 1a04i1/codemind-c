#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],i,s,a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(ar[i]==s)
        {
            a=1;
            break;
        }
    }
    if(a==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}