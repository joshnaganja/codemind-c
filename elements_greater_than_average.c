#include<stdio.h>
int main()
{
    int n,sum=0,count=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       sum=sum+a[i]; 
    }
    int avg;
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(avg<=a[i])
        {
            count=count+1;
        }
    }
    printf("%d",count);
}