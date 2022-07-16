#include<stdio.h>


create new node (NN) with val;
temp=root;
temp1=NULL;
while (temp)
{
	if(val==temp->data)
	{
		printf("already in the tree");
		break;	
	}
	else if(val>temp->data)
	{
		temp1=temp;
		temp=temp->right;	
	}
	else if(val<temp->data)
	{
		temp1=temp;
		temp=temp->left;
	}
}
if temp1->data > val
{
	temp1->left=NN
}
else
{
	temp1->right=NN;
}3
