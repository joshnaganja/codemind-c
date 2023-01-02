#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    float avg;
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
    avg=(float)sum/n;
    printf("%.2f",avg);
}