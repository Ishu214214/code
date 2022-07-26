//#include<iostream.h>
//#include<iostream>
#include<stdio.h>
//queaqu program using switch case
void enqueaqu();
void dequeaqu();
void reset();
int r,f;
int opt,a[10];
int main()
{
    r=-1;
    f=-1;
  printf("\n 1.enqueaq   \t 2. dequeaq");
  printf("Enter the number");
  scanf("%d",&opt);
  do
  {
     switch(opt)
     {
           case 1:
             enqueaqu();break;
             case 2:
             dequeaqu();break;
             case 3:
             break;
             default:
             printf("\n enter the number");break;
             
     }   
 }while(opt!=3);
    return 0;
}
void enqueaqu()
{
if(r==9)
{
  printf("\n over flow");
  reset();
}
else
{
  printf("\n under flow");
  r++;
  printf("\n enter the element");
  scanf("%d",&a[r]);
}
}

void dequeaqu()
{
if(f==-1)
{
  printf("\n under flow");
}
else 
{
  printf("\n enter the ekement");
  f++;
  scanf("%d",&a[f]);
}
}

void reset()
{
      if(f==9 && r==9)
      {
        r=-1;
        f=-1;
      }
}