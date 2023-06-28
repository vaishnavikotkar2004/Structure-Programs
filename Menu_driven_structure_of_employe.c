#include<stdio.h>
#include<string.h>
struct employe
{
 int eno;
 char ename[20];
 float sal;
}e1[100];
int main()
{
 int n,i,ch;
 char name[20];
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("enter eno name salary");
   scanf("%d%s%f",&e1[i].eno,e1[i].ename,&e1[i].sal);
 }
 do
 {
   printf("\n 1=disp all \n 2-search to name");
   printf("enter choice");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1 : for(i=0;i<n;i++)
              {
                printf("\n emp no=%d",e1[i].eno);
                printf("\n emp name=%s",e1[i].ename);
                printf("\n emp sal=%f",e1[i].sal);
              }
              break;
    case 2 : printf("enter name to search");
             scanf("%s",name);
             for(i=0;i<n;i++)
             {
              if(strcmp(e1[i].ename,name)==0)
              {
                 printf("\n emp no=%d",e1[i].eno);
                 printf("\n emp name=%s",e1[i].ename);
                 printf("\n emp sal=%f",e1[i].sal);
               }
             }
             if(i==n)
              printf("invalid name");
             break;
  default : printf("invalid choice");
            break;
   }
 }while(ch<3);
}
