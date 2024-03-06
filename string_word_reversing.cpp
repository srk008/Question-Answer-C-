#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],m[20],i,j,k,d=0,count=1;
	int len;
	printf("Enter any string ");
	gets(s);
	len=strlen(s);
	for(int i=0;i<=len;i++)
	{
		if(s[i]==' ')
		{
			s[i]='\0';
			count++;
		}
	}
	printf("\nNumber of words are %d",count);
	for(int i=0;i<=len;i++)
	{
		if(s[i]=='\0')
		{
			for(j=i-1,k=0;j>=d,k<=len;j--,k++)
			{
				m[k]=s[j];
			}
		}
		d=i;
	//	printf("\n%s",m);
	}
	m[k]='\0';
	printf("%s",m);
}
