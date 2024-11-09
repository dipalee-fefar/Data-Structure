#include <stdio.h>
void main()
{
	int a,b,sum=0;
	printf("enter two no.\n");
	scnaf("%d%d",&a,&sb);
	if (a>b)
	{
		for (int i = b; i <=a; ++i)
		{
			sum=sum+i;
		}
	}
	else
	{
	 for (int i = a; i <=b; ++i)
		{
			sum=sum+i;
		}	
	}
printf("%d\n",sum );
}