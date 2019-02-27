#include<stdio.h>
void main()
{
    char a[20];
    int i,count=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
    getch();
}
