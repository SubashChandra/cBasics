#include<stdio.h>

int main()
{

	char a[33]="";

	printf("enter a string,will scan other than vowels\n");
	scanf("%[^aeiou]",a);

	printf("the scanned string is: %s\n",a);
	return 0;

}
