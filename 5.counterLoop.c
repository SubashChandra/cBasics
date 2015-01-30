// counter controlled



#include<stdio.h>

int main()
{
	int grade,total,average,counter;
	total = 0;
	counter =1;

	while(counter <=10)
	{
		printf("enter grade:\n");
		scanf("%d",&grade);
		total+=grade;
		counter+=1;
	}

	average = total/10;
	printf("average of 10 students is: %d\n",average);

	return 0;
}
