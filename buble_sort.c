#include<stdio.h>

void buble_sort(int *arr,int n)
{
	int i,j,temp,flag;
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
		 if(flag==0)
		 	break;
	 }
	
}


void main()
{
	int i,n,arr[100],d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	buble_sort(arr,n);
	for(i=0;i<n;i++)
	{
	
	printf("%d ",arr[i]);
    }
}


