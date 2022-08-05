#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[20]; int n, b;
    printf("Enter the string: ");
    gets(string);
    n= strlen(string);
    printf("The secret code is:\n");
    while (n>=0)
    {
        putchar(string[n-1]);
        n--;
    }
    
    return 0;
}
