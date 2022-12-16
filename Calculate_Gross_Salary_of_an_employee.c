#include<stdio.h>
int main()
{
    float gs,hr,bs,da,pf;
    scanf("%f%f%f",&bs,&hr,&da);
    pf=bs*0.12;
    gs=bs+hr+da+pf;
    printf("%.2f
%.2f",pf,gs);
    
}