#include <stdio.h>

void main()
{
	int n,res,bin=0,t=1;
	scanf("%d",&n);
	while(n>=1)
	{
	    res=n%10;
	    bin=res*t+bin;
	    n=n/10;
	    t=t*2;
	}
	printf("%o",bin);
}
