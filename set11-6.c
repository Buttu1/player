#include<stdio.h>
void main()
{
int n,k,a[20],res,pos;
scanf("%d %d",&k,&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
while(temp<=k)
{
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
res=a[i];
pos=i;
}
}
if(temp==k)
{
printf("%d",res);
}
else
{
a[pos]=0;
}
temp++;
}
getch();
}
