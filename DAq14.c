#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c; float x1, x2;
    printf("Enter the values of a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Your required quadratic equation is: %dx2 +%dx +%d =0 ",a,b,c);
    x1= (-b-sqrt(b*b-4*a*c))/2*a;
    x2= (-b+sqrt(b*b-4*a*c))/2*a;
    printf("The solutions of the quadratic equation are: %.2f and %.2f",x1,x2);
    return 0;
}
