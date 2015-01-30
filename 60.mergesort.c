#define SIZE 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void displaysubarray(int array[],int left,int right)
{
	int i;


	for(i=0; i< left;i++)
	{
		printf("  ");
	}


	for(i=left; i<=right ;i++)
	{
		printf("%d ",array[i]);
	}
}

void merge(int array[],int left,int mid1,int mid2,int right)
{
	int leftindex = left;
	int rightindex = mid2;
	int comindex = left;
	int temparray[SIZE];
	int i;

	printf("merge:  ");
	displaysubarray(array,left,mid1);
	printf("\n        ");
	displaysubarray(array,mid2,right);
	printf("\n");

	while(leftindex <= mid1 && rightindex <= right)
	{
		if(array[leftindex] <= array[rightindex])
		{
			temparray[comindex++] = array[leftindex++];
		}

		else
		{
			temparray[comindex++] = array[rightindex++];
		}
	}

	if(leftindex == mid2)
	{
		while(rightindex <= right)
		{
			temparray[comindex++] = array[rightindex++];
		}
	}

	else
	{
		while(leftindex <= mid1)
		{
			temparray[comindex++] = array[leftindex++];
		}
	}

	for(i = left ;i <=right;i++)
	{
		array[i] = temparray[i];
	}

	printf("         ");
	displaysubarray(array,left,right);
	printf("\n\n");
}


void sortsubarray(int array[],int low,int high)
{
	int mid1,mid2;

	if((high - low) >= 1)
	{
		mid1 = (low + high)/2;
		mid2 = mid1+1;

		printf("split  :");
		displaysubarray(array,low,high);
		printf("\n        ");
		displaysubarray(array,low,mid1);
		printf("\n        ");
		displaysubarray(array,mid2,high);
		printf("\n\n");

		sortsubarray(array,low,mid1);
		sortsubarray(array,mid2,high);

		merge(array,low,mid1,mid2,high);
	}
}


void mergesort(int array[], int length)
{
	sortsubarray(array,0,length-1);
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

	mergesort(array,SIZE);

	printf("sorted array:\n");

	for(i =0; i<SIZE;i++)
	{
		printf("%d ",array[i]);
	}

	printf("\n\n");

	return 0;
}
