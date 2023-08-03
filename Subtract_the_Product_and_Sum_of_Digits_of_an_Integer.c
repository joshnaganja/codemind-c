#include<stdio.h>
int main()
{
    int n,s,r,a,b,c,t;
    scanf("%d",&n);
    t=n;
    s=1;
    while(n!=0)
    {
        r=n%10;
        s=s*r;
        n=n/10;
    }
    a=0;
    while(t!=0)
    {
        b=t%10;
        a=a+b;
        t=t/10;
    }
    c=s-a;
    printf("%d",c);
}
