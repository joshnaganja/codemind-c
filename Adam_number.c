#include<stdio.h>
int main()
{
    int n,r,s,a,b,c,t,sq2,sq;
    scanf("%d",&n);
    sq=n*n;
    t=n;
    s=0;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    sq2=s*s;
    a=sq2;
    c=0;
    while(sq2!=0)
    {
        b=sq2%10;
        c=c*10+b;
        sq2=sq2/10;
    }
    if(sq==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}