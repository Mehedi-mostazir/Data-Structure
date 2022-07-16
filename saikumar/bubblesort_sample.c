#include<stdio.h>

int main()
{
	int i,j,size,a[100];
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(a[j]>a[i])
			{
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
