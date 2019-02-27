#include<stdio.h>
#include<conio.h>
int main()
{
    long a;
    scanf("%ld",&a);
    if(a>=-2,147,483,647&&a<=2,147,483,647)
    {
      printf("INT");
    }
   if(a>2,147,483,647)
    {
         printf("LONG");
    }
   
    return 0;
}
