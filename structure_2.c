// Create a structure student and accept class and that class display information...
#include<stdio.h>
#include<string.h>
struct student
{
 int rno;
 char name[20];
 float per;
 char sclass[20];
}s1[100];
int main()
{
 int i,n;
 char cls[20];
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter roll no name per sclass");
  scanf("%d%s%f%s",&s1[i].rno,s1[i].name,&s1[i].per,s1[i].sclass);
 }
 printf("enter cls");
 scanf("%s",cls);
 for(i=0;i<n;i++)
 {
  if(strcmp(s1[i].sclass,cls)==0)
  {
   printf("\n roll no=%d",s1[i].rno);
   printf("\n name=%s",s1[i].name);
   printf("\n classs=%s",s1[i].sclass);
   printf("\n per=%f",s1[i].per);
  }
 }
}
