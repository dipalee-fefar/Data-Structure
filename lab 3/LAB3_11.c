#include<stdio.h>

int fibo(int n)
{
	if(n==0)return 0;
	if(n==1)return 1;
	else
		{
			return fibo(n-1)+fibo(n-2);
}
}
void main()
{
	int n,m=0,ans;
	printf("enter no.\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		ans=fibo(m);
		printf("%d\n",ans);
		m++;
	}
}