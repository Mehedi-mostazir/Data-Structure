#include<stdio.h>

int linear_search(int *arr,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)
		{
			return 1;
		}
	}
	return 0;	
}

void main()
{
	int size,arr[100],i,se;
	scanf("%d",&size);
	for(i=0;i<size;i++);
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	if(linear_search(arr,size,se))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	
}
