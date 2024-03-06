#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size,*ptr,temp,index,d=0,flag=0,s;
	printf("ENter size of array");
	scanf("%d",&size);
	ptr=(int *)malloc(sizeof(int)*size);
	printf("Enter array element:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}

//		printf("After sorting array");
//	for(int i=0;i<size;i++)
//	{
//		printf("\n%d",ptr[i]);
//	}

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
				size=size-1;
				//d++;
			}
		}
	}
	printf("Count of similar value is %d",size);
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
	printf("\nENter kth index");
	scanf("%d",&index);
	for(int i=0;i<size;i++)
	{
		if((index-1)==i)
		{
			flag=1;
			s=i;
			break;
		}
	}
	if(flag==1)
	printf("%d",ptr[s]);
	else
	printf("Not present");
	
//	d=index-1;
	
}
