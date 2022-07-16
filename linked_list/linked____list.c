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
		temp=Head;
		while(temp->add!=NULL)
		{
			temp=temp->add;
		}
		temp->add=NN;
	}
}

void delete()
{
	
	
}

void display()
{
	NODE *temp;
	temp=Head;
	if(Head==NULL)
	{
		printf("NO NODES\n");
	}
	else
	{
		temp=Head;
		while(temp!=NULL)
		{
			printf("%d %d %d\n",temp,temp->data,temp->add);
			temp=temp->add;
		}
		printf("\n");
	}
}
void main()
{
	int ch,data;
	while (1)
	{
		printf("1.insert\n2.delete\n3.display\n4.exit\n");
		scanf("%d",&ch);
		if (ch==1)
		{
			//insert data
			scanf("%d",&data);
			insert(data);
		}
		else if (ch==2)
		{
			// delete data
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

