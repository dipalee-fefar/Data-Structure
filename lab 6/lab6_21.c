#include<stdio.h>
void main()
{
	
	int i,n1,n2,n3;
	int temp=0;

	printf("Enter element in first array :\n");
	scanf("%d",&n1);
	int arr1[n1];
	 for(i=0;i<n1;i++)
	 {
	 	scanf("%d",&arr1[i]);
	 }

	printf("Enter element in second array :\n");
	scanf("%d",&n2);
	int arr2[n2];
	 for(i=0;i<n2;i++)
	 {
	 	scanf("%d",&arr2[i]);
	 }

	 int arr3[n1+n2];
	 for(i=0;i<n1;i++)
	 {
	 	arr3[temp]=arr1[i];
	 	temp++;
	 }

	  for(i=0;i<n2;i++)
	 {
	 	arr3[temp]=arr2[i];
	 	temp++;
	 }

	 printf("The merge array is \n");
	 for(i=0;i<(n1+n2);i++)
	 {
	 	printf("%d",arr3[i]);
	 }
}