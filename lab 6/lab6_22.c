#include<stdio.h>
void main()
{
	int i,j;

	int matrix[3][3];

	printf("Enter matrix element :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}

	printf("Matrix element are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}

}