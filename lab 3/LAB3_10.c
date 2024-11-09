#include<stdio.h>
int power(int n ,int c)
{
if (c==1)
{
   	return n;
}
return n*power(n,c-1);
}
void main()
{
int a,p;  
	printf("Enter no. and power:\n");
	scanf("%d%d",&a,&p);
	printf("%d\n",power(a,p));
}

