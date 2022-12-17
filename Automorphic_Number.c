#include<stdio.h>
int main()
{
    int n,t,sq,c=1;
   scanf("%d",&n);
    t=n;
    sq=n*n;
    while(n!=0)
    {
        c=c*10;
        n=n/10;
    }
    if(sq%c==t)
    {
    printf("Automorphic Number");
    }
        else
        {
            printf("Not an Automorphic Number");
        }
}