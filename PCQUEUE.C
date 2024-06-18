#include<alloc.h>
struct queue
{
 int data;
 struct queue *next;
};
typedef struct queue node;
node *front=NULL, *rear=NULL;
void insert()
{
 node *new1;
 new1=(node *)malloc(sizeof(node));
 printf("Enter a Value\n");
 scanf("%d",&new1->data);
 if(front==NULL)
 {
	front=new1;
	rear=new1;
 }
 new1->next=front;
 rear->next=new1;
 rear=new1;
}
void delete1()
{
 node *temp;
 temp=front;
 if(front==NULL)
 {
	printf("Queue is empty\n");
 }
 else
 {
	front=front->next;
	rear->next=front;
	free(temp);
	printf("Element Deleted\n");
 }
}
void display()
{
 node *temp;
 temp=front;
 if(front==NULL)
 {
	printf("Queue is empty\n");
 }
 while(temp->next!=front)
 {
	printf("%d->",temp->data);
	temp=temp->next;
 }
 printf("%d\n",temp->data);
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