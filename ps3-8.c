#include<stdio.h>
void main()
{
char a[20];
int i,j=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='  ')
{
b[j]=a[i+1];
j++;
}
}
printf("%s",b);
}
