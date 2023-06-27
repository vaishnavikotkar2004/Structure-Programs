// accept n employee(eno,name,salary) information and accept employe number to search record.
#include<stdio.h>
struct employee
{
 int eno;
 char name[20];
 float sal;
}e1[100];
int main()
{
 int n,i,num,flag=0;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("enter emp no name salary");
   scanf("%d%s%f",&e1[i].eno,e1[i].name,&e1[i].sal);
  }
  printf("\n enter number to search record");
  scanf("%d",&num);
  for(i=0;i<n;i++)
  {
    if(e1[i].eno==num)
     {
       flag=1;break;
     }
   }
   if(flag==1)
    {
      printf("\n record found");
      printf("\n emp no=%d",e1[i].eno);
      printf("\n emp name=%s",e1[i].name);
      printf("\n emp salary=%f",e1[i].sal);
    }
}
