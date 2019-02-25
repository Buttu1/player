#include<stdio.h>
void main()
{
char a[20];
int i;
gets(a);
for(i=0;a[i]!='\0';i+3)
{
printf("%c",a[i]);
}
}
