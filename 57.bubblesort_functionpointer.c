#include<stdio.h>
#define SIZE 10

int ascending(int i,int j)
{
	return  i>j;
}

int descending(int i,int j)
{
	return i<j;
}


void bubble(int a[], const int size, int (*compare) (int a,int b))
{
	int pass,i;

	void swap(int *ele1ptr,int *ele2ptr);

	for(pass =0; pass<size-1 ; pass++)
	{
		for(i=0; i< size-1; i++)
		{
			if ((*compare)(a[i],a[i+1]))
			{
				swap(&a[i],&a[i+1]);
			}
		}
	}
}

void swap(int *ele1ptr,int *ele2ptr)
{
	int temp;

	temp = *ele1ptr;
	*ele1ptr = *ele2ptr;
	*ele2ptr = temp;

	return;
}





int main(void)
{
	int order,i;

	int a[SIZE] = {33,4,6,7,22,345,76,0,11,3421};

	printf("enter 1 to sort in ascending order \n" "enter 2 to sort in descending order\n");
	scanf("%d",&order);

	printf("data items in original order\n");

	for(i=0 ;i< SIZE ;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	if (order ==1)
	{
		bubble(a,SIZE,ascending);
		printf("data items in ascending order\n");
	}

	else
	{
		bubble(a,SIZE,descending);
		printf("data items in descending order\n");
	}

	for (i=0; i<SIZE; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}

