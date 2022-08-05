#include <stdio.h>
int main()
{
    int i, j, n, a[10],b;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    for ( i = 0; n>0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    
    printf("The binary form is:\n");
    for ( j = i-1; j>=0; j--)
    {
        printf("%d",a[j]);
    }
    
    
    return 0;
}
