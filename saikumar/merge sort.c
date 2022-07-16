#include<stdio.h>
int *merge(int *a,int n,int *b,int m) 
{
	int i=0,j=0,k=0;
	static int res[100];  
	while(i<n && j<m)  			// 1 , 0
	{
		if(a[i]<b[j]) 
		{
			res[k++]=a[i++];
		}                                       // a[1,2,3,4]    b[6,7,]
												// res[1,2,3,4,5]  									
		else
		{
			res[k++]=b[j++];
		}
	}	
	while(i<n)
	{
		res[k++]=a[i++];
	}
	while(j<m)
	{
		res[k++]=b[j++];
	}
	
	return res;
}

void main()
{
	int a[100],b[100],i,j,n,m,*res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	res=merge(a,n,b,m);
	for(i=0;i<n+m;i++)
	{
		scanf("%d",res[i]);
	}
}
