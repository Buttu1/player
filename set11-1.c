#include<stdio.h>
void main()
{
char a[20];
int i,n,count=0;
gets(a);
scanf("%d",&n);
for(i=0;a[i]1='\0';i++)
{
count++;
}
for(i=count;i>=n;i--)
{
printf("%c",a[i]);
}
}
