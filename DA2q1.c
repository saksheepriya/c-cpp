#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,n1;
    scanf("%d",&n);

    n1=n;
 
    int back=6,sum=0;
    n1=n1/10;
    while(back>0)
    {
        sum+=n1%10;
        n1/=10;
        back--;
    }

    if(sum%10==n%10)
    {
        printf("Valid ISBN number");
    }
    else
    {
        printf("Invalid ISBN number");
    }
 
    return 0;
}