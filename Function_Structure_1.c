// Create a structure student ..using function
#include<stdio.h>
struct student
{
 int rno;
 char name[20];
 float per;
}s1[100];
int main()
{
 int i,n;
 void disp(int n);
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter rollno name per");
  scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
 }
 disp(n);
}
void disp(int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("\n roll no=%d",s1[i].rno);
  printf("\n name=%s",s1[i].name);
  printf("\n per=%f",s1[i].per);
 }
}
