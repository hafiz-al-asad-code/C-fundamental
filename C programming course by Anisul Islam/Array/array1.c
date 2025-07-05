#include<stdio.h>
int main()
{
	int index;
	int numbers[8]={10, 20, 40, 66, 44, 120, 90, 0};
	int minimum=numbers[0];
	int maximum=numbers[0];
	
	for(index=0; index<8; index++)
	{
		if(minimum>numbers[index])
		{
			minimum=numbers[index];
		}
		
		if(maximum<numbers[index])
		{
			maximum=numbers[index];
		}
	}
	printf("The minimum numbers is = %d\n", minimum);
	printf("The maximum number is = %d", maximum);
}
