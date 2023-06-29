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
 int ch,i,n,num;
 char sname[20];
 void accept();
 void dispall();
 void searchbyno();
 void searchbyname();
 void  disp_max_per();
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("enter roll no name per");
   scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
 }
 do
 {
  printf("\n1-accept \n2-display \n3-search number \n4-search name \n5-maximum per");
  printf("enter choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:accept();break;
    case 2:dispall();break;
    case 3:printf("enter number to search");
           scanf("%d",&num);
           searchbyno(num);
           break;
    case 4:printf("enter name to search");
           scanf("%s",sname);
           searchbyname(sname);
           break;
    case 5:disp_max_per();break;
   default:printf("invalid choice");
           break;
  }
 }while(ch<5);
}
void accept()
{
 int n,i;
 for(i=0;i<n;i++)
 {
  printf("enter roll no name percentage");
  scanf("%d%s%f",&s1[i].rno,s1[i].name,&s1[i].per);
 }
}
void dispall()
{
int i,n;
 for(i=0;i<n;i++)
 {
   printf("\n roll no=%d",s1[i].rno);
   printf("\n name=%s",s1[i].name);
   printf("\n per=%f",s1[i].per);
 }
}
void searchbyno()
{
 int flag=0,i,n,num;
 for(i=0;i<n;i++)
 {
  if(s1[i].rno==num)
  {
   flag=1;break;
  }
 }
 if(flag==1)
 {
   printf("\n record is found");
   printf("\n name=%s",s1[i].name);
   printf("\n percentage=%f",s1[i].per);
 }
 else
{
  printf("record not found");
}
}
void searchbyname()
{
 char sname[20];
 int flag=0,i,n;
 for(i=0;i<n;i++)
 {
  if(strcmp(s1[i].name,sname)==0)
  {
   flag=1;break;
  }
 }
 if(flag==0)
  {
    printf("\n record found");
    printf("\n roll no=%d",s1[i].rno);
    printf("\n per=%f",s1[i].per);
  }
  else
  {
    printf("record not found");
  }
}
void disp_max_per()
{
  int i,n,index=0,max=0;
  max=s1[0].per;
  for(i=0;i<n;i++)
  {
    if(s1[i].per>max)
     {
       max=s1[i].per;
       index=i;
     }
  }
  printf("\n roll no=%d",s1[index].rno);
  printf("\n name=%s",s1[index].name);
  printf("\n percentage=%f",s1[index].per);
}
