#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq1,sq2;
    scanf("%d",&n);
    sq1=sqrt(n);
    sq2=sq1*sq1;
    if(n==sq2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}