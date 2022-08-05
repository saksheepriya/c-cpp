#include <stdio.h>
int main()
{
    float n;
    printf("Enter Richter Scale reading: ");
    scanf("%f",&n);
    if (n<5.0)
    {
        printf("Little or no damage");
    }
    else if (n>=5.0 && n<5.5)
    {
        printf("Some damage");
    }
    else if (n>=5.5 && n<6.5)
    {
        printf("Serious damage: Walls may crack or fall");
    }
    else if (n>=6.5 && n<7.5)
    {
        printf("Disaster: houses and buildings may collapse");
    }
    else if (n>=7.5)
    {
        printf("Catastrophic: most buildings destroyed");
    }
    
    return 0;
}
