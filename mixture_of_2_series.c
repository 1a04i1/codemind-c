#include<stdio.h>
//#include<math.h>
int main()
{
    int i,n,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",x);
            x+=2;
        }
        else
        {
            printf("%d ",y);
            y=y+1;
        }
    }
}