#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b=0,r=0,s=0;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        a=a/10;
        b++;
    }
    a=n;
    while(a!=0)
    {
    r=a%10;
    s=s+pow(r,b);
    a=a/10;
    b--;
    }
    if(s==n)
    printf("True");
    else
    printf("False");
}