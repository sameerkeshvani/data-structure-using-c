#include<stdio.h>
#include<alloc.h>
#include<conio.h>
struct tree
{
 int data;
 struct tree *left,*right;
};
typedef struct tree tree;
tree *create_tree(tree *node,int x)
{
 if(node==NULL)
 {
	node=(tree*)malloc(sizeof(tree));
	node->data=x;
	node->left=NULL;
	node->right=NULL;
	return node;
 }
 if(x<node->data)
 {
	node->left=create_tree(node->left,x);
 }
 else
 {
	node->right=create_tree(node->right,x);
 }
 return node;
}
void in_order(tree *node)
{
	if(node!=NULL)
	{
		in_order(node->left);
		printf("Value::%d\n",node->data);
		in_order(node->right);
	}
}
void pre_order(tree *node)
{
	if(node!=NULL)
	{
		printf("Value::%d\n",node->data);
		in_order(node->right);
		in_order(node->left);
	}
}
void post_order(tree *node)
{
	if(node!=NULL)
	{
		in_order(node->left);
		in_order(node->right);
		printf("Value::%d\n",node->data);
	}
}
void main()
{
 int x,c;
 tree *node;
 char ch;
 clrscr();
 node=NULL;
 do
 {
  printf("Enter tree node element\n");
  scanf("%d",&x);
  node=create_tree(node,x);
  printf("Want to continue\n");
  fflush(stdin);
  scanf("%c",&ch);
 }
while(ch=='y');
while(1)
{
 printf("Choose your option\n1.In order\n2.Pre order\n3.Post order\n4.Exit\n");
 scanf("%d",&c);
 switch(c)
 {
	case 1:printf("IN ORDER VALUES\n");
	in_order(node);
	break;
	case 2:printf("PRE ORDER VALUES\n");
	pre_order(node);
	break;
	case 3:printf("POST ORDER VALUES\n");
	post_order(node);
	break;
	case 4:exit(0);
 }
 }
 }