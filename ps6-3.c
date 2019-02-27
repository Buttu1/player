#include<stdio.h>
void main()
{
    char a[20],b[20];
    int i,j,n,n1,c=0;
    scanf("%s",a);
    scanf("%s",b);
    n=strlen(a);
    n1=strlen(b);
    if(n==n1)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(a[i]==b[j])
            {
                c++;
            }
        }
    }
    if(c==n1)
    {
        printf("yes");
    
    }
    else
    {
        printf("no");
    }
}
else
{
    printf("no");
}
}
