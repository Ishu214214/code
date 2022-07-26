#include<stdio.h>

typedef struct t
{
int data;
struct t *left;
struct t *right;
}tree;
tree *root;

void create(void)
{
root=NULL;
}

tree *insert(tree *p,int item)
{
if(p==NULL)
{
p=(tree*)malloc(sizeof(tree));
p->left=NULL;
p->right=NULL;
p->data=item;
}
else
{	if(item<p->data)
	{
		p->left=insert(p->left,item);
	}
	else
	{
		if(item>p->data)
		{
			p->right=insert(p->right,item);
		}
		else if(item==p->data)
		{
			printf("Duplicate!!");
		}
	}
}
return(p);
}

tree * delete1(tree *t,int num)
{
	int f=0 ,p=0;
	tree *parent,*x,*xsucc,*pos;
	if(t==NULL)
	{
		printf("Empty");
		return t;
	}
		parent=NULL;
		x=NULL;
		pos=t;
		while(pos!=NULL)
		{
			if(pos->data==num)
			{
				f=1;
				x=pos;
				break;
			}
			else
			{
				if(pos->data>num)
				{
					parent=pos;
					pos=pos->left;
				}
				else
				{
					parent=pos;
					pos=pos->right;
				}
			}
		}
		if(f!=1)
		{
			printf("element not found");
			return t;
		}
		else
		{
			if(x->left==NULL && x->right==NULL)
			{
				if(parent->right==x)
				parent->right=NULL;
				else
				parent->left=NULL;
			}
			if(x->left==NULL && x->right!=NULL)
			{
				if(parent->left==x)
				parent->left=x->right;
				else
				parent->right=x->right;
			}
			if(x->left!=NULL && x->right==NULL)
			{
				if(parent->right==x)
				parent->right=x->left;
				else
				parent->left=x->left;
			}
			if(x->left!=NULL && x->right!=NULL)
			{
				parent=x;
				xsucc=x->right;
				while(xsucc->left!=NULL)
				{
					parent=xsucc;
					xsucc=xsucc->left;
					////
					if(xsucc->left==NULL)
					{
						p=1;
					}
					/////
				}
				x->data=xsucc->data;
				////
				if(p==1)
				parent->left=NULL;
			}
		}
		return t;

}
void inorder(tree *q)
{       if(q!=NULL)
	{
		inorder(q->left);
		printf(" %d ",q->data);
		inorder(q->right);
	}
}
void preorder(tree *t)
{       if(t!=NULL)
	{
		printf(" %d ",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}
void postorder(tree *t)
{       if(t!=NULL)
	{
		postorder(t->left);
		postorder(t->right);
		printf(" %d ",t->data);
	}
}

void main()
{
int ch,m,a,b;
create();

do
{
printf("\n\nMENU : ");
printf("\n1.Insertion. ");
printf("\n2.Deletion. ");
printf("\n3.Inorder Traversal. ");
printf("\n4.Preorder Traversal. ");
printf("\n5.Postorder Traversal. ");
printf("\n6.Exit.");
printf("\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\nenter the value :");
	scanf("%d",&a);
	root=insert(root,a);
	//printf("\nValue inserted : %d",->data);
	break;
case 2: printf("\nenter the value to be deleted:");
	scanf("%d",&b);
	root=delete1(root,b);
	break;
case 3: inorder(root);
	break;
case 4: preorder(root);
	break;
case 5: postorder(root);
	break;
case 6:break;
default:printf("wrong choice!!!");
	break;
}
}while(ch!=6);
}
