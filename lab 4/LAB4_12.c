#include<stdio.h>
void main()
{
	int a;
	printf("enter lenth of array\n");
	scanf("%d",&a);
	int b[a];
	for (int i=0;i<a;++i)
	{
		printf("enter element no %d\n",i);
		scanf("%d",&b[i]);
	}
	for (int j=0;j<a;++j)
	{
		printf("enter element no a[%d]=%d \n",j,b[j]);
	
}
}