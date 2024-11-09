// WAP to find sum of given number in 1D array

#include <stdio.h>
main()
{
	int a[5],sum ,i;
	sum=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i] );
	}
	for (i=0;i<5;i++)
	{
		sum =sum+a[i]; 
	}
		printf("%d",sum);
}

