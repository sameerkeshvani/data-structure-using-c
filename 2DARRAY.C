void main()
{
 int a[5],b[5],c[5],i,j,l;
 clrscr();
 printf("Enter 1st Array\n");
 for(i=0;i<5;i++)
 {
	scanf("%d",&a[i]);
 }
 printf("Enter 2nd Array\n");
 for(i=0;i<5;i++)
 {
	scanf("%d",&b[i]);
 }
 printf("Addition of Array::\n");
 for(i=0;i<5;i++)
 {
	c[i]=a[i]+b[i];
	printf("%d\n",c[i]);
 }
 getch();
}