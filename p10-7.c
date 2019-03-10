#include <stdio.h>

void main()
{
    int n,k,s=0,i;
    scanf("%d %d",&n,&k);
    for(i=n;i<=k;i++)
    {
        if(i%2!=0)
        {
            s=s+i;
        }
    }
    printf("%d",s);
	
}
