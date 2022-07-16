//Queue operations
#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,*queue,size;
void enqueue(int val)
{
	if(rear==size-1)
	{
		printf("Queue is overflow\n");
	}
	else
	{
		if(front==-1 && rear==-1)
		{
			front=0;
		}
		queue[++rear]=val;
	}
}
int dequeu()
{
	int val;
	if(front==-1 && rear==-1)
	{
		return -1;
	}
	if(front==rear)
	{
		val=queue[front];
		queue[front]=0;
		front=-1;
		rear=-1;
		return val;
	}
	val=queue[front];
	queue[front++]=0;
	return val;
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("Queue is underflow\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}
		printf("\n");
	}
}
void main()
{
	int ch,val;
	scanf("%d",&size);
	queue=(int *)calloc(size*sizeof(int));
	while(1)
	{
		printf("1.enqueue 2.dequeu 3.display 4.exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&val);
			enqueue(val);
		}
		else if(ch==2)
		{
			val=dequeue();
			if(val==-1)
			{
				printf("Queue is underflow\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(ch==3)
		{
			display();
		}
		else
		{
			break;
		}
	}
}