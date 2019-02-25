#include<stdio.h>
void main()
{
char a[20],b[20];
int i,count=0,count1=0,k,n,n1;
n=strlen(a);
n1=strlen(b);
if(n==n1)
{
for(i=0;i<n;i++)
{
if(a[i]==b[i])
{
count++;
}
else
{
count1++;
}
}
if(count1==k)
{
printf("yes");
}
else
{
printf("no");
}
}
