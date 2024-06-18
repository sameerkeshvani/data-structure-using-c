void bubble_sort(int a[], int n)
{
 int i,j,temp;
 for(i=0;i<n;i++)
 {
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
 }
}
void main()
{
 int a[10],i;
 clrscr();
 for(i=0;i<10;i++)
 {
	printf("Enter a[%d]::",i+1);
	scanf("%d",&a[i]);
 }
 bubble_sort(a,10);
 for(i=0;i<10;i++)
 {
	printf("Value at a[%d]::%d\n",i+1,a[i]);
 }
 getch();
		}