#include<stdio.h>

int binary_search(int *arr,int L,int H,int se)
{
	int M;
	if(L>H)
	{
		return 0;
	}
	
	if(se==arr[M])
	{
		return 1;
	}
	else if(se>arr[M])
	{
		L=M+1;
	}
	else if(se<arr[M])
	{
		H=M-1;
	}
	M=(L+H)/2;
	
}


int main()
{
	int arr[100],size,se,i;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	if(binary_search(arr,0,size-1,se))
	{
		printf("true");
	}
	else
	{
		printf("false"); 
	}
	
	return 0;
}
