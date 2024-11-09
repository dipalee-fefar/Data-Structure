#include<stdio.h>
int fact(int n)
{
if (n==0)
{
   	return 1;
}
return n*fact(n-1);
}
void main()
{
int a,p;  
	printf("Enter no. to find factoril\n");
	scanf("%d",&a);
	printf("%d\n",fact(a));
}

