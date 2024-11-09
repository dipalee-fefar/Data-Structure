#include<stdio.h>
int fact(int n,int t)
{
	
if (t!=0)
{
   	return fact(t,n%t);
}
else{
return n;
}

}
void main()
{
int a,d;  
	printf("Enter no. to find gcd\n");
	scanf("%d%d",&a,&d);
	printf("%d\n",fact(a,d)); 
}


