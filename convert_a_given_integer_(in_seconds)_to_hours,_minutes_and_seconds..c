#include<stdio.h>
int main()
{
    int s,m,h,r;
    scanf("%d",&s);
    h=s/3600;
    r=s%3600;
    m=r/60;
    s=r%60;
    printf("H:M:S-%d:%d:%d",h,m,s);
}