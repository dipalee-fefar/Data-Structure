#include<stdio.h>
#include<ctype.h>

char stack[100],expr[100],x;
int top=-1,i=0;

void push(char x)
{
	top++;
	stack[top]=x;
}

char pop()
{
	if(top == -1)
		return -1;
	else
		return stack[top--];
}

int priority(char x)
{
	if(x=='(' || x==')')
		return 0;
	else if(x=='+' || x=='-')
		return 1;
	else if(x== '*' || x=='/')
		return 2;
	else if(x=='^')
		return 3;
	else 
		return 0;
}

void main()
{
	printf("Enter your expression \n");
	scanf("%s",expr);
	printf("\n");
	char next =expr[i];
	i++;

	while(next !='\0')
	{
		if(isalnum(next)!=0)
			printf("%c",next);

		else if(next=='(')
			push(next);
		
		else if(next==')')
		{
			while((x=pop())!='('){
				printf("%c",x);
			}
		}
		else
		{
			while(priority(stack[top])>=priority(next)){
				printf("%c",pop());
			}
				
				push(next);
		}
		next=expr[i];
		i++;
	}
	while(top!= -1)
	{
		printf("%c",pop());
	}
}