#include<stdio.h>

int main(void)
{
	int a;
	int *aptr;

	a =7;
	aptr = &a;

	printf("the address of a is %p\n""the value of aptr is %p\n",&a,aptr);

	printf("\nthe value of a is %d\n""the value of *aptr is %d\n",a,*aptr);

	printf("\nshowing that * and & are complements to eachother" "\n*&aptr =%p" "\n&*aptr =%p\n", *&aptr,&*aptr);
	return 0;
}
