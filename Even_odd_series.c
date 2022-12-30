#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b,x=-1,y=1;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            a=pow(3,x);
            printf("%d ",a);
            x++;
        }
        else
        {
            b=pow(2,y);
            printf("%d ",b);
            y++;
        }
    }
}