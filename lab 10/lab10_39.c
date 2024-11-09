#include<stdio.h>
#include<ctype.h>
#include<string.h>

int stack[50];
int top=-1;
char expr[50];

void push(int x)
{
	top++;
	stack[top]=x;
}

int pop()
{
	if(top == -1)
		return -1;
	else
		return stack[top--];
}



int main()
{
	int i,n1,n2,n3,num;
	printf("Enter expression :");
	scanf("%s",expr);

	for(int i=strlen(expr);i>=0;i--)
	{
		if(isdigit(expr[i]))
		{
			num=expr[i]-'0';
			push(num);
		}
		else
		{
			n1=pop();
			n2=pop();
			switch(expr[i])
			{
				
				case '+':
					n3=n1+n2;
					break;

				case '-':
					n3=n1-n2;
					break;

				case '*':
					n3=n1*n2;
					break;

				case '/':
					n3=n1/n2;
					break;
			}
		}
		push(n3);
	}
	printf("%s=%d",expr,pop());
}