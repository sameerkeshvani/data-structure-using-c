#define max 5
int top=-1;
int stack[max];
void insert()
{
 int value;
 printf("Enter Value\n");
 scanf("%d",&value);
 if(top==max-1)
 {
	printf("Stack is Full\n");
 }
 else
 {
	top=top+1;
	stack[top]=value;
	printf("Value Inserted\n");
 }
}
void delete1()
{
 if(top==-1)
 {
	printf("Stack is empty\n");
 }
 else
 {
	top=top-1;
	printf("Element Deleted\n");
 }
}
void display()
{
 int i;
 if(top==-1)
 {
	printf("Stack is empty\n");
 }
 for(i=top;i>=0;i--)
 {
	printf("%d\n",stack[i]);
 }
}
void main()
{
 int ch;
 clrscr();
 while(1)
 {
  printf("Choose Your Option:\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: insert();
	   break;
   case 2: delete1();
	   break;
   case 3: display();
	   break;
   case 4: exit(0);
   default: printf("Choose Correct Option\n");
  }
 }
}