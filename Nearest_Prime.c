#include<stdio.h>
#include<math.h>
int p(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int n,i,a,b,c,d;
        scanf("%d",&n);
        for(i=n;;i--)
        {
            if(p(i))
            {
                a=i;
                break;
            }
        }
        for(i=n;;i++)
        {
            if(p(i))
            {
                b=i;
                break;
            }
        }
        if(n-a>b-n)
        {
            printf("%d
",b);
        }
        else
        {
            printf("%d
",a);
        }
    }
}