#include<stdio.h>
int main()
{
	int numbers[6]={1,-4, 0,49,80,100};
	int searchNumber=100;
	int index;
	
	for(index=0; index<6; index++)
	{
		if(searchNumber==numbers[index])
		break;
	}
		if(numbers[index]==searchNumber)
		{
			printf("%d is in numbers[%d]", searchNumber, index);
		}
		else
		{
			printf("Number is not found");
		}
}