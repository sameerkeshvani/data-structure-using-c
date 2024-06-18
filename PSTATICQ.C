#define max 5
int front=-1,rear=-1;
int queue[max];
void insert()
{
 int value;
 printf("Enter a value\n");
 scanf("%d",&value);
 if(rear==max-1)
 {
	printf("Queue is full\n");
 }
 else if(front==-1)
 {
	front=front+1;
	rear=rear+1;
	queue[rear]=value;
 }
 else
 {
	rear=rear+1;
	queue[rear]=value;
 }
}
void delete1()
{
 if(front==max)
 {
	printf("Queue is empty\n");
 }
 else
 {
	front=front+1;
	printf("Element Deleted\n");
 }
}
void display()
{
 int i;
 if(front==max)
 {
	printf("Queue is empty\n");
 }
 for(i=front;i<=rear;i++)
 {
	printf("%d\n",queue[i]);
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