#include<stdio.h>
int main()
{
    int a[2][2] ,b[2][2] ,c[2][2] ,i,j;
    printf("\nenter the one array");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d/t/n",&a[i][j]);
    printf("\n the second arrar are");
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    scanf("%d",&b[i][j]);
    // now sum of two number
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    c[i][j] = a[i][j] + b[i][j] ;
    for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    printf(" %d\n the sum of two array are",c[i][j]);
    return 0;
}