#include <stdio.h>
void add(int, int);
void mul(int, int);
void rev(int);
int main()
{
    char a; int b,c;
    printf("Enter \n'+' to add integers\n'*' to multiply integers\n'$' to reverse the given number\n");
    scanf("%c",&a);
    switch (a)
    {
    case '+':
        printf("Enter nos. to be added: ");
        scanf("%d %d",&b,&c);
        add(b,c);
        break;
    case '*':
        printf("Enter nos. to be multiplied: ");
        scanf("%d %d",&b,&c);
        mul(b,c);
        break;
    case '$':
        printf("Enter no. to be reversed: ");
        scanf("%d",&b);
        rev(b);
        break;
    
    default:
        break;
    }
    return 0;
}
void add(int x, int y)
{
    printf("%d",x+y);
}
void mul(int x, int y)
{
    printf("%d",x*y);
}
void rev(int x)
{
    int i;
    while(x>0)
    {
        printf("%d",x%10);
        x=x/10;
        i++;
    }
}
