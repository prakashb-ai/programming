#include<stdio.h>
#include<stdlib.h>
#define max(a,b) (a>b) ? a:b
typedef struct bst{
	int info;
	struct bst *left,*right;
}bst;

bst *root=NULL;
bst *insert(bst *p,int item)
{
	bst *nw;
	nw=(bst*)malloc(sizeof(bst));
	nw->info=item;
	nw->left=nw->right=NULL;
	if(p==NULL)
		p=nw;
	else if(item<p->info)
		p->left=insert(p->left,item);
	else
		p->right=insert(p->right,item);
	return p;
}
void insert_nr(int item)
{
	bst *nw,*p1,*p2;
	nw=(bst*)malloc(sizeof(bst));
	nw->info=item;
	nw->left=nw->right=NULL;
	if(root==NULL)
		root=nw;
	else
	{
		for(p2=root;p2;)
		{
			if(item<p2->info)
			{
				p1=p2;
				p2=p2->left;
			}
			else
			{
				p1=p2;
				p2=p2->right;
			}
		}
		if(item<p1->info)//if the node is left child of its parent
			p1->left=nw;
		else//if the node is right child of its parent
			p1->right=nw;
	}
}
int search(bst *p,int item)
{
	int l=0;
	while(p)
	{
		if(item==p->info)
			return l;
		else if(item<p->info)
			p=p->left;
		else
			p=p->right;
		l++;
	}
	return -1;
}

void delet(int item)
{
	bst *p1,*p2,*p3;
	for(p2=root;p2 && item!=p2->info;)
	{
		if(item<p2->info)
		{
			p1=p2;
			p2=p2->left;
		}
		else
		{
			p1=p2;
			p2=p2->right;
		}
	}
	if(p2==NULL)//if item not found
	{
		printf("%d not found",item);
	}
	else if(p2->left==NULL && p2->right==NULL)//if it is a leaf node
	{
		if(p2->info<p1->info)//if the node is left child of its parent
			p1->left=NULL;
		else//if the node is right child of its parent
			p1->right=NULL;
	}
	else if(p2->left && p2->right==NULL)//node has only left child
	{
		if(p2->info<p1->info)//if the node is left child of its parent
			p1->left=p2->left;
		else//if the node is right child of its parent
			p1->right=p2->left;
	}
	else if(p2->left==NULL && p2->right)//node has only right child
	{
		if(p2->info<p1->info)//if the node is left child of its parent
			p1->left=p2->right;
		else//if the node is right child of its parent
			p1->right=p2->right;
	}
	else//if it has two children
	{
		if(p2==root)
		{
			for(p3=p2->right;p3->left;p3=p3->left);//p3 move to the smallest number in right sub tree of p2
			p3->left=p2->left;
			root=p2->right;
		}
		else
		{
			for(p3=p2->right;p3->left;p3=p3->left);//p3 move to the smallest number in right sub tree of p2
			p3->left=p2->left;
			if(p2->info<p1->info)//if the node is left child of its parent
				p1->left=p2->right;
			else//if the node is right child of its parent
				p1->right=p2->right;
		}
	}
	free(p2);
}
void preorder(bst *p)
{
	if(p==NULL)
		return;
	printf("%d\t",p->info);
	preorder(p->left);
	preorder(p->right);
}
void inorder(bst *p)
{
	if(p==NULL)
		return;
	inorder(p->left);
	printf("%d\t",p->info);
	inorder(p->right);
}
void postorder(bst *p)
{
	if(p==NULL)
		return;
	postorder(p->left);
	postorder(p->right);
	printf("%d\t",p->info);
	
}
void print(bst *p, int l)
{
	int i;
	if(p==NULL)
		return;
	print(p->right,l+1);
		for(i=0;i<l;i++) printf("\t");
	printf("%d\n",p->info);
	print(p->left,l+1);
	
}
int smallest(bst *p)
{
	if(p==NULL)
		return-1;
	else if(p->left==NULL)
		return p->info;
	else
		smallest(p->left);
}
int count(bst *p)
{
	if(p==NULL)
	 return 0;
	else
		return (count(p->left)+count(p->right)+1);
}
int count_leaf(bst *p)
{
	if(p==NULL)
	 return 0;
	else if(p->left==NULL && p->right==NULL)
		return 1;
	else
		return (count_leaf(p->left)+count_leaf(p->right));
}
int count_nleaf(bst *p)
{
	if(p==NULL || (p->left==NULL && p->right==NULL))
	 return 0;
	else
		return (count_nleaf(p->left)+count_nleaf(p->right)+1);
}
int height(bst * p)
{
	int l,r;
	if(p==NULL)
		return 0;
	else
	{
		l=height(p->left);
		r=height(p->right);
		if(l>r)
			return(l+1);
		else
			return(r+1);
	}
}
void mirror(bst *p)
{
	bst *t;
	if(p)
	{
		mirror(p->left);
		mirror(p->right);
		t=p->left;
		p->left=p->right;
		p->right=t;
	}
}
main()
{
	//bst *root=NULL;
	int n,i,item,l,op,s,c;
	do
	{
		printf("\n1.insert");
		printf("\n2.delete");
		printf("\n3.preopder");
		printf("\n4.inorder");
		printf("\n5.postorder");
		printf("\n6.search");
		printf("\n7.smallest");
		printf("\n8.height");
		printf("\n9.count");
		printf("\nenter option \n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("enter nodes to insert : ");
				scanf("%d",&item);
				insert_nr(item);
				//root=insert(root,item);
				break;
			case 2:
				printf("enter nodes to delete : ");
				scanf("%d",&item);
				delet(item);
				break;
			case 3:
				printf("nodes are :\n");
				preorder(root);
				break;
			case 4:
				printf("nodes are :\n");
				inorder(root);
				printf("tree is :\n");
				
				print(root,0);
				break;
			case 5:
				printf("nodes are :\n");
				postorder(root);
				printf("mirror img is :\n");
				mirror(root);
				print(root,0);
			
				break;
			case 6:
				printf("enter nodes to search : ");
				scanf("%d",&item);
				l=search(root,item);
				if(l==-1)
					printf("%d is not found",item);
				else
					printf("%d is found at level %d",item,l);
				break;
			case 7:
				s=smallest(root);
				if(s==-1)
					printf("no node\n");
				else 
					printf("smallest is %d",s);
				break;
			case 8:
				printf("\nheight = %d",height(root));
			case 9:
				printf("\ntotal nodes = %d",count(root));
				printf("\ntotal leaf nodes = %d",count_leaf(root));
				printf("\ntotal non-leaf nodes = %d",count_nleaf(root));
				
				break;
				
		}
	}while(op!=10);
}
