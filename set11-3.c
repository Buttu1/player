#include<stdio.h>
void main()
{
char a[20],b[20];
int i;
gets(a);
a[0]=a-32;
for(i=1;a[i]!='\0';i++)
{
if(a[i]==' ')
{
a[i+1]=a-32;
}}
printf("%s",a);
}
