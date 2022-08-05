#include <stdio.h>
int main()
{
    float diameter= 20, depth= 10; //in cm
    float volume= (3.14)*(diameter/2)*(diameter/2)*depth;
    printf("Amount of flour needed: %.2f sq unit",volume);
    return 0;
}
