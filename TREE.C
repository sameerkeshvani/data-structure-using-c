#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct tree
{
	int data;
	struct tree *left,*right;
};
typedef struct tree tree;
tree * create_tree(tree *node,int x)
{
	if(node == NULL)
	{
		node =(tree *)malloc(sizeof(tree));
		node->data=x;
		node->left = NULL;
		node->right = NULL;
		return node;
	}
	if(x <= node->data)
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
		printf("\nValue :: %d",node->data);
		in_order(node->right);
	}
}
void pre_order(tree *node)
{
	if(node!=NULL)
	{
		printf("\nValue :: %d",node->data);
		in_order(node->left);
		in_order(node->right);
	}

}
void post_order(tree *node)
{
	if(node!=NULL)
	{
		in_order(node->left);
		in_order(node->right);
		printf("\nValue :: %d",node->data);
	}

}
void main()
{
	tree *node;
	int x;
	char ch;
	clrscr();
	node=NULL;
	do
	{
		printf("Enter Tree Node Element :: ");
		scanf("%d",&x);
		node=create_tree(node,x);
		printf("Want to Continue..............");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='y');
	printf("\n\n\t\t..................Tree..................");
	printf("\n\n\t\t\t........In Order........");
	in_order(node);
	printf("\n\n\t\t\t........Pre Order........");
	pre_order(node);
	printf("\n\n\t\t\t........post Order........");
	post_order(node);


	getch();
}