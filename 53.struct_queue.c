#include<stdio.h>
#include<stdlib.h>

struct queuenode{
	char data;
	struct queuenode *nextptr;
};

typedef struct queuenode Queuenode;
typedef Queuenode *Queuenodeptr;

void instructions(void)
{
	printf("enter a choice:\n" "1 to enqueue value\n" "2 to dequeue value\n" "3 to end\n\n");
}

void enqueue(Queuenodeptr *headptr,Queuenodeptr *tailptr, char value)
{
	Queuenodeptr newptr;
	newptr = malloc(sizeof(Queuenode));

	if (newptr != NULL)
	{
		newptr->data = value;
		newptr->nextptr = NULL;

		if(isempty(*headptr))
		{
			*headptr = newptr;
		}
		else
		{
			(*tailptr)->nextptr = newptr;
		}

		*tailptr = newptr;

	}


	else
	{
		printf("%d not inserted..out of memory\n",value);
	}
}

char dequeue(Queuenodeptr *headptr, Queuenodeptr *tailptr)
{
	Queuenodeptr tempptr;
	char value;

	value = (*headptr)->data;
	tempptr = *headptr;
	*headptr = (*headptr)->nextptr;
	free(tempptr);

	if (*headptr == NULL)
	{
		*tailptr = NULL;
	}

	return value;
}


void printqueue(Queuenodeptr cptr)
{

	if(cptr == NULL)
	{
		printf("the queue is empty\n");
	}

	else 
	{
		printf("the queue is:\n");

		while(cptr != NULL)
		{
			printf("%c--> ",cptr->data);
			cptr = cptr->nextptr;
		}

		printf("NULL\n\n");

	}
}

int isempty(Queuenodeptr topptr)
{
	return topptr == NULL;
}


void main()
{
	Queuenodeptr headptr = NULL;
	Queuenodeptr tailptr = NULL;
	int choice;
	char value;

	instructions();
	printf("?");
	scanf("%d",&choice);

	while(choice != 3)
	{
		switch(choice)
		{
			case 1:
				printf("enter a character:\n");
				scanf("\n%c",&value);

				enqueue(&headptr,&tailptr,value);
				printqueue(headptr);
				break;

			case 2:
				if(!isempty(headptr))
				{
					printf("the dequeued value is :%c\n",dequeue(&headptr,&tailptr));
				}

				printqueue(headptr);
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



