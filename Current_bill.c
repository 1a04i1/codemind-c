#include<stdio.h>
int main()
{
    int u;
    float b,t,c;
    scanf("%d",&u);
    if(u<200)
    {
        b=u*1.20;
    }
    else if(u>=200&&u<400)
    {
        b=u*1.50;
    }
    else if(u>=400&&u<600)
    {
        b=u*1.80;
    }
    else 
    {
        b=u*2.00;
    }
    if(b>=400)
    {
        c=b*0.15;
        t=b+c;
        printf("%.2f",t);
    }
    else
    {
        t=b+100;
        printf("%.2f",t);
    }
}