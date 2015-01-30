#include<stdio.h>
#include<stdlib.h>

struct treenode{
	struct treenode *leftptr;
	int data;
	struct treenode *rightptr;
};

typedef struct treenode Treenode;
typedef Treenode *Treenodeptr;



void inorder(Treenodeptr treeptr)
{

	if(treeptr !=NULL) 
	{
		inorder(treeptr->leftptr);
		printf("%3d",treeptr->data);
		inorder(treeptr->rightptr);

	}
}

void preorder(Treenodeptr treeptr)
{

	if(treeptr != NULL)
	{
		printf("%3d",treeptr->data);
		preorder(treeptr->leftptr);
		preorder(treeptr->rightptr);

	}
}

void postorder(Treenodeptr treeptr)
{

	if(treeptr != NULL)
	{
		postorder(treeptr->leftptr);
		postorder(treeptr->rightptr);
		printf("%3d",treeptr->data);

	}
}

void insert(Treenodeptr *treeptr, int value)
{
	if(*treeptr == NULL)
	{
		*treeptr = malloc(sizeof(Treenode));

		if(*treeptr != NULL)
		{
			(*treeptr)->data = value;
			(*treeptr)->leftptr = NULL;
			(*treeptr)->rightptr = NULL;
		}

		else 
		{
			printf("%d id not inserted.out of memory..\n",value);
		}
	}

	else
	{
		if (value < (*treeptr)->data)
		{
			insert(&((*treeptr)->leftptr),value);
		}

		else if (value > (*treeptr)->data)
		{
			insert(&((*treeptr)->rightptr),value);
		}

		else
		{
			printf("dup");
		}
	}
}


void main()
{
	Treenodeptr rootptr = NULL;
	int i,item;

	srand(time(NULL));
	printf("the numbers being placed in thr tree are:\n");

		for(i=1; i<=10; i++)
		{
			item = rand() % 15;
			printf("%3d", item);
			insert(&rootptr,item);
		}
	printf("\n\n");

	printf("the tree in preorder is:\n");
	preorder(rootptr);
	printf("\n\n");
	printf("the tree in inorder is:\n");
	inorder(rootptr);
	printf("\n\n");
	printf("the tree in postorder is:\n");
	postorder(rootptr);
	printf("\n\n");

}



