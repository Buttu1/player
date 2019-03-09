#include<stdio.h>
void main()
{
int a[20],n,b[20],j=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<n)
{
b[j]=a[i];
j++;
}
}
for(k=0;k<j;j++)
{
printf("%d",b[j]);
}
getch();
}
