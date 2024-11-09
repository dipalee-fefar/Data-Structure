#include<stdio.h>
void main()
{
	int i,j;
	int n1,n2,n3;

	printf("Enter element of first matrix :\n");
	scanf("%d",&n1);
	printf("Enter element of first matrix :\n");
	scanf("%d",&n2);

	int arr1[n1][n2];
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("Enter the value of [%d] [%d]",i,j );
			scanf("%d",&arr1[i][j]);
		}
	}
	int arr2[n1][n2];
	printf("Second materix elements :\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("Enter the value of [%d] [%d]",i,j );
			scanf("%d",&arr2[i][j]);
		}
	}

	
	int arr3[n1][n2];
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}

	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d",arr3[i][j]);
		}
		printf("\n");
	}
}