#include<stdio.h>

int main()
{
	char c;
	char sentence[100];
	int i =0;

	puts("enter a line of text\n");

	while((c= getchar()) != '\n')
	{
		sentence[i++] = c;
	}

	sentence[i] = '\0';

	puts("\nthe line entered was:\n");

	puts(sentence);

	return 0;
}
