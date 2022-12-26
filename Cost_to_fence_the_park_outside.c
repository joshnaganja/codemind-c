#include<stdio.h>
int main()
{
    int l,b,w,c,a1,f,a2,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a1=(2*w+l)*(2*w+b);
    a2=l*b;
    a=a1-a2;
    f=a*c;
    printf("%d",f);
}