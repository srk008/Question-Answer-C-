#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,*ptr,temp,index,d;
	printf("ENter size of array");
	scanf("%d",&size);
	ptr=(int *)malloc(sizeof(int)*size);
	printf("Enter array element:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ptr[i]>ptr[j])
			{
			   temp=ptr[i];
			   ptr[i]=ptr[j];
			   ptr[j]=temp;	
			}
		}
	}
		printf("After sorting array");
	for(int i=0;i<size;i++)
	{
		printf("\n%d",ptr[i]);
	}

	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ptr[i]==ptr[j])
			{
				for(int k=i;k<size;k++)
				{
					ptr[i]=ptr[k];
				}
				size--;
			}
		}
	}
		printf("After sorting array");
	for(int i=0;i<size;i++)
	{
		printf("\n%d",ptr[i]);
	}
	printf("\nENter kth index");
	scanf("%d",&index);
//	d=index-1;
	printf("\n Kth smallest inndex is %d ",ptr[index-1]);
}
