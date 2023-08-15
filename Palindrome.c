#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    t=n;
    int s=0,r;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}