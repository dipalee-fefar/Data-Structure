#include<stdio.h>

int q[4];
int r=-1;
int f=-1;

void enqueue(int x)
{
	if(r>=4)
	{
		printf("Queue Overflow ");
	}
	else
	{
		r++;
		q[r]=x;

		if(f==-1)
		{
			f=0;
		}
	}
}

int dequeue()
{
	int y;
	if(f==-1)
	{
		printf("Queue underflow");
		return 0;
	}
	else
	{
		y=q[f];

		if(f==r)
		{
			f=r=-1;
		}
		else
		{ 
			f++;
		}
		return y;
	}
}
void Display(){
	for(int i=f;i<r;i++)
	{
		printf("%d \n",q[i]);
	}
}

void main()
{
	int i=0;

	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	dequeue();
	enqueue(4);
	enqueue(5);
	printf("Queue is :");
	Display();

	
	
}