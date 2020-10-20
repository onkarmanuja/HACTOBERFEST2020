#include<stdio.h>
#include<conio.h>

void push();
void pop();
void display();
void peek();
void isempty();
void isfull();
void main()
{ 	clrscr();
	int element,a,stack[5],size=5,top=-1;
	do{ 	printf("\n--------MENU--------\n");
		printf("1.PUSH ELEMENT IN STACK\n");
		printf("2.POP ELEMENT FROM STACK\n");
		printf("3.DISPLAY ELEMENTS IN STACK\n");
		printf("4.PEEK ELEMENT\n");
		printf("5.ISEMPTY\n");
		printf("6.ISFULL\n");
		printf("7.QUIT\n");
		printf("enter your choice = ");
		scanf("%d",&a);
		switch(a)
		{ 	case 1:push(stack,size,top);break;
			case 2:pop(stack,top);break;
			case 3:display(stack,top);break;
			case 4:peek(stack,top);break;
			case 5:isempty(top);break;
			case 6:isfull(top);break;
			case 7:break;
			default :printf("wrong choice enter again\n");
		}
	}while(a!=7);
  getch();
}

void peek(int stack[],int &top)
{
	printf("PEEK ELEMENT = %d",stack[top]);
}

void push(int stack[],int size,int &top)
{       int element;
	printf("element to be pushed =");
	scanf("%d",&element);
	if(top==size-1)
		printf("stack overflow\n");
	else
		stack[++top]=element;
}

void pop(int stack[],int &top)
{ 	if(top==-1)
		printf("stack underflow\n");
	else
		printf("poped element =%d",stack[top--]);
}

void display(int stack[],int &top)
{
	for(int i=top;i>=0;i--)
		printf("  %d",stack[i]);
}

void isempty(int &top)
{
	if(top==-1)
		printf("Stack is empty");
	else
		printf("Stack is not empty");
}

void isfull(int &top)
{
	if(top==4)
		printf("Stack is Full");
	else
		printf("Stack is not full");
}
