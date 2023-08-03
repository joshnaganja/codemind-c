#include<stdio.h>
int main()
{
    int n,s,r,sq;
    scanf("%d",&n);
    sq=n*n;
    s=0;
    while(sq!=0)
    {
        r=sq%10;
        s=s+r;
        sq=sq/10;
    }
    if(n==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}