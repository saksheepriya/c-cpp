#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *x;
	x=(float*)malloc(3*sizeof(float));
	scanf("%f%f%f",(x+1),(x+2),(x+3));
	float y=0;
	printf("%.2f",(*(x+1)*100)/(*(x+2)*(*(x+3))));
}
