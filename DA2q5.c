#include <stdio.h>
#include <stdlib.h>
int main()
{
    float w;
    float h;
    float bmi;
    printf("Enter weight in kg: ");
    scanf("%f",&w);
    printf("Enter height in meters: ");
    scanf("%f",&h);
    bmi = (w/(h*h));
    if (bmi>25.0 && bmi<30.0)
    {
        printf("Overweight");
    }
    else if (bmi>=30.0)
    {
        printf("Obesity");
    }
    return 0;
}