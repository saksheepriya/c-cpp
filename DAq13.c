#include <stdio.h>
int main()
{
    int a, s=0, b[34];
    printf("Day of the month of joining: ");
    scanf("%d",&a);
    b[0]= a*a;
    for (int i = 0; i < 29; i++)
    {
        b[i+1]=2*b[i];
    }
    for (int i = 0; i < 30; i++)
    {
        s=s+b[i];
    }
    printf("Total salary: %d",s);

    return 0;
}
