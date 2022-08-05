#include <stdio.h>
int main()
{
    int i, a[5];
    for(i=0;i<3;i++)
    {
        printf("Enter height of student %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i = 1; i < 3; i++)
    {
        if (a[0]<a[i])
        {
            a[0]=a[i];
        }
        
    }
    printf("Maximum height= %d",a[0]);
    return 0;
}
