#include <stdio.h>

int main()
{
   int a[20],i,min,n,temp;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   min=a[0];
   for(i=0;i<n;i++)
   {
       if(a[i]<min)
       {
           temp=a[i];
           a[i]=a[i+1];
           a[i+1]=temp;
           
       }
   }
   printf("%d",a);
   printf("%d",a[1]);
}

