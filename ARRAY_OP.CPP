#include<stdio.h>
#include<conio.h>


void insert_element(int A[10],int size)
{
	int i,element,pos;
	printf("enter element you want to insert = ");scanf("%d",&element);
	printf("enter positon you want to enter = ");scanf("%d",&pos);
	pos-=1;

	for(i=size-1;i>=pos;i--)
		A[i+1]=A[i];
		A[pos]=element;
	printf("new array\n");

	for(i=0;i<=size;i++)
		printf("A[%d]=%d\n",i+1,A[i]);
	getch();
}

void delete_element(int B[10],int size)
{
	int i,del,position,flag=0;
	printf("enter element you want to delete = ");scanf("%d",&del);
	for(i=0;i<size;i++)
	{	if(B[i]==del)
		{	position=i;
			flag=1;
			break;
		}
	}
	if(!flag)
	printf("element not found to be deleted\n");

	for(i=position;i<=size;i++)
		B[i]=B[i+1];
	printf("new array\n");

	for(i=0;i<size-1;i++)
		printf("A[%d]=%d\n",i+1,B[i]);
	getch();
}

void merge_sort(int A[10],int size)
{       clrscr();
	int B[10],C[20],i=0,j=0,k=0,m,n,a;
	printf("\n\n\n\tMERGE SORT\n");
	printf("\tarray 1\n");

	for(m=0;m<size;m++)
		printf("%d::",A[m]);
	printf("\nenter size of array 2=");scanf("%d",&n);
	printf("\nenter values in array\n");

	for(a=0;a<n;a++)
		scanf("%d",&B[a]);

	while((i<size)&&(j<n))
	{	if(A[i]<=B[j])
			C[k++]=A[i++];
		else
			C[k++]=B[j++];
	}
	while(i<size)
	{
	 C[k++]=A[i++];
	}
	while(j<n)
	{
	 C[k++]=B[j++];
	}

	for(k=0;k<size+n;k++)
		printf("c[%d]=%d\n",k+1,C[k]);
	getch();
}

void traverse(int A[10],int size)
{
	for(int i=0;i<size;i++)
		printf("A[%d]=%d\n",i+1,A[i]);
	getch();
}

void copy(int A[10],int size)
{
	int B[10];
	for(int i=0;i<size;i++)
	B[i]=A[i];
	printf("\n\nARRAY 1\n");
	for(i=0;i<size;i++)
		printf("A[%d]=%d\t\t",i+1,A[i]);
	printf("\n\nARRAY 2\n");
	for(i=0;i<size;i++)
		printf("B[%d]=%d\t\t",i+1,B[i]);
	getch();

}

void reverse(int A[10],int size)
{
	int temp,i;
	for(i=0;i<size/2;i++)
	{
		temp=A[i];
		A[i]=A[size-i-1];
		A[size-1-i]=temp;
	}

	printf("new array = \n");
	for(i=0;i<size;i++)
	printf("%d\t\n",A[i]);
	getch();
}

void main()
{	clrscr();
	int size,A[10],g,i,B[10];
	printf("\t\tPERFORMING ARRAY OPERATIONS");
	printf("\n\t\tRAJAT [IT-25-19]\n\n");
	printf("enter size of array=");scanf("%d",&size);
	printf("enter array\n");
	for(i=0;i<size;i++)
	{	scanf("%d",&A[i]);
		B[i]=A[i];
	}
	do{     clrscr();
		printf("enter your choice");
		printf("\n\t\tMENU");
		printf("\n1.TRAVERSE ARRAY");
		printf("\n2.INSERT ELEMENT");
		printf("\n3.DELETE ELEMENT");
		printf("\n4.COPY ARRAY");
		printf("\n5.REVERSE ARRAY");
		printf("\n6.MERGE SORT");
		printf("\n7.QUIT\n");
		scanf("\n%d",&g);
		switch(g)
		{       case 1:traverse(A,size);break;
			case 2:insert_element(B,size);break;
			case 3:delete_element(A,size);break;
			case 4:copy(A,size);break;
			case 5:reverse(A,size);break;
			case 6:merge_sort(A,size);break;
			case 7:break;
			default:printf("wrong choice\n");
		}
	}while(g!=7);
   getch();
}