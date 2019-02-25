#include<stdio.h>
void main()
{
int i,c,c1,l,l1;
char a[20];
gets(a);
for(i=0;a[i]='\0';i++)
{
if(a[i]=='(')
{
c++;
}
else if(a[i]==')')
{
c1++;
}
}
if(c==c1)
{
printf("yes");
}
else
{
printf("no");
}
}
