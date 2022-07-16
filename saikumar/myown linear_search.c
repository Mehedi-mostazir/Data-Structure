#include<stdio.h>

int linear_search(int *a,int size,int se)
{
	int i,flag=0;
	for(i=0;i<size;i++)
	{
		if(se==a[i])
		{
			return 1;
			flag=1;
			break;
		}
		
	}
	if(flag==0)
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
	if(linear_search(a,size,se))
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

return 0;
 }
