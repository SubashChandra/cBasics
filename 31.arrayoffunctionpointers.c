#include<stdio.h>

void func1(int a)
{
	printf("you entered %d,so func1 was called\n",a);
}

void func2(int b)
{
	printf("you entered %d,so func2 was called\n",b);
}


void func3(int c)
{
	printf("you entered %d,so func3 was called\n",c);
}

void main(void)
{
	void (*f[3])(int)={func1,func2,func3};

	int choice;
	printf("enter a choice between 1 and 3,4 to end\n");
	scanf("%d",&choice);

	while(choice>=1 && choice<4)
	{
		(*f[choice-1])(choice);

		printf("enter a choice between 1 and 3,4 to end\n");
		scanf("%d",&choice);
	}

	return;
}


