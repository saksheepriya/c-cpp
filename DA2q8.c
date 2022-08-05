#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int *num, *t, n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    num=(int*)malloc(n*sizeof(int));
    t=num;
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",t);
        t++;
    }
    for (int j = 0; j < n; j++)
    {
        if (num[j]==0)
        {
            printf("The index k after which all the inputs are 0 is: %d",j-1);
            break;
        }
        
    }
    
    
    return 0;
}
