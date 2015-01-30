//sentinel controlled

#include<stdio.h>

int main(void)
{

	int grade,total,counter;
	float average;

	counter = 0;
	total = 0;

	printf("enter grade,-1 to end: ");
	scanf("%d",&grade);

	while(grade != -1)
	{
		total+=grade;
		counter+=1;

		printf("enter grade. -1 to end: ");
		scanf("%d",&grade);
	}

	if(counter!=0)
	{
		average = (float) total/counter;
		printf("class average is:  %.3f\n",average); 
	}
	else
	{
		printf("no grades were entered\n");
	}

	return 0;
}
