#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b,x=0,y=0;
    scanf("%d",&n);
    printf("0 ");
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        {
            a=pow(2,x);
            printf("%d ",a);
            x++;
        }
        else
        {
            b=pow(3,y);
            printf("%d ",b);
            y++;
        }
    }
}