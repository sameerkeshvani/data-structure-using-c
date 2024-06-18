#define max 6
int top=-1;
char a[max];
void insert()
{
 char str;
 printf("Enter a String\n");
 scanf("%s",&str);
 if(top==max-1)
 {
	printf("Stack is full\n");
 }
 else if(top==-1)
 {
	top=top+1;
	a[top]=str;
	printf("String Inserted\n");
 }
 else
 {
	top=top+1;
	a[top]=str;
	printf("String Inserted\n");
 }
}
void reverse()
{
 int temp;
 printf("After Reversing\n");
 for(temp=top;temp>=0;temp--)
 {
	printf("%c\n",a[temp]);
 }
}
void main()
{
 int ch;
 clrscr();
 while(1)
 {
	printf("Choose an Option::\n1.To Insert\n2.To Reverse\n3.To Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: insert();
			break;
		case 2: reverse();
			break;
		case 3: exit(0);
		default:printf("Choose Correct Option\n");
	}
 }
}