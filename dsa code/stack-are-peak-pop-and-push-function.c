// we are creating the program of stack in c
//stack are peak pop and push function 
//using the switch case 
#include<stdio.h>
void pop();
void peak();
void push();
int top=-1;
int opt,n;
int a[10];
int is_empty();
int main()
{

do
{
    printf("\n the options ");
scanf("%d",&opt);
    printf("\n 1.peak   2.push   3.pop ");
    switch(opt)
    {
        case 1:
        peak();break;
        case 2 :
        push(); break;
        case 3:
        pop(); break;
        case 4:
        break;
        default:
        printf("\n enter the correct number");
    }

}while(opt!=4);
return 0;
}
void push()
{
 if(top==9)
 {
     printf("\n full");
 }
 else 
 {
     top++;
  printf("enter the element");
  scanf("%d",&a[top]);
 }
}

int is_empty()
{
    if(top==-1)
    {
        return 1;
    }
    else 
{
    return 0;
}
}

void pop()
{
    if(is_empty()==1)
    {
        printf("\n empty");
    }
    else 
    {
       printf("\n %d is element",a[top]);
       top--;
    }

}

void peak()
{
     if(is_empty()==1)
    {
        printf("\n empty");
    }
    else 
    {
       printf("\n %d is element",a[top]);

   }
}