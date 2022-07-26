#include<stdio.h>

#define MAX 10
void sort(int a[MAX],int beg,int end);
void merge(int a[MAX],int A,int B,int C,int D);

void merge(int a[MAX],int A,int B,int C,int D)
{
	int A1,A2,C1,t[MAX],i;
	A1=A2=A;
	C1=C;
	while((A1<=B)&&(C1<=D))
	{
		if(a[A1]<a[C1])
		{
			t[A2]=a[A1];
			A1++;
		}
		else
		{
			t[A2]=a[C1];
			C1++;
		}
		A2++;
	}
	if(A1>B)
	{
		while(C1<=D)
		{
			t[A2]=a[C1];
			A2++;
			C1++;
		}
	}
	else
	{
		while(A1<=B)
		{
			t[A2]=a[A1];
			A2++;
			A1++;
		}
	}
	for(i=A;i<=D;i++)
	{
		a[i]=t[i];
	}
}

void sort(int a[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		sort(a,beg,mid);
		sort(a,mid+1,end);
		merge(a,beg,mid,mid+1,end);
	}
}
void main()
{
	int a[10],i;
	
	printf("enter the array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,0,9);
	printf("\n After Sorting \n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	
}

