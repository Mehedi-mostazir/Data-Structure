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
	NN=(NODE*)malloc(sizeof(NODE));
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
void display()
{
	NODE *temp;
//	temp=Head;
	if(Head==NULL)
	{
		printf("No Nodes\n");
	}
	else
	{
		temp=Head;
		while(temp !=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->add;
		}
	}
}
int delete()
{
	
	//  Delete
	NODE *temp;
	if(Head==NULL)
	{
		return -1;
	}
	else if(Head->add==NULL)
	{
		val=Head->data;
		Head=NULL;
		return val;
	}
	else
	{
		temp=Head;
		while(temp->add->add);
		{
			temp=temp->add;
		}
		val=temp->add->data;
		temp->add=NULL;
		return val;
		
	}
	
	
}
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
			//delete node
			data=delete();
			if(data==-1)
			{
				printf("No nodes");
			}
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
/*if head==null:
    head==newnode
else:
	temp=head*/
