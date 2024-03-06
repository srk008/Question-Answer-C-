#include<stdio.h>
struct student
{
   int rno,salary;
   char name[20];	
};
struct student s[5];
int main()
{
  for(int i=0;i<5;i++)
  {
  	printf("Enter student rno salary and name");
  	scanf("%d %d %s",&s[i].rno,&s[i].salary,s[i].name);
  }
  for(int i=0;i<5;i++)
  {
  	printf("\n %d \t %d \t %s",s[i].rno,s[i].salary,s[i].name);
  }
  for(int i=0;i<5;i++)
  {
  	if(s[i].salary>500)
  	{
  		printf("\n%d\t %d \t %s",s[i].rno,s[i].salary,s[i].name);
	  }
  }
}
