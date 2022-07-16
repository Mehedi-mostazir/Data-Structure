#include<stdio.h>

int b_search(int *arr,int L,int H, int se)
{
	int M,count=0;
	if(L>H)
	{
		return 0;
	}
	M=(L+H)/2;
	while(L<M)
	{
		if(se==arr[M])
		{
			return 1;
		}
		else if(L>M)
		{
			L=M+1;
			M=(L+H)/2;
		}
		else if(L<M)
		{
			H=M-1;
			M=(L+H)/2;
		}
		count++;	
	}
	printf("%d ",count);
	
}

int main()
{
	int arr[100],i,se,size;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	if(b_search(arr,0,size-1,se))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	
	return 0;
}
