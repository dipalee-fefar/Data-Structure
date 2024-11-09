#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);

	int arr[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}


	int *ptr;
	ptr=arr;

	for(int i=0;i<n;i++)
	{
		printf("%d\n",*ptr);
		ptr++;
	}
}