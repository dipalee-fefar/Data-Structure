#include <stdio.h>
void main()
{
	int a,b,sum=0;
	int c;
	printf("enter lenth of array\n");
	scanf("%d",&c);

	int d[c];
	for (int i=0;i<c;++i)
	{
		printf("enter element no %d\n",i);
		scanf("%d",&d[i]);
	}
	printf("enter two no. from array\n");
	scanf("%d%d",&a,&b);
	if(a<=c && b<=c){


	if (a>b)
	{
		for (int i = b; i <=a; ++i)
		{
			sum=sum+d[i];
		}
	}
	else
	{
	 for (int i = a; i <=b; ++i)
		{
			sum=sum+d[i];
		}	
	}
}
printf("%d\n",sum );
}