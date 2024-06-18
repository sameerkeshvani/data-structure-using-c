void main()
{
 int a[10],i,search,temp=0;
 clrscr();
 for(i=0;i<10;i++)
 {
	printf("Enter a[%d]\n",i);
	scanf("%d",&a[i]);
 }
 printf("Enter searching element\n");
 scanf("%d",&search);
 for(i=0;i<10;i++)
 {
	if(a[i]==search)
	{
		temp=1;
		break;
	}
 }
 {
 if(temp==1)
 {
	printf("Value found at %d\n",i);
 }
 else
 {
	printf("%d is not available\n",search);
 }
 }
 getch();
}