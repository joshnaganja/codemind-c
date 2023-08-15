#include<stdio.h>
int main()
{
    int n,s=0,t,r,a=1,b,c;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    while(t!=0)
    {
        b=t%10;
        a=a*b;
        t=t/10;
    }
    if(s==a)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}