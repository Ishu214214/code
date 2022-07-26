//calculator using switch

#include<stdio.h>
int main()
{
   char d;
   double a,b;
   printf(" enter the operator which you want to operate");
   scanf("%c",&d);
   printf("enrtr the number");
   scanf("%lf %lf",&a ,&b);
   
   switch (d)
   {
      case '+':
      printf(" %.lf",a+b);
      break;
      case '-':
      printf(" %.lf",a-b);
      break;
      default :
      printf("error");
      
   }
   return 0;
}