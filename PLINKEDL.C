#include<alloc.h>
struct linklist
{
 int data;
 struct linklist *next;
};
typedef struct linklist node;
node *front=NULL, *rear=NULL;
void insertf()
{
 node *new1;
 new1=(node *)malloc(sizeof(node));
 printf("Enter a value\n");
 scanf("%d",&new1->data);
 if(front==NULL)
 {
	front=new1;
	front->next=NULL;
 }
 else
 {
	new1->next=front;
	front=new1;
 }
}
void insertb()
{
 int place;
 node *new1,*temp,*temp1;
 temp=front;
 new1=(node *)malloc(sizeof(node));
 printf("After Which Place You Want to Enter\n");
 scanf("%d",&place);
 printf("Enter a value\n");
 scanf("%d",&new1->data);
 while(temp->data!=place)
 {
	temp=temp->next;
 }
 temp1=temp->next;
 temp->next=new1;
 new1->next=temp1;
}
void insertl()
{
 node *new1,*temp;
 new1=(node *)malloc(sizeof(node));
 printf("Enter a value\n");
 scanf("%d",&new1->data);
 temp=front;
 while(temp->next!=NULL)
 {
	temp=temp->next;
 }
 temp->next=new1;
 new1->next=NULL;
}
void deletef()
{
 node *temp;
 temp=front;
 front=front->next;
 free(temp);
}
void deleteb()
{
 node *temp,*temp1,*temp2;
 int value;
 printf("Which value you want to delete\n");
 scanf("%d",&value);
 temp=front->next;
 temp1=front;
 temp2=temp->next;
 while(temp->data!=value)
 {
	temp=temp->next;
	temp1=temp1->next;
	temp2=temp2->next;
 }
 free(temp);
 temp1->next=temp2;
}
void deletel()
{
 node *temp,*temp1;
 temp=front->next;
 temp1=front;
 while(temp->next!=NULL)
 {
	temp=temp->next;
	temp1=temp1->next;
 }
 free(temp);
 temp1->next=NULL;
}
void display()
{
 node *temp;
 temp=front;
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
  printf("Choose Your Option:\n1.InsertFirst\n2.InsertBetween\n3.InsertLast\n4.DeleteFirst\n5.DeleteBetween\n6.DeleteLast\n7.Display\n8.Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: insertf();
	   break;
   case 2: insertb();
	   break;
   case 3: insertl();
	   break;
   case 4: deletef();
	   break;
   case 5: deleteb();
	   break;
   case 6: deletel();
	   break;
   case 7: display();
	   break;
   case 8: exit(0);
   default: printf("Choose Correct Option\n");
  }
 }
}