#include<stdio.h>
#define PI 3.14
void main()
{
	float r,a;
	printf("Enter radius:");
	scanf("%f",&r);
	a=PI*r*r;
	printf("\nArea of circle for radius %.2f is %f",r,a);
}
