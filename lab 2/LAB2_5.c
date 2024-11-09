//WAP to calculate factorial of given number

#include<stdio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n * fact(n-1);
}
void main()
{
	int f,n;
	printf("Enter any number");
	scanf("%d",&n);
	f=fact(n);
	printf("%d",f);

}
