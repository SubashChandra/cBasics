#include<stdio.h>

void uselocal(void);
void usestaticlocal(void);
void useglobal(void);

int x = 1; //global var

int main(void)
{
	int x =5;  //local varto main

	printf("local x in outer scope of main %d\n",x);

	{
		int x = 7;  //local variable to new scope

		printf("local x in inner scope of main %d\n",x);
	}
	
	printf("local x in outer scope of main %d\n",x);

	uselocal();
	usestaticlocal();
	useglobal();
	uselocal();
	usestaticlocal();
	useglobal();

	printf("\n local x in main is %d\n",x);

	return 0;
}

void uselocal(void)
{

	int x = 25; //local in uselocal

	printf("\nlocal x in uselocal is %d\n",x);
	x++;
	printf("local x in uselocal after increment is %d\n",x);

}

void usestaticlocal(void)
{

	static int x = 50;
	printf("\nlocal x in usestaticlocal is %d\n",x);
	x+=25;
	printf("local x after +25 is %d\n",x);
}

void useglobal(void)
{
	printf("\nglobal x is %d\n", x);
	x*=10;
	printf("global x after *10 is %d\n",x);
}

