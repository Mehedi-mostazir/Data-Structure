/*
44 33 22 66 77 32 88 65 55 34
*/

int insertion_sort(int *a,int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=i-1;j<size;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
						
			}	
		}	
	}	
}

int main()
{
	int size,a[100],i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&size);
	}
	insertion_sort(a,size);
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
}
