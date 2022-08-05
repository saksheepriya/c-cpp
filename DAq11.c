#include <stdio.h>
int main()
{
    char option;
    printf("Enter the colour of cylinder.\n'y' or 'Y' for yellow\n'o' or 'O' for orange\n'b' or 'B' for brown\n'g' or 'G' for green\n");
    scanf("%c",&option);
    switch (option)
    {
    case 'y':
    case 'Y':   
        printf("The compressed gas is Hydrogen");
        break;
    case 'o':
    case 'O':   
        printf("The compressed gas is Ammonia");
        break;
    case 'b':
    case 'B':   
        printf("The compressed gas is Carbon monoxide");
        break;
    case 'g':
    case 'G':   
        printf("The compressed gas is oxygen");
        break;
    default:
        break;
    }
    return 0;
}
