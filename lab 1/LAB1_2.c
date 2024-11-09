#include<stdio.h>
void main()
{
	int a;
	printf("Enter value of a:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Given number is even");
	}
	if(a%2==1)
	{
		printf("Given number is odd");
	}
}
