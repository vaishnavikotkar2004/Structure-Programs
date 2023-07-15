// Create a structure person(pname,addreass,bdate(dd,mm,yy).Accept the details for person and display...(use nested structure of bdate)
#include<stdio.h>
#include<string.h>
struct person
{
char pname[20];
char address[20];
struct bdate
{
int dd,mm,yy;
}b1;
}p1[100];
int main()
{
  int i,n;
  printf("enter limit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   printf("enter person name address birthdate");
   scanf("%s%s%d%d%d",p1[i].pname,p1[i].address,&p1[i].b1.dd,&p1[i].b1.mm,&p1[i].b1.yy);
  }
  for(i=0;i<n;i++)
  {
    printf("\n person name=%s",p1[i].pname);
    printf("\n person address=%s",p1[i].address);
    printf("\n birthday=%d-%d-%d",p1[i].b1.dd,p1[i].b1.mm,p1[i].b1.yy);
  }
}
