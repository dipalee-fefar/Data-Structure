#include<stdio.h>
void main()
{
	int i,j,k;
	int a1[2][2],a2[2][2],a3[2][2];

	printf("Enter value of first element");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter value of [%d] [%d] :\n",i,j);
			scanf("%d",&a1[i][j]);
		}
	}

	printf("Enter value of second element");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter value of [%d] [%d] :\n",i,j);
			scanf("%d",&a2[i][j]);
		}
	}

	printf("Value of first element");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			printf("%d",a1[i][j]);
		}
	}

	printf("Value of second element");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			printf("%d",a2[i][j]);
		}
	}

	printf("Multiplicatoin Matrx : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				a3[i][j]=a1[i][k]*a2[k][j];
			}
		}	
	}

	printf("Multiplicatoin Matrx : \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a3[i][j]);
		}	
	}
}