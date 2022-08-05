#include <stdio.h>
int main()
{
    // If the glass a contains Pepsi
    // If the glass b contains 7Up
    int a=0, b=1,x; char c;
    x= a;
    a= b;
    b= x;
    printf("Enter Glass (a or b): ");
    scanf("%c",&c);
    if (c=='a')
    {
        
        if (a==0)
        {
            printf("Glass %c contains Pepsi",c);
        }
        if (a==1)
        {
            printf("Glass %c contains 7Up",c);
        }
        
    }
    if (c=='b')
    {
        
        if (b==0)
        {
             printf("Glass %c contains Pepsi",c);
        }
        if (b==1)
        {
            printf("Glass %c contains 7Up",c);
        }
    }
    
    return 0;
}
