#include <stdio.h>

int main()
{
   int a[20],i,min,n,temp=0,k,pos;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   scanf("%d",&k);
   k=n+1-k;
   while(k<=temp)
   {
    min=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]<min)
       {
           min=a[i];
           pos=i;
       }
       
   }
   if(temp==k)
   {
       printf("%d",min);
   }
   else
   {
       a[pos]=0;
       
   }
   temp++;
   }
}
   

