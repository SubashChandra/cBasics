#define SIZE 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printpass(int array[],int length,int pass,int index)
{
	int i;

	printf("after pass %2d: ",pass);

	for(i=0; i< index;i++)
	{
		printf("%d  ",array[i]);
	}

	printf("%d* ",array[index]);

	for(i=index+1; i<length;i++)
	{
		printf("%d  ",array[i]);
	}
	printf("\n               ");

	for(i=0;i<=pass;i++)
	{
		printf("--  ");
	}

	printf("\n");
}


void insertsort(int array[], int length)
{
	int insert,i;

	for(i =1;i < length-1;i++)
	{
		int moveitem = i;
		insert = array[i];
		
		while(moveitem > 0 && array[moveitem-1] > insert)
		{
			array[moveitem] = array[moveitem-1];
			moveitem--;
		}

		array[moveitem] = insert;
		
		printpass(array,length,i,moveitem);
	}
}


int main(void)
{
	int array[SIZE];
	int i;

	srand(time(NULL));

	for(i=0 ; i<SIZE; i++)
	{
		array[i] = rand()%90 +10;
	}
	printf("unsorted array:\n");

	for(i =0; i<SIZE;i++)
	{
		printf("%d ",array[i]);
	}

	printf("\n\n");

	insertsort(array,SIZE);

	printf("sorted array:\n");

	for(i =0; i<SIZE;i++)
	{
		printf("%d ",array[i]);
	}

	printf("\n\n");

	return 0;
}
