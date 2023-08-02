#include<stdio.h>
int main()
{
    int n,t,s,r;
    scanf("%d",&n);
    t=n;
    s=0;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("%d",s);
}