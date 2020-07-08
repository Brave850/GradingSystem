#include<stdio.h>


int main()
{
	int mark;
	printf("Enter marks: ");
	scanf("%d",&mark);
	if(mark>84 && mark<101)
		printf("Grade A\n");
	else if(mark>69 && mark<85)
		printf("Grade B\n");
	else if(mark>54 && mark<70)
		printf("Grade C\n");
	else if(mark>39 && mark<55)
		printf("Grade D\n");
	else if( mark<40)
		printf("Grade F\n");
	else
		printf("Invalid Input");
	return 0;
}
