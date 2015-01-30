#include<stdio.h>
#include<stdlib.h>

struct listnode{
	char data;
	struct listnode *nextptr;
};

typedef struct listnode Listnode;
typedef Listnode *Listnodeptr;

void instructions(void)
{
	printf("enter ur choice:\n" "1 to insert\n" "2 to delete\n" "3 to end\n");
}

void insert(Listnodeptr *sptr, char value)
{
	Listnodeptr newptr;
	Listnodeptr previousptr;
	Listnodeptr currentptr;

	newptr = malloc(sizeof(Listnode));

	if(newptr != NULL)
	{
		newptr->data = value;
		newptr->nextptr = NULL;

		previousptr = NULL;
		currentptr = *sptr;


		while(currentptr != NULL && value > currentptr->data)   // find correct location in the list
		{
			previousptr = currentptr;
			currentptr = currentptr->nextptr;
		}

		if(previousptr == NULL) // insert at the beginning of the list
		{
			newptr->nextptr = *sptr;
			*sptr = newptr;
		}

		else // insert node between prevPtr and curPtr
		{
			previousptr->nextptr = newptr;
			newptr->nextptr = currentptr;
		}
	}

	else
	{
		printf("%c not inserted..memory not available\n", value);
	}
}

char delete(Listnodeptr *sptr, char value)
{
	Listnodeptr previousptr;
	Listnodeptr currentptr;
	Listnodeptr tempptr;

	if(value == (*sptr)->data)  // delete first node
	{
		tempptr = *sptr;
		*sptr = (*sptr)->nextptr;
		free(tempptr);
		return value;
	}

	else
	{
		previousptr = *sptr;
		currentptr = (*sptr)->nextptr;

		while(currentptr != NULL && currentptr->data != value)
		{
			previousptr = currentptr;
			currentptr = currentptr->nextptr;
		}

		if (currentptr != NULL)  //delete node at currentPtr
		{
			tempptr = currentptr;
			previousptr->nextptr = currentptr->nextptr;
			free(tempptr);
			return value;
		}
	}
	return '\0';
}

int isempty(Listnodeptr sptr)
{
	return sptr == NULL;
}

void printlist(Listnodeptr sptr)
{
	if (sptr == NULL)
	{ 
		printf("list is empty..\n");
	}

	else
	{
		printf("the list is:\n");

		while(sptr != NULL)
		{
			printf("%c--> ",sptr->data);
			sptr = sptr->nextptr;
		}

		printf("NULL\n\n");
	}
}


int main()
{
	Listnodeptr startptr = NULL;
	int choice;
	char item;

	instructions();
	printf("?");
	scanf("%d",&choice);

	while(choice != 3)
	{
		switch(choice)
		{
			case 1:
				printf("enter a character\n");
				scanf("\n%c",&item);

				insert(&startptr,item);
				printlist(startptr);
				break;


			case 2:
				if (!isempty(startptr))
				{
					printf("enter a character to delete:\n");
					scanf("\n%c",&item);

					if(delete(&startptr,item))
					{
						printf("%c deleted\n",item);
						printlist(startptr);
					}

					else
					{
						printf("item not found\n");
						printlist(startptr);
					}
				}
				else 
				{
					printf("list is empty\n");
				}
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

	return 0;
}
