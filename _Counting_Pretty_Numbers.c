#include <stdio.h>
int main() 
{
	int n,i;
	scanf("%d",&n);
	while(n--)
	{
	    int l,r,c=0;
	    scanf("%d%d",&l,&r);
	    for(i=l;i<=r;i++)
      	{   
	        if(i%10==2 || i%10==3 || i%10==9)
	        c++;
    	}
	    printf("%d
",c);
	}
	
   return 0;
}
