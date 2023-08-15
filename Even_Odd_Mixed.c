#include<stdio.h>
int main()
{
    int n,r,t,c1=0,c2=0,d=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            c1=c1+1;
        }
        else
        {
            c2=c2+1;
        }
        d=d+1;
        n=n/10;
    }
    if(d==c1)
    {
        printf("Even");
    }
    else if(d==c2)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}