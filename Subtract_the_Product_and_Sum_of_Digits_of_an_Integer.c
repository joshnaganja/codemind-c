#include<stdio.h>
int main()
{
    int n,r,s=1,a=0,b,c,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        s=s*r;
        n=n/10;
    }
    while(t!=0)
    {
        b=t%10;
        a=a+b;
        t=t/10;
    }
    c=s-a;
    printf("%d",c);
}