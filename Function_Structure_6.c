// Accept n numbers in an array and accept number to search and the number is present in the array or not and op the position ..
#include<stdio.h>
int main()
{
 int a[100],i,n,num,p;
 int search(int a[100],int num,int n);
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter number to search");
 scanf("%d",&num);
 p= search(a,num,n);
  if(p==-1)
    printf("not found");
  else
    printf("number is found=%d",p);
}
int search(int a[100],int num,int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(a[i]==num)
   {
     return i;
   }
 }
 return -1;
}

