#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int pin(int);
int main()
{
    int n, pin_of_first;
    printf("Enter the number of customers: ");
    scanf("%d",&n);
    printf("pin of first customer is: %d",pin(n));
    
    return 0;
}
int pin(int a)
{
    if (a!=0)
    {
        return a+pin(a-1);
    }
    else
        return 0;
}