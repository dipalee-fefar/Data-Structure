#include<stdio.h>
#define N 50

int q[N];
int f=-1;
int r=-1;
int y;

void cqinsert(int y)
{
	if(r==N)
	{
		r=1;
	}
	else
	{
		r++;
	}

	if(f==r)
	{
		printf("Overflow");
		return -1;
	}
	else
	{
		q[r]=y;
	}
	if(f==-1)
	{
		f=0;
	}
}

int cqdelete()
{
	if(f==-1)
	{
		printf("Undeflow");
		return -1;
	}
	else
	{
		y=q[f];

		if(f==r)
		{
			f=r=-1;
		}
		else if(f==N)
		{
			f=1;
		}
		else
		{
			f=f+1;
		}
	}
	return y;
}

void display()
{
	for(int i=f;i<=r;i++)
	{
		printf("%d",q[i]);
	}
}

void main()
{
	int choice,y;
	printf("1.cqinsert \n 2. cqdelete \n 3.display \n 4.exit \n");
	printf("Enter your choice :");
	scanf("%d",&choice);

	while(1)
	{
		switch(choice)
		{
		case 1:
			cqinsert(y);
			break;

		case 2:
			cqdelete();
			break;
		
		case 3:
			display();
			break;
		}
	}
}
