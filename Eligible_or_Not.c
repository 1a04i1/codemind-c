#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
    int x,y,a;
    scanf("%d%d%d",&x,&y,&a);
    if(a>=x && a<y)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
    }
}