#include<stdio.h>

void displaybits(unsigned value)
{
	unsigned c;
	unsigned mask = 1 << 31;

	printf("%u  = ",value);

	for (c =1; c<= 32;c++)
	{
		putchar( value & mask ? '1':'0');
		value <<= 1;

		if (c % 8 ==0)
		{
			printf(" ");
		}
	}

	putchar ('\n');
	return;
}


int main(void)
{

	unsigned num1,num2,mask,setbites;

	num1 = 65535;
	mask = 1;

	printf("the result of combining the following:\n");
	displaybits(num1);
	displaybits(mask);
	printf("using the bitwise and(&) operator:\n");
	displaybits(num1 & mask);


	num1 = 15;
	mask = 241;

	printf("\nthe result of combining the following:\n");
	displaybits(num1);
	displaybits(mask);
	printf("using the bitwise or(|) operator:\n");
	displaybits(num1 | mask);

	num1 = 139;
	mask = 199;

	printf("\nthe result of combining the following:\n");
	displaybits(num1);
	displaybits(mask);
	printf("using the bitwise exor(^) operator:\n");
	displaybits(num1 ^ mask);

	num1 = 21845;

	printf("\nthe result of combining the following:\n");
	printf("the one's complement (~) of ");
	displaybits(num1);
	printf("is :\n");
	displaybits(~num1);

	return 0;
}
