#include<stdio.h>

int main(void)
{
	char array[5];
	int a;
	printf("array = %p\n&array[0] = %p\n&array = %p\n", array,&array[0],&array);
//	printf("a = %p\n@a = %p\n", a,&a);

	return 0;
}
