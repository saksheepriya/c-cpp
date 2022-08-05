#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Rel_IS ;
    int strength;
    int fine;;
    char a;
    
    while (1)
    {
        printf("Enter Relevant IS: ");
        scanf("%d",&Rel_IS);
        printf("Enter Strength: ");
        scanf("%d",&strength);
        printf("Enter Fineness: ");
        scanf("%d",&fine);
        if(Rel_IS==269 && strength== 16 && fine==225)
        {
            printf("Grade 33");
        }
        if(Rel_IS==8112 && strength== 23 && fine==225)
        {
            printf("Grade 43");
        }
        if(Rel_IS==12269 && strength== 27 && fine==225)
        {
            printf("Grade 53");
        }        
        printf("\nDo you want to check cement grade again? Press Y to continue or N to exit the program: \n");
        scanf(" %c", &a);
        if (a=='Y')
        {
            continue;
        }
        else if (a=='N')
        {
            printf("Thankyou!");
            exit(0);
        }
        
    }
    
    return 0;
}