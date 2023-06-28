#include<stdio.h>
#include<string.h>
struct item
{
 int code;
 char name[20];
 float price;
}e1[100];
int main()
{
 int i,n;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("enter code name price");
  scanf("%d%s%f",&e1[i].code,e1[i].name,&e1[i].price);
 }
 for(i=0;i<n;i++)
 {
  printf("\n item code=%d",e1[i].code);
  printf("\n item name=%s",e1[i].name);
  printf("\n item price=%f",e1[i].price);
 }
}
