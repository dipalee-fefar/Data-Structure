#include<stdio.h>

int q[10];
int f=0;
int r=0;

void enqueue(int y)
{
	if(r>=10)
	{
		printf("Queue overflow \n");
		return;
	}
	else
	{
		r++;
		q[r]=y;
	}
	if(f==0)
	{
		f=0;
	}
	return;
}
int dequeue()
{
	int y;
	if(f==0)
	{
		return 0;
	}
	y=q[f];

	if(f==r)
	{
		f=0;
		r=0;
	}
	else
	{
		f++;
	}
	return y;
}

void display()
{
	for(int i=f;i<=r;i++)
	{
		printf("%c",q[i]);
	}
}

void main()
{
	int choice,n,y,d;
	printf("1.enqueue \n 2. dequeue \n 3.display \n exit ");
	printf("Enter your choice :");
	scanf("%d",&choice);

	while(choice!=10)
	{
		switch(choice)
		{
		case 1:
			d=dequeue();
			if(d==0){
				printf("Queue underflow :");
			}
			else 
			{
				printf("%d \n",d);
				break;
			}
		case 3:
			display();
			break;
		}

		printf("Enter your choice :");
		scanf("%d",&choice);
	}
}