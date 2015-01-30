#include<stdio.h>
#define SIZE 10



void bubblesort(int *const array, const int size)
{
	void swap(int *ele1ptr, int *ele2ptr);

	int pass,i;

	for(pass =0; pass <size-1; pass++)
	{
		for(i=0 ;i<size-1; i++)
		{
			if(array[i] > array[i+1])
			{
				swap (&array[i],&array[i+1]);
			}
		}
	}
	return;
}

void swap(int *ele1ptr,int *ele2ptr)
{
	int hold = *ele1ptr;
	*ele1ptr = *ele2ptr;
	*ele2ptr = hold;

	return;
}

int main(void)
{
	int a[SIZE] = {2,5,33,23,55,3,22,87,86,11};

	int i;

	printf("array in original order\n");

	for(i=0 ;i<SIZE;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	bubblesort(a,SIZE);

	printf("array after bubble sort\n");

	for(i=0 ;i<SIZE;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}
