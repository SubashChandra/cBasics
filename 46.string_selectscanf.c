#include<stdio.h>

int main(void)
{
	char a[40];

	printf("enter a string,will scan only vowels\n");
	scanf("%[aeiou]",a);

	printf("the scanned input was:%s\n",a);
	return 0;
}
