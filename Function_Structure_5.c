// create a structure book..accept details of book calculate total and display details of book..
#include<stdio.h>
struct book
{
 int bno,qty;
 char bname[20];
 float rate,total;
}b1;
int main()
{
 int disp();
 printf("enter book no quantity book name rate ");
 scanf("%d%d%s%f",&b1.bno,&b1.qty,b1.bname,&b1.rate);
 b1.total=b1.qty*b1.rate;
 disp();
}
int disp()
{
 printf("\n book no=%d",b1.bno);
 printf("\n book qty=%d",b1.qty);
 printf("\n book name=%s",b1.bname);
 printf("\n book rate=%f",b1.rate);
 printf("\n total=%f",b1.total);
}
