#include <stdio.h>
int main()
{
    int L,N,i=0, W,H;
    scanf("%d%d",&L,&N);
    for(i=0;i<N;i++)
    {
    scanf("%d%d",&W,&H);
    if(W<L || H<L)
    printf("UPLOAD ANOTHER
");
    else if(W==H)
    printf("ACCEPTED
");
    else if(W==L && H==L)
    printf("ACCEPTED
");
    else if(W>L || H>L)
    printf("CROP IT
");
    }
    return 0;
}