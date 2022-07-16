//creating node
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *add;
};
typedef struct Node NODE;
NODE *Head=NULL;

void insert(int data)
{
	NODE *NN,*temp;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=data;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else
	{
		NODE *temp, *Head;
		temp=Head;
		while(temp->add!=NULL)
		{
			temp=temp=temp->add;
		}
		temp->add=NN;
	}
}

void display()
{
	NODE *temp;
	if(Head==NULL)
	{
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->add;
		}
	}
	printf("\n");
	
}
void delete()

void main()
{
	int ch,data;
	while(1)
	{
		printf("1.insert 2.delete 3.display 4.exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert data
			scanf("%d",&data);
			insert(data);			
		}
		else if(ch==2)
		{
			//delete data
			
		}
		else if(ch==3)
		{
			//display data
			display();
		}
		else
		{
			break;
		}
	}
}
