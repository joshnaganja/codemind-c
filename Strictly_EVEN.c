#include<stdio.h>
int main()
{
    int n,i,flag=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2==0)
            {
                flag=flag+1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count=count+1;
        }
    }
    if(flag==count)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}