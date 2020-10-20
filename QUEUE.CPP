#include<stdio.h>
#include<conio.h>
void push(int stack[],int size,int &front,int &rear)
{  int element;
   printf("element to be pushed =\n");
   scanf("%d",&element);
  if(rear==size-1)
	printf("queue overflow");
  else
  { 	if(rear==-1)
	front=0;
	stack[++rear]=element;
  }
}
void pop(int stack[],int &front,int &rear)
{ 	if(front==-1)
		printf("queue underflow");
	else
		{ if(front==rear)
			{ 	printf("%d",stack[front]);
				front=-1;rear=-1;
			}
		  else
			printf("poped element =%d",stack[front++]);
		}
}
void display(int stack[],int &front,int &rear)
{
	for(int i=front;i<=rear;i++)
		printf("%d  ",stack[i]);
}
void queue()
{ 	clrscr();
	int element,b,stack[5],size=5,front=-1,rear=-1;
	do{ 	printf("\n--------MENU--------\n");
		printf("1.PUSH ELEMENT IN QUEUE\n");
		printf("2.POP ELEMENT FROM QUEUE\n");
		printf("3.DISPLAY ELEMENTS IN QUEUE\n");
		printf("4.QUIT\n");
		printf("enter your choice = \n");scanf("%d ",&b);
		switch(b)
		{ 	case 1:push(stack,size,front,rear);break;
			case 2:pop(stack,front,rear);break;
			case 3:display(stack,front,rear);break;
			case 4:break;
			default :printf("wrong choice enter again\n");
		}
	}while(b!=4);
	getch();
}

void circular_queue()
{ 	clrscr();
	int element,b,stack[5],size=5,front=-1,rear=-1;
	do{ 	printf("\n--------MENU--------\n");
		printf("1.PUSH ELEMENT IN QUEUE\n");
		printf("2.POP ELEMENT FROM QUEUE\n");
		printf("3.DISPLAY ELEMENTS IN QUEUE\n");
		printf("4.QUIT\n");
		printf("enter your choice = \n");scanf("%d ",&b);
		switch(b)
		{ 	case 1:push(stack,size,front,rear);break;
			case 2:pop(stack,front,rear);break;
			case 3:display(stack,front,rear);break;
			case 4:break;
			default :printf("wrong choice enter again\n");
		}
	}while(b!=4);
	getch();
}

void main()
{
	clrscr();
	int a;
	do{     clrscr();
		printf("\n--------MENU--------\n");
		printf("1.PERFORM NORMAL QUEUE\n");
		printf("2.PERFORM CIRCULAR QUEUE\n");
		printf("3.PERFORM DQUEUE\n");
		printf("4.QUIT\n");
		printf("enter your choice = ");scanf("%d",&a);
		switch(a)
		{ case 1:queue();break;
		  case 2:circular_queue();break;
		  case 3:break;
		  case 4:break;
		  default :printf("wrong choice enter again\n");
		}
	}while(a!=4);
	getch();
}