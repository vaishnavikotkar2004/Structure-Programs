#include<stdio.h>
#include<ctype.h>
struct employe
{
 int eno;
 char ename[20];
 float sal;
}e1[100];
int main()
{
 int i;
 for(i=0;i<1;i++)
 {
  printf("enter employe number emp name emp salary");
  scanf("%d%s%f",&e1[i].eno,e1[i].ename,&e1[i].sal);
 }
 for(i=0;i<1;i++)
 {
  printf("\n emp no=%d",e1[i].eno);
  printf("\n emp name=%s",e1[i].ename);
  printf("\n emp salary=%f",e1[i].sal);
  }
}
