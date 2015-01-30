#include<stdio.h>
#include<stdlib.h>

struct stacknode{
	int data;
	struct stacknode *nextptr;
};

typedef struct stacknode Stacknode;
typedef Stacknode *Stacknodeptr;

void instructions(void)
{
	printf("enter a choice:\n" "1 to push value\n" "2 to pop value\n" "3 to end\n\n");
}

void push(Stacknodeptr *headptr,int value)
{
	Stacknodeptr newptr;
	newptr = malloc(sizeof(Stacknode));

	if (newptr != NULL)
	{
		newptr->data = value;
		newptr->nextptr = *headptr;
		*headptr = newptr;
	}

	else
	{
		printf("%d not inserted..out of memory\n",value);
	}
}

int pop(Stacknodeptr *headptr)
{
	Stacknodeptr tempptr;
	int value;

	value = (*headptr)->data;
	tempptr = *headptr;
	*headptr = (*headptr)->nextptr;
	free(tempptr);


	return value;
}


void printstack(Stacknodeptr cptr)
{

	if(cptr == NULL)
	{
		printf("the stack is empty\n");
	}

	else 
	{
		printf("the stack is:\n");

		while(cptr != NULL)
		{
			printf("%d--> ",cptr->data);
			cptr = cptr->nextptr;
		}

		printf("NULL\n\n");

	}
}

int isempty(Stacknodeptr topptr)
{
	return topptr == NULL;
}


void main()
{
	Stacknodeptr headptr = NULL;
	int choice;
	int value;

	instructions();
	printf("?");
	scanf("%d",&choice);

	while(choice != 3)
	{
		switch(choice)
		{
			case 1:
				printf("enter an integer:\n");
				scanf("%d",&value);

				push(&headptr,value);
				printstack(headptr);
				break;

			case 2:
				if(!isempty(headptr))
				{
					printf("the poped value is :%d\n",pop(&headptr));
				}

				printstack(headptr);
				break;

			default:
				printf("invalid choice\n");
				instructions();
				break;

		}

		printf("?");
		scanf("%d",&choice);
	}

	printf("end of run\n");

}




