#include<stdio.h>
int main()
{
	for(int i=0;i<=5;i++)
	{
		for(int j=0;j<=9;j++){
			if(j<=4+i && j>=6-i){
				printf("*");
			}
		}
		printf("\n");
	}
}
