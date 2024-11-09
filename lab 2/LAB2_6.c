#include<stdio.h>
void main()
{
	int x,y,r=1,i,t;
	printf("Enter a nuber:");
	scanf("%d",&x);
	printf("Enter the power:");
	scanf("%d",&y);
	while(i<=y)
	{
	r=r*x;
	i++;
    }
printf("Result=%d",r);
}
