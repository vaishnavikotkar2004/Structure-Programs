// create a structure student(rno,name,percentage).accept student information and display.
#include<stdio.h>
struct student
{
  int rno;
  char name[20];
  float per;
}s1;
int main()
{
 printf("enter roll no name per");
 scanf("%d%s%f",&s1.rno,s1.name,&s1.per);
 printf("\n roll number=%d",s1.rno);
 printf("\n name=%s",s1.name);
 printf("\n percentage=%f",s1.per);
}
