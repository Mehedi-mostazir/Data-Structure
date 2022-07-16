#include<stdio.h>

int binary_search(int *a,int size,int se)
{
	int L=0, H=size-1, M=(L+H)/2,x=0;
	
	while(L<=H)
	{
		if(se==a[M])
		{
			return 1;
			x=1;
			break;
		}		
		if(se>a[M])
		{
			L=M+1;
			M=(L+H)/2;
		}
		if(se<a[M])
		{
			H=M-1;
			M=(L+H)/2;
		}
	}
	if(x==0)
	{
		return 0;
	}
		
}

int main()
{
	int size,se,i;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	
	if(binary_search(a,size,se))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	
	return 0;
}
