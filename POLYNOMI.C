#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int a[10],n,i,x,e;
 clrscr();

 printf("Enter the degree of polynomial\n");
 scanf("%d",&n);
 for(i=n;i>=0;i--)
 {
	printf("Coefficient A[%d]::\t",i);
	scanf("%d",&a[i]);
 }
 printf("Entered Polynomial is\n");
 for(i=n;i>=0;i--)
 {
	if(a[i]!=0)
	{
		printf("%dx^%d+",a[i],i);
	}
	else
	{
		printf("%d\n",a[i]);
	}
 }
 printf("\nEnter the value of x\n");
 scanf("%d",&x);
 e=eval(a,n,x);
 printf("Evaluation of polynomial is %d",e);
 getch();
}
int eval(int a[],int n, int x)
{
	int sum=0,i;
	for(i=n;i>=0;i--)
	{
		sum=sum+a[i]*pow(x,i);
	}
	return sum;
}