#include <stdio.h>
int main()
{
    int pn ; float total=0.0, price, q; //(in dollars)
    for (int i = 0; i < 5; i++)
    {
        printf("Enter product number: ");
        scanf("%d",&pn);
        printf("Enter quantity: ");
        scanf("%f",&q);
        
        switch (pn)
        {
        case 1:
            price= 2.98;
            break;
        case 2:
            price=4.50;
            break;
        case 3:
            price=9.98;
            break;
        case 4:
            price=4.49;
            break;
        case 5:
            price=6.87;
            break;
        default:
            
            break;
        }
        total+= q*price;
    }
    printf("Total retail value: %.2f",total);
    
    return 0;
}
