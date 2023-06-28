#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct student
{
 int rno;
 char sname[20];
}s1;
int main()
{
 void abc(struct student s1);
printf("roll no name");
scanf("%d%s",&s1.rno,s1.sname);
abc(s1);
void abc(struct student s1)
{
printf("\n roll no=%d",s1.rno);
printf("\n name=%s",s1.sname);
}
