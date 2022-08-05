#include <stdio.h>
int main()
{
    char option; int a;
    printf("Enter the type of coin.\n'q' for quarter\n'd' for dimes\n'n' for nickels\n'p' for pennies\n'u' for US dollars\n");
    scanf("%c",&option);
    printf("Enter no. of coins: ");
    scanf("%d",&a);
    switch (option)
    {
    case 'q':
        printf("Value of monney in Indian rupees: %f",a*18.99);
        break;
    case 'd':
        printf("Value of monney in Indian rupees: %f",a*7.404);
        break;
    case 'n':
        printf("Value of monney in Indian rupees: %f",a*8.33);
        break;
    case 'p':
        printf("Value of monney in Indian rupees: %f",a*87);
        break;
    case 'u':
        printf("Value of monney in Indian rupees: %f",a*75.95);
        break;
    
    default:
        break;
    }
    return 0;
}