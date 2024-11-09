#include<stdio.h>
int top=0,s[6],n=6;

void push(int x)
{
    top++;
    s[top]=x;
}

int pop()
{
    top--;
    return s[top+1];
}
void main()
{
    int num,size;

    printf("enter size:");
    scanf("%d",&size);

    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&num);
        push(num);
    }


    for(int i=0 ; i<size ; i++)
    {
        printf("%d\n",pop());
    }
}