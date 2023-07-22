// Create strcture student and accept num to search using function...
#include<stdio.h>
struct student
{
 int rno;
 char name[20];
 float per;
}s1[100];
int main()
{
 int i,n,num;
 void search(int n,int num);
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter rollno name per");
  scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
 }
 printf("enter num to search");
 scanf("%d",&num);
 search(n,num);
}
void search(int n,int num)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(s1[i].rno==num)
  {
   printf("\n number is found");
   printf("\n roll no=%d",s1[i].rno);
   printf("\n name=%s",s1[i].name);
   printf("\n percentage=%f",s1[i].per);
   break;
  }
 }
  if(i==n)
   printf("\n number is not found");
}
