#include<stdio.h>
void main()
{
	int pos;
	int i,num,size,loc=0,flag=0;

	printf("Enter any size\n");
	scanf("%d",&size);

	int arr[size];

	for(i=0;i<size;i++)
	{
		printf("Enter your array\n");
		scanf("%d",&arr[i]);
	}

	printf("Enter the element you want to delete");
	scanf("%d",&num);
	
	for (int i = num; i < size; ++i)
	{
		a[i]=a[i=1];
	}
	size--;
}