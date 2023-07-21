// Create a structure student and accept number to search and print the message found or not fouund..(with flag)
#include<stdio.h>
struct student
{
 int rno;
 char name[20];
 float per;
}s1[100];
int main()
{
 int i,n,num,flag=0;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter roll no name per");
  scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
 }
 printf("enter number to search");
 scanf("%d",&num);
 for(i=0;i<n;i++)
 {
  if(s1[i].rno==num)
  {
    flag=1;
     break;
  }
 }
 if(flag==1)
 {
  printf("\n record is found");
  printf("\n name=%s",s1[i].name);
  printf("\n per=%f",s1[i].per);
 }
 else
  printf("\n record not found");
}
