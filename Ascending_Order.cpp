#include<stdio.h>
int main()
{
	int size,num,count,temp,t,result,digit,i;
	printf("Enter array size:");
	scanf("%d",&size);
	int a[size];
	printf("ENter array number ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<size;i++)
	{
		num=a[i];
		temp=num;
		count=0;
		while(num!=0)
		{
			count++;
			num=num/10;	
		}
		num=temp;
		int b[count];
		for(int i=0;i<count;i++)
		{
			digit=num%10;
			b[i]=digit;
			num=num/10;
		}
		for(int i=0;i<count;i++)
		{
			for(int j=i+1;j<count;j++)
			{
				if(b[i]>b[j])
				{
					t=b[i];
					b[i]=b[j];
					b[j]=b[i];
				}
			}
		}
		result=0;
		for(int i=0;i<count;i++)
		{
			result=result*10+b[i];
			
		}
	//	printf("\nAfter sorting number become is %d ",result);
		a[i]=result;
	}
	for(int i=0;i<size;i++)
	{
		printf("\n%d",a[i]);
	}
}
