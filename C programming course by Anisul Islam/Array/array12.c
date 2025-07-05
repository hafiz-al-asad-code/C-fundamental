#include<stdio.h>
int main()
{
    int numbers[ ]={10,20,30,40,77,90,-1,-4,0,7,201};
    int value, i, position=-1;
    
    printf("Enter the value that you want to search = ");
    scanf("%d", &value);;

	for(i=0; i<11; i++)
	{
		if(value==numbers[i])
		{
			position=i+1;
			break;
		}
	}
	
	if(position==-1)
	{
		printf("Not found");
	}
	else
	{
		printf("Number %d is in %d position", value, position);
	}
}