#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],f[n],i,j,c,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f[n]=-1;
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=c;
        }
    }
    for(i=0;i<n;i++)
    {
        if(max<f[i])
        {
            max=f[i];
            
        }
    }
    printf("%d",max);
}