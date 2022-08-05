#include <stdio.h>
int main()
{
    int year, a, n, days,b, day;
    printf("Enter year: ");
    scanf("%d",&year);
    a= year - 2001;
    n=a/4; //no. of leap years
    b= a-n; //no. of years excluding leap years
    days= (n*366)+(b*365);
    day= days%7;
    if (day==0)
    {
        printf("Monday");
    }
    else if (day==1)
    {
        printf("Tuesday");
    }
    else if (day==2)
    {
        printf("Wednesday");
    }
    else if (day==3)
    {
        printf("Thursday");
    }
    else if (day==4)
    {
        printf("Friday");
    }
    else if (day==5)
    {
        printf("Saturday");
    }
    else if (day==6)
    {
        printf("Sunday");
    }
    
    
    return 0;
}
