#include<stdio.h>
int main()
{
	int index, sum=0;
	int numbers[6];
	float avg;
	for(index=0; index<6; index++)
	{
		printf("numbers[%d] = ", index);
		scanf("%d", &numbers[index]);
	}	
	
	for(index=0; index<6; index++)
	{
		printf("%d\n", numbers[index]);
	
		sum= sum + numbers[index];
	}
		printf("The Sum = %d\n", sum);
		
		avg=(float) sum/6;
		printf("The average is = %.2f", avg);
}