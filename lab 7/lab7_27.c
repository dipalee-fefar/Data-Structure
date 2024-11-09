#include<stdio.h>

int stack[4];
int top=-1;
int i,n;

void push(int);
int pop();
int peep();
void change(int,int);


void push (int x)
{
    if(top >= 3)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

int pop()
{
    if(top<0)
    {
        printf("stack underflow");
        return -1;
    }
    else
    {
        top--;
        return stack[top+1];
    }
}

int peep()
{
    if(top-i+1 < 0)
    {
        printf("stack underflow");
        return -1;
    }
    else
    {
        return stack[top-i+1];
    }
}

void change(int val,int i)
{
    if(top-i+1 <= 0)
    {
        printf("stack underflow");
    }
    else
    {
        stack[top-i+1 ]=val;
    }
}

void display()
{
    if(top==-1)
    {
        printf("emptyyy");
    }
    for(int i=top ; i>=0 ; --i)
    {
        printf("%d",stack[i]);
    }
}


void main()
{
     int c=0,pos,x,i,val;

    do{
   
    printf("1.push \n 2.pop \n 3. peep \n 4.change \n 5.display \n" );
    printf("c:");
    scanf("%d",&c);

    switch(c)
    {
        case 1:
        printf("enter element");
        scanf("%d",&x);
        push(x);       
        break;

        case 2:
        pop();
        break;

        case 3:
        printf("enter pos");
        scanf("%d",&i);
         peep(i);
        break;

        case 4:
        printf("enter new value");
        scanf("%d",&val);
        printf("enter pos");
        scanf("%d",&i);
        change(val,i);
        break;

        case 5:
        display();
        break;

    
       
    }
    }while(c!=6);
    
}