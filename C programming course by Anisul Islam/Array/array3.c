#include<stdio.h>
int main()
{
	int numbers[6]={-1,-4, 0,49,80,100};
	int searchNumber=49;
	int index;
	int found=-1;
	
	for(index=0; index<6; index++)
	{
		if(searchNumber==numbers[index])
		{
		found=index;
		break;
		}
	}
		if(found==-1)
		{
			printf("%d is not found", searchNumber, index);
		}
		else
		{
			printf("%d is found in numbers[%d]", searchNumber, index);
		}
}