#include<stdio.h>
int f(int *a);
int main()
{
	int x1,x2,x3,x4,y1=0,y2=0,y3=0,y4=0;
	scanf("%1d%1d%1d%1d",&x1,&x2,&x3,&x4);
	int c1=0,c2=0,c3=0,c4=0,*s1,*s2,*s3,*s4;
	c1=x1;
	c2=x1+x2;
	c3=x1+x2+x3;
	c4=x1+x2+x3+x4;
	s1=&c1;
	s2=&c2;
	s3=&c3;
	s4=&c4;
	printf("%d%d%d%d",*s1,f(s2),f(s3),f(s4));
	return 0;
}
int f(int *a)
{
	int sum=0,num=0,rem=0;
	num=*a;
	while(num/10!=0)
    {
        sum = 0;
        while(num != 0) 
        {
            rem=num%10;
            sum=sum+rem;
            num=num/10;
        }

        num = sum;
    }
	return(sum);
}
