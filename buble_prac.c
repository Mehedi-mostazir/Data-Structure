#include<stdio.h>
void buble(int *arr,int n)
{
	int i,j,flag,temp;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag== 0)
			break;
	}
}

void main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	buble(arr,n);
		for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}

}
