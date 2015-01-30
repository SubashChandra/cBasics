#include<stdio.h>

void displaybits(unsigned value)
{
	unsigned c;
	unsigned mask = 1 << 31;

	printf("mask is : %u\n",mask);
	printf ("unsigned integer %u value is: ",value);

	for(c=1 ;c<=32;c++)
	{
		putchar(value & mask ? '1': '0');
		value <<= 1;

		if(c % 8 == 0)
		{
			putchar(' ');
		}
	}
	printf("\n");
	return;

}

int main(void)
{
	unsigned i;
	printf("enter a unsigned integer:\n");

	scanf("%u",&i);
	displaybits(i);

	return 0;
}
