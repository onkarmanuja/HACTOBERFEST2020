#include<stdio.h>
#include<conio.h>

void linear_search(int a[10],int size)
{	int i,pos,flag=0,ele;
	printf("enter element you want to search = ");
	scanf("%d",&ele);
	for(i=0;i<size;i++)
	{
		if(a[i]==ele)
		{
			pos=i;
			flag=1;
			break;
		}
	}

	if(flag)
	{
		printf("\nSearch Found");
		printf("\n %d found at position %d ",ele,++pos);
	}
	else
		printf("Element not Found");

	getch();
}

void binary_search(int a[10],int size)
{
	int begin,end,middle,ele;
	begin=0;end=size-1;
	printf("Enter element you want to search");
	scanf("%d",&ele);
	while(begin<end)
	{
		middle=(begin+end)/2;
		if(a[middle]==ele)
		{
			printf("Binary search succesfull");
			break;
		}
		else if(a[middle]>ele)
		{
			end=middle-1;
		}
		else
			begin=middle+1;
	}

	if(begin>end)
	printf("Search Unsuccesfull");
	getch();
}

void bubble_sort(int a[10],int size)
{	clrscr();
	int i,j,k,temp;

	for(i=0;i<size;i++)
	{ 	for(j=0;j<size-1-i;j++)
		{ 	if(a[j]>a[j+1])
			{	temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf(" \n\nSORTED ARRAY\n\n ");
	for(i=0;i<size;i++)
	printf("\t%d",a[i]);
	getch();
}
void main()
{	clrscr();
	int a[10],size,i,n;
	printf("\n\n\tEnter size of array\n");
	scanf("\t%d",&size);
	printf("\tEnter a sorted array for searching and unsorted for sorting\n");
	for(i=0;i<size;i++)
	{
		scanf("\t%d",&a[i]);
	}

	do{
		clrscr();
		printf("\n\t\tPERFORM SEARCHING AND SORTING\n");
		printf("\t\tRAJAT [IT-25-19]\n\n");
		printf("Enter your choice");
		printf("\n\t\tMenu");
		printf("\n1.LINEAR SEARCH");
		printf("\n2.BINARY SEARCH");
		printf("\n3.BUBBLE SORT");
		printf("\n4.QUIT\n");
		scanf("%d",&n);
		switch(n)
		{	case 1:linear_search(a,size); break;
			case 2:binary_search(a,size);break;
			case 3:bubble_sort(a,size);break;
			case 4:break;
			default:printf("Wrong Choice\n");
		}
	}while(n!=4);
	getch();
}