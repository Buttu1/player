#include<stdio.h>
void main()
{
char a[20],b[20];
int i,k,j,count=0;
scanf("%s %s",a,b);
scanf("%d",k);
for(i=0;a[i]!='\0';i++)
 {
   for(j=0;b[i]!='\0';i++)
    {
      if(a[i]!=b[i])
      {
       count++;
       }
      }
    }
   if(count==k)
   {
   printf("yes");
   }
   else
   {
   printf("no");
   }
  }
