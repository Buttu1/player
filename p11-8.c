#include <stdio.h>

void main()
{
   int N,a[10000],sum=0,i,j;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
       
       
  
    sum=sum+a[i];
    printf("%d ",sum);
    

}

}
