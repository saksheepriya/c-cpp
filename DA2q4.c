#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[10][12]; char item[50];
    /* This is a table of a family budget yearly. 
    First row: rent
    Second row: electricity charge
    Third row: fuel charge
    Fourth row: grocery
    Fifth row: fruits
    Sixth row: vegetables
    Seventh row: outings
    Eighth row: others */
    for (int i = 0; i < 12; i++)
    {
        int sum=0;
        for (int j = 0; j < 8; j++)
        {
            printf("Enter item name: ");
            scanf("%s",item);
            printf("Enter %s bill for month %d: ",item,i+1);
            scanf("%d",&a[j][i]);
            sum+=a[j][i];
            
        }
        printf("Family expense for month %d is: %d\n",i+1,sum);
    }
    

    return 0;
}
