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
    push(12);
    push(34);
    push(78);
    push(23);
    push(90);
    push(67);

    for(int i=0 ; i<6 ; i++)
    {
        printf("%d\n",pop());
    }
}