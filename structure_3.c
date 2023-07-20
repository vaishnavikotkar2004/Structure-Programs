// student structure student and accept  no. to search and found or not found sms...(without flag) 
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
    printf("\n found...");
    printf("\n roll no=%d",s1[i].rno);
    printf("\n name=%s",s1[i].name);
    printf("\n per=%f",s1[i].per);
    break;
  }
 }
 if(i==n)
   printf("\n not found..");
}
