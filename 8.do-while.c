#include<stdio.h>

int main(void)
{
	int n,counter = 1;
	scanf("%d",&n);

	do{
		printf("%d ", counter);
	}while(++counter <= n);
	printf("\n");
	return 0;
}
