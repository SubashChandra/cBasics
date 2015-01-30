#include<stdio.h>

void reverse(const char * const sptr)
{
	if(sptr[0] == '\0')
	{
		return;
	}

	else
	{
		reverse(&sptr[1]);
		putchar(sptr[0]);
	}
}

int main()
{
	char sentence[80];

	printf("enter a line of text:\n");

	gets (sentence);

	printf("line printed in reverse order:\n");

	reverse(sentence);
	printf("\n");
	return 0;
}
