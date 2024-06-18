int binary_search(int a[], int n, int x)
{
 int low=0,mid,high=n-1,flag=1;
 while(low<=high)
 {
	mid=(low+high)/2;
	if(x<a[mid])
		high=mid-1;
	else if(x>a[mid])
		low=mid+1;
	else if(x==a[mid])
		return 0;
 }
 return flag;
}
void main()
{
 int i,value,a[10],j;
 clrscr();
 printf("Enter Values\n");
 for(i=0;i<10;i++)
 {
	scanf("%d",&a[i]);
 }
 printf("Enter search value\n");
 scanf("%d",&value);
 j=binary_search(a,10,value);
 if(j==0)
 {
	printf("Found It\n");
 }
 else
 {
	printf("Not Available\n");
 }
 getch();
}