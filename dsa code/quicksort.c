#include<stdio.h>

void part1(int a[],int beg,int end,int *loc);
void sort(int a[],int lb,int ub);

int main ()
{

int a[10], i;
for (i=0;i<10;i++)
{
scanf("%d", &a[i]);
}
sort(a,0,9);

printf("\n after sorting");
for(i=0;i<10;i++)
{
 printf("\n %d ",a[i]);
}
return 0;
}


void part1(int a[],int beg,int end,int *loc)
{
         int left,right,temp,f;
         *loc=left=beg;
         right=end;
         f=0;
         while(f==0)
          {
                   while((a[*loc]< a[right])&&(*loc!=right))
                   {
                            ///////change
                           
                           else 
                           {    
                                   if(a[*loc]>a[right])
                                   {
                                	 temp=a[*loc];
	                                 a[*loc]=a[right];
                                	 a[right]=temp;
                                	 *loc=right;
                                	 continue;
                                   }
                                   else
                                   {
                                   right --;
                                   }
                            }
                             
                    }
                    
                    if(*loc==right)
                    {
                                f=1;
                          //      break;
                    }
                 }
                    
                while(f==1)
                   {
                	 while((a[*loc]>=a[left])&&(*loc!=left))
                	 {
                	        
                                 else
                	         {
	                                  if(a[*loc]<a[left])
                                	 {
	                                          temp=a[*loc];
                	                          a[*loc]=a[left];
                	                          a[left]=temp;
                	                          *loc=temp;
                	                          continue;
                                         }
                                         else
                                         {
                                                left++;
                                         }
	                          }
	                          
	                          
	                   }
	                 if(*loc==left)
        	         {
                               	 f=0;  
                        //       	 break;// change
                         }
	           
                   }       
          }
}


void sort(int a[],int lb,int ub)
 {
  int loc=1;
  if(lb<ub)
          {
                   part1(a,lb,ub,&loc);
                   sort(a,lb,loc-1);
                   sort(a,loc+1,ub);
           }
}



