// Create a structure student and accept n student information...
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
 printf("ente limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter roll no name percentage");
  scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
 }
 for(i=0;i<n;i++)
 {
  printf("\n roll no=%d",s1[i].rno);
  printf("\n name=%s",s1[i].name);
  printf("\n persentage=%f",s1[i].per);
 }
}
