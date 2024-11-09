#include <stdio.h>
void main()
{
	int a,b,avg,sum=0;
	int c;
	printf("enter lenth of array\n");
	scanf("%d",&c);

	int d[c];
	for (int i=0;i<c;++i)
	{
		printf("enter element no %d\n",i);
		scanf("%d",&d[i]);
	}
	printf("enter no from array\n");
	scanf("%d",&a);
	if (a<=c)
	{
		b=c-a;
		for (int i =0; i <=b; ++i)
		{
			sum=sum+d[i];
		}

	}
	avg=sum/b;
		printf("avg from 1 to %d=%d\n",a,avg);
	}