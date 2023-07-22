// Create a structure student and accept name to search...using function
#include<stdio.h>
#include<string.h>
struct student
{
 int rno;
 char name[20];
 float per;
}s1[100];
int main()
{
 int i,n;
 char nm[20];
 void search(int n,char nm[20]);
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter roll no name per");
  scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
 }
 printf("enter name to search");
 scanf("%s",nm);
 search(n,nm);
}
void search(int n,char nm[20])
{
 int i;
 for(i=0;i<n;i++)
 {
  if(strcmp(s1[i].name,nm)==0)
   break;
 }
 if(i==n)
 {
    printf("\n name is not found");
 }
 else
 {
   printf("\n name is found");
    printf("\n roll=%d",s1[i].rno);
    printf("\n name=%s",s1[i].name);
    printf("\n per=%f",s1[i].per);
  }
}
