#include<alloc.h>
struct stack
{
 int data;
 struct stack *next;
};
typedef struct stack node;
node *top;
void insert()
{
 node *new1;
 new1=(node *)malloc(sizeof(node));
 printf("Enter a value\n");
 scanf("%d",&new1->data);
 new1->next=NULL;
 new1->next=top;
 top=new1;
 printf("Element Inserted\n");
}
void delete1()
{
 node *temp;
 temp=top;
 if(top==NULL)
 {
	printf("Stack is Underflow\n");
 }
 else
 {
	top=top->next;
	free(temp);
	printf("Element deleted\n");
 }
}
void display()
{
 node *temp;
 temp=top;
 if(top==NULL)
 {
	printf("Stack is empty\n");
 }
 while(temp->next!=NULL)
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