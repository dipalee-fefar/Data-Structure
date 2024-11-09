#include<stdio.h>
void main()
{
	int location;
	int i, num,size;

	printf("Enter any size\n");
	scanf("%d",&size);

	int a[size];

	for(i=0;i<size;i++)
	{
		printf("Enter your array\n");
		scanf("%d",&a[i]);
	}

	printf("Enter your insert :\n");
	scanf("%d",&num);

	printf("Enter your location\n");
	scanf("%d",&location);

	for(i=size;i>=location;i--)
	{
		a[i+1]=a[i];
	}

		a[location]=num;
		size++;
	
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n",a[i]);
	}
}