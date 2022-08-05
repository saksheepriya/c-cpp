#include <stdio.h>
int main()
{
    int hours,wage, wage1=200, wage2;
    printf("Enter no. of hours: ");
    scanf("%d",&hours);
    if (hours<8)
    {
        wage= wage1;
        printf("Total wage= %d",wage);
    }
    else if (hours>=1 && hours<12)
    {
        wage= wage1+ ((hours-8)*100);
        printf("Total wage= %d",wage);
    }
    else if (hours>=12 && hours<16)
    {
        wage= wage1+ (4*100)+((hours-12)*200);
        printf("Total wage= %d",wage);
    }
    else if (hours>=16)
    {
        wage= wage1 + (4*100) + 4*200 + ((hours-16)*250);
        printf("Total wage= %d",wage);
    }
    return 0;
}
