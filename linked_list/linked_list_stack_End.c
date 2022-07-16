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
void insert_head(int data)
{
	NODE *NN;
	NN=(NODE *)malloc(sizeof(NODE;
	NN->data=data;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else
	{
		NN->add=Head;
		Head=NN;
	}
}
int delete_head()
{
	int val;
	NODE *temp;
	if(Head==NULL)
	{
		return -1;
	}
	else
	{
		temp=Head;
		Head=Head->add;
		temp->add=NULL;
		return temp->data;
	}
}

void main()
{
	int ch,data;
	while(1)
	{
		printf("1.insert at end 2.delete at end 3.insert at head 4.delete at head 5.display 6.exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert data
			scanf("%d",&data);
			insert_end(data);
		}
		else if(ch==2)
		{
			//delete node
			data=delete();
			if(data==-1)
			{
				printf("No nodes");
			}
			else
			{
				printf("%d\n",data);
			}
		}
		else if(ch==3)
		{
//			insert head
			scanf("%d",&data)
			
		}
		else(ch==4)
		{
//			delete from head
		}
		else if(ch==5)
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
