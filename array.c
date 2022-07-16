#include<stdio.h>
void main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
//	for(i=0;i<n;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
	printf("%d  \n %d",arr,&n);
	
}

