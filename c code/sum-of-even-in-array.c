#include<stdio.h>
int main()
{
    int i,sumeven,sumodd;
    int a[5]={1,2,3,4,5};
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            sumeven = sumeven +a[i]  ;

        }
        else
        {
            sumodd = sumodd + a[i] ;
        }
    } 
    printf("\n the even sum is %d",sumeven);
    printf("\n the sum of odd is %d",sumodd);



    return 0;
}