#include <stdio.h>

int main()
{
   
   
 char s[10000],t;
 int i,c=0,l,l2;
 gets(s);
 scanf("%c",&t);


 for(i=1;s[i]!='\0';i++)
 {
     if(s[i]==t)
       {
          printf("%d",i);
          break;
           
           
       }
 }
 

}
