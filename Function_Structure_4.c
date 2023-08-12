// create a structure student.accept  student info. calculate total,per & display..
#include<stdio.h>
struct student
{
 int rno;
 char name[20];
 int m1[6];
}s1;
int main()
{
 int t=0,i;
 float p;
 int disp(int t,float p);
 printf("enter roll no name");
 scanf("%d%s",&s1.rno,s1.name);
 printf("enter 6 subject marks");
 for(i=0;i<6;i++)
 scanf("%d",&s1.m1[i]);
 disp(t,p);
}
int disp(int t,float p)
{
 int i;
 for(i=0;i<6;i++)
 t=t+s1.m1[i];
 p=t/6;
 printf("\n roll no=%d",s1.rno);
 printf("\n name=%s",s1.name);
 printf("\n total marks=%d",t);
 printf("\n per=%f",p);
} 
